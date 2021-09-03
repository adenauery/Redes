# Redes


#### Tutorial sobre o GitHub
  * [Material sobre GitHub da FullCycle](https://fullcycle.com.br/git-e-github/) - [site da FullCycle](https://fullcycle.com.br/)

#### Tutoriais sobre a Linguagem C
  * [Tutorial 1](https://pt.wikibooks.org/wiki/Programar_em_C)
  * [Tutorial 2](https://wiki.ifsc.edu.br/mediawiki/index.php/AULA_5_-_Introdu%C3%A7%C3%A3o_%C3%A0_Linguagem_C_-_FIC#INTRODU.C3.87.C3.83O)


#### Protocolo MQTT
  * Conceitos
    * [Site de Referência do MQTT](https://mqtt.org/)
    * [Protocolo MQTT - Material IBM](https://www.ibm.com/developerworks/br/library/iot-mqtt-why-good-for-iot/index.html)
    * [Protocolo MQTT - Material Curto Circuito](https://www.curtocircuito.com.br/blog/introducao-ao-mqtt/)
    * [Slides sobre MQTT - Material UFC](https://pt.slideshare.net/MaurcioMoreiraNeto/protocolo-mqtt-redes-de-computadores)
    * [Comparação MQTT & Outros Protocolos](https://medium.com/internet-das-coisas/iot-05-dando-uma-breve-an%C3%A1lise-no-protocolo-mqtt-e404e977fbb6)
  * Plataformas de Software
    * [Mosquitto da Eclipse Foundation](https://mosquitto.org)
    * [Brokers MQTT gratuitos e pagos para utilizar em projetos da IoT](https://diyprojects.io/8-online-mqtt-brokers-iot-connected-objects-cloud/#.XzfHmEl7nUI)


#### Instalando Clientes da Plataforma Mosquitto no Linux

* sudo apt install mosquitto-clients
* Testes: 
  * Broker utilizado: broker.emqx.io
  * mosquitto_sub -h broker.emqx.io -t pi2a  (**subscrição**)
  * mosquitto_pub -h broker.emqx.io -t pi2a -m "Primeira Conexao"   (**publicação**)

#### Lendo Dados Disponíveis de Forma Pública

  * mosquitto_sub -h broker.emqx.io -t pi2a/temps

#### Instalando Clientes da Plataforma Mosquitto em Outros Sistemas Operacionais

* [Link para Download](https://mosquitto.org/download/)

#### Para Compilar programas em C no Linux utilizar:
* gcc publica-mqtt.c -o publica-mqtt  (após o "-o" fica o nome do programa executável

#### Procedimentos Definidos
* Elabore um programa em C que faça Leitura dos Participantes Ativos. Utilizar o comando MQTT a seguir como base: mosquitto_sub -h broker.emqx.io -t pi2a/nomes
* Construa um programa em C que solicite a manifestação dos participantes ativos. Empregar o comando MQTT a seguir como base: mosquitto_pub -h broker.emqx.io -t pi2a -m ????
* Criar um programa em C que imprima o nome do participante (considerando a URI pi2a/nomes) a partir da postagem de "????" na URI pi2a/comandos. Utiizar a construção abaixo:
   * mosquitto_sub -h broker.emqx.io -t pi2a/comandos | ./le-anuncia-mqtt
* Construa um programa que fique exibindo as mensagens postadas para os participantes ativos. Utilize a URI pi2a/msgs e o comando grep para filtrar as mensagens para um participante específico. Abaixo exemplo de comando:
   *  mosquitto_sub -h broker.emqx.io -t pi2a/msgs | grep "adenauer:"
