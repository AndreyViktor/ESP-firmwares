#include <ESP8266WiFi.h>

byte mac[] = { 0xDE, 0xAD, 0xBE, 0xEF, 0xFE, 0xED };
IPAddress softApIp(192, 168, 43, 24);
unsigned int localPort = 5000;

//WiFiUDP UDP;

void setup() {
   Serial.begin(115200);
   Serial.println(WiFi.softAP("Smart Home") ? "Soft AP as Smart Home is ready" : "Failed to set SoftAP network");

}

void loop() {
      
      switch(WiFi.status()){
        case WL_CONNECTED: //after successful connection is established
          Serial.println("conexão com rede residencial estabelecida");
        break;

        case WL_NO_SSID_AVAIL: // SSID canot be reached
          Serial.println("Rede não encontrada");
        break;

        case WL_CONNECT_FAILED: //password incorrect
          Serial.println("senha incorreta");
        break;

        case WL_IDLE_STATUS:// connecting...
          Serial.println("conectando");
        break;

        case WL_DISCONNECTED: // station disconnected
           WiFi.begin("Sobrado27", "kandauroff123");
        break;
      }

}
