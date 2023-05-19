#include <ESP8266WiFi.h>
#include <PubSubClient.h>

#define DEBUG
#define pino_sinal_analogico A0

#define pino_bomba 14

int valor_analogico;
String strMSG = "0";
char mensagem[30];

const char* ssid = "RegaMackenzie";
const char* password =  "123456jose";
const char* mqttServer = "hairdresser.cloudmqtt.com";
const char* mqttUser = "dkdbaexj"; 
const char* mqttPassword = "AOynil0SnPmd";      
const int mqttPort = 16641;                    
const char* mqttTopicSub = "rega";     

WiFiClient espClient;
PubSubClient client(espClient);


void setup() {
  Serial.begin(9600);
  pinMode(pino_sinal_analogico, INPUT);
  pinMode(pino_bomba, OUTPUT);

  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
#ifdef DEBUG
    Serial.println("Aguarde! Conectando ao Wi-Fi.");
#endif
  }
#ifdef DEBUG
  Serial.println("Conexão OK!");
#endif

  client.setServer(mqttServer, mqttPort);
  client.setCallback(callback);

  while (!client.connected()) {
#ifdef DEBUG
    Serial.println("Conectando ao MQTT.");
#endif

    if (client.connect("ESP8266Client", mqttUser, mqttPassword )) {
#ifdef DEBUG
      Serial.println("Conectado com sucesso!");
      Serial.println("--------------------------------");
#endif

    } else {
#ifdef DEBUG
      Serial.print("Erro: ");
      Serial.print(client.state());
#endif
      delay(2000);
    }
  }

  client.subscribe(mqttTopicSub);

}

void loop() {

  if (!client.connected()) {
    Serial.print("Passou no Connected");
    reconect();

  }
 


  valor_analogico = analogRead(pino_sinal_analogico);

  Serial.println("--------------------------------");
  Serial.print("Leitura do sensor: ");
  Serial.println(valor_analogico);

    if (valor_analogico >= 0 && valor_analogico < 500)
    {
      Serial.println("Status do solo: Umido.");

      digitalWrite (pino_bomba, HIGH);
  
      
      sprintf(mensagem, "Umido"); 
      Serial.print("Estatus da rega: ");
      Serial.println(mensagem);
      client.publish("rega", mensagem);
      Serial.println("Envio ao MQTT OK!");
  
    }

 
  
    if (valor_analogico >= 501 && valor_analogico <= 1024)
    {
      Serial.println("Status do solo: Seco.");

      digitalWrite (pino_bomba, LOW);
  
      
      sprintf(mensagem, "Regando"); 
      Serial.print("Estatus da rega: ");
      Serial.println(mensagem); 
      client.publish("rega", mensagem);
      Serial.println("Envio ao MQTT OK!");
  
    }
  delay(3000);

  client.loop();

}

void callback(char* topic, byte* payload, unsigned int length) {


  payload[length] = '\0';
  strMSG = String((char*)payload);

#ifdef DEBUG
  Serial.print("Mensagem topic: ");
  Serial.println(topic);
  Serial.print("Mensagem:");
  Serial.print(strMSG);
  Serial.println();
  Serial.println("--------------------------------");
#endif

}


void reconect() {
  
  while (!client.connected()) {
#ifdef DEBUG
    Serial.print("Tentando conectar ao servidor MQTT");
#endif

    bool conectado = strlen(mqttUser) > 0 ?
                     client.connect("ESP8266Client", mqttUser, mqttPassword) :
                     client.connect("ESP8266Client");

    if (conectado) {
#ifdef DEBUG
      Serial.println("Conectado!");
#endif
      
      client.subscribe(mqttTopicSub, 1); 
    } else {
#ifdef DEBUG
      Serial.println("Falha durante a conexão. Code: ");
      Serial.println( String(client.state()).c_str());
      Serial.println("Tentando novamente em 30s");
#endif
     
      delay(20000);
    }
  }
}
