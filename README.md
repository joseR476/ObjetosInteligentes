# Objetos Inteligentes

# Participantes:

Everton Grima Gasparini <br />
José Reinaldo dos Santos Junior <br />
Luciana Gomes de Almeida Carneiro Rodrigues <br />

# Objetivo do projeto:

O projeot a seguir tem o objetivo a apresentação do projeto da matéria de Objetos Inteligentes Conectados, que tem o intuito de conectar a natureza com a IOT (Internet of Things – Internet das Coisas). <br />
Na pesquisa feita, identificamos um mercado de atuação para tal desenvolvimento, onde encontramos uma problemática através de estudo e pesquisa com um usuário, a rega de plantas domésticas. Foi relatado a dificuldade de manter suas plantas devidamente irrigadas, devido a rotina apertada; em períodos de calor, a ausência da irrigação pode acarretar o comprometimento do desenvolvimento da planta.
Por muito tempo, o homem vem cultivando plantas em seu domicílio, porém nem todos aqueles que amam plantas possuem tempo e disponibilidade de cuidar de tal, incluindo a irrigação que é algo primordial para a flora.
Nesse estudo de caso, a equipe decidiu desenvolver um sistema de irrigação automática reutilizando água coletada da chuva, sendo assim uma forma sustentável de automação.<br />
O projeto contará com integração via notificações no smartphone sobre a umidade do solo.<br />
O sistema de irrigação será doado ao usuário final que fará o proveito de 100% do que foi desenvolvido, garantindo assim a total usabilidade da aplicação.
A ideia é fazer o uso do NodeMCU, juntamente com sensores que identificarão o momento exato de realizar a rega e a visualização da quantidade de umidade no solo. 
Nesse artigo, teremos a apresentação do tema, uma revisão histórica, projeto sendo implementado, materiais a serem usados, plataforma, critérios básicos para aplicação, esquema eletrônico e vídeo do projeto rodando (virtualmente e fisicamente).<br />
Há indícios de que ela começou a ser praticada em 6.000 a.c, nas margens do Rio Nilo, no Egito. O precursor das técnicas foi o Faraó Ramsés III, que construiu um canal para que as águas fossem redirecionadas aos locais onde era necessária para o melhor desenvolvimento das plantações. O objetivo da agricultura irrigada é fornecer a água necessária para que uma lavoura consiga se desenvolver, independentemente da região onde é feito o cultivo. Com isso, o negócio também consegue se manter produtivo por mais tempo — afinal, a irrigação garante a oferta de água mesmo em épocas de seca. Ao longo do tempo com o avanço da tecnologia, tivemos grandes evoluções, trazendo automatização e melhor entendimento sobre o tema.<br />


# Lista de Materiais:

**Materiais:<br />**

Para compor o nosso projeto, segue lista de materiais, juntamente com sua descrição:<br />
•	Módulo WIFI NodeMCU ESP8266;<br />
•	Protoboard;<br />
•	Sensor de umidade do solo;<br />
•	Módulo relé 5V;<br />
•	Minibomba Água Sapo Submersa;<br />
•	Fonte 5V;<br />
•	Microtubo Pvc Flexível 3mm X 5 Mm.<br />

# Descrição dos Objetos:

**Modulo Node Mcu Esp8266:<br />**
![20230518_213946](https://github.com/joseR476/ObjetosInteligentes/assets/86845373/e38ca769-9354-4a81-93fa-68117cdfb574)

O módulo WiFi ESP8266 é um dispositivo de comunicação sem fio que incorpora uma pilha de protocolo TCP/IP completa. Ele é usado em uma ampla variedade de projetos de IoT e sistemas embarcados, nos quais é necessário adicionar conectividade WiFi a um dispositivo.<br />
O módulo ESP8266 oferece suporte a vários modos de operação, incluindo o modo estação , no qual ele pode se conectar a um ponto de acesso WiFi existente, e o modo ponto de acesso , no qual ele pode atuar como um ponto de acesso WiFi para outros dispositivos se conectarem a ele.<br />
Ele pode ser programado usando a IDE do Arduino ou outras ferramentas de desenvolvimento compatíveis.<br />

**Protobord:<br />**
![20230320_223109](https://github.com/joseR476/ObjetosInteligentes/assets/86845373/e5d71914-ad31-4987-9857-395947f55b64)

A protoboard é projetada para permitir que os componentes eletrônicos sejam inseridos e conectados sem a necessidade de solda.
Ela é composta por uma matriz de furos que estão conectados eletricamente em linhas e colunas. Esses furos são usados para inserir e interconectar componentes eletrônicos, como resistores, capacitores, diodos, transistores e outros, permitindo que sejam facilmente testados e reconfigurados.
Ela será uma ferramenta muito útil para nosso projeto, já que permitem conectar diferentes componentes e topologias de circuitos sem a necessidade de solda ou conhecimento avançado de circuitos eletrônicos.<br />

**Sensor de umidade do solo:<br />**
![20230320_222929](https://github.com/joseR476/ObjetosInteligentes/assets/86845373/1eb1400b-af2e-4e6e-a273-5f83d03d8ff4)

Um sensor de umidade do solo é um dispositivo eletrônico usado para medir a quantidade de água presente no solo. Ele funciona detectando a condutividade elétrica do solo, que é diretamente relacionada à quantidade de água presente.
Os sensores de umidade do solo geralmente possuem duas partes: uma sonda e um circuito eletrônico. A sonda é inserida no solo e mede a condutividade elétrica entre dois ou mais eletrodos. O circuito eletrônico recebe os sinais elétricos da sonda e converte a condutividade elétrica em uma medida de umidade.
Os sensores de umidade do solo são comumente usados em sistemas de irrigação automática para monitorar a umidade do solo e garantir que as plantas recebam água suficiente sem excesso. Eles também são usados em estudos agrícolas e de pesquisa para monitorar as condições do solo e prever o crescimento das plantas.
Os valores obtidos desse sensor será enviado para o nosso display LCD 16x2 e por programação ao nosso usuário. <br />

**Módulo relé 5V:<br />**
![20230320_223019](https://github.com/joseR476/ObjetosInteligentes/assets/86845373/c35788d3-8753-4b5c-a816-62f89fe85117)

Um módulo relé 5V é um componente eletrônico usado para controlar circuitos elétricos com sinais de baixa tensão, como os gerados por microcontroladores, como o Arduino. Ele é composto por um relé e um circuito eletrônico que fornece a energia necessária para acionar o relé.
O relé é um interruptor eletromecânico que pode ser acionado por um sinal elétrico. Quando o sinal é aplicado ao relé, um campo magnético é gerado, o que fecha um conjunto de contatos, permitindo que a corrente elétrica flua através de um circuito externo. Os módulos relé são capazes de controlar circuitos elétricos de alta tensão e corrente, geralmente até algumas dezenas de volts e amperes.
O módulo relé 5V é projetado para ser alimentado com uma tensão de 5V, o que o torna compatível com a maioria dos microcontroladores, incluindo o Arduino. Ele geralmente é conectado ao microcontrolador por meio de um conjunto de pinos, permitindo que o microcontrolador controle o estado do relé (ligado ou desligado) através de um sinal elétrico digital.<br />
Ele que fará a função de liberar energia para a válvula solenoide, que tem a função de liberar a água para a irrigação.<br />

**Minibomba Água Sapo Submersa:<br />**
![20230518_214002](https://github.com/joseR476/ObjetosInteligentes/assets/86845373/ad475441-43ef-4104-9716-ad750b9e4c4f)

Uma mini bomba de água Sapo submersa é um dispositivo compacto projetado para bombear água em pequenas quantidades. Essas bombas são especialmente projetadas para operarem submersas em líquidos, geralmente água, e são frequentemente usadas em aquários, fontes de água, sistemas de refrigeração, irrigação de jardins pequenos e outros projetos semelhantes. As mini bombas de água Sapo submersas são alimentadas por eletricidade e possuem um motor interno que aciona o mecanismo de bombeamento. Essas bombas geralmente possuem uma entrada de água em uma extremidade e uma saída de água na outra.
Quando a bomba é ligada, o motor aciona um impulsor ou rotor que cria um fluxo de água, puxando-a pela entrada e bombeando-a pela saída. A capacidade de bombeamento e a altura máxima de elevação variam entre os modelos de mini bomba de água Sapo, portanto é importante verificar as especificações do fabricante antes de adquirir uma.<br />

**Fonte 5V: <br />**
![Fonte-12V-1A-Bivolt-Plug-P4-5-5-X-2-1mm-Para-CFTV-FC1201_1678970954_gg](https://github.com/joseR476/ObjetosInteligentes/assets/86845373/94eaa9a6-45f1-4bdb-a253-a8a58aa93770)

Uma fonte de 5V, também conhecida como fonte de alimentação de 5 volts, é um dispositivo eletrônico projetado para fornecer uma saída de energia elétrica constante de 5 volts. Ela converte uma entrada de energia, geralmente proveniente de uma tomada de parede (AC) ou de uma fonte de energia de maior tensão, em uma tensão de saída fixa de 5 volts (DC), adequada para alimentar uma variedade de dispositivos eletrônicos.<br />

**Microtubo Pvc Flexível 3mm X 5 Mm:<br />**
![20230518_214350](https://github.com/joseR476/ObjetosInteligentes/assets/86845373/9f5e9769-7ab5-49c2-9567-be6456983530)

Um microtubo PVC flexível de 3mm x 5mm é um tubo de plástico feito de policloreto de vinila que possui um diâmetro externo de 3mm e um diâmetro interno de 5mm. Esses microtubos são projetados para serem flexíveis e maleáveis, permitindo que sejam facilmente dobrados e adaptados a diferentes necessidades de encaminhamento de fluidos.
O PVC é um material comumente usado em tubos devido à sua durabilidade, resistência química e flexibilidade. O microtubo de PVC flexível de 3mm x 5mm é frequentemente usado em aplicações de pequena escala, como sistemas de irrigação, sistemas de gotejamento, sistemas de refrigeração, projetos de automação e outros projetos que requerem transporte de líquidos ou gases em espaços reduzidos.

# Site e Aplicativo Usados Para a Comunicação MQTT:
**Cloudmqtt<br />**
https://customer.cloudmqtt.com/instance

**MQTT Dashboard Client<br />**
https://play.google.com/store/apps/details?id=com.doikov.mqttclient
