#include <WiFi.h>  // Biblioteca para Wi-Fi

// Configurações da rede Wi-Fi
const char* ssid = "SEU_SSID";       // Substitua pelo nome da sua rede Wi-Fi
const char* password = "SUA_SENHA"; // Substitua pela senha da sua rede Wi-Fi

// Pino do LED
const int ledPin = 2; // D2 no ESP32 (GPIO2)

void setup() {
  // Configuração inicial
  Serial.begin(115200);         // Inicializa a comunicação serial
  pinMode(ledPin, OUTPUT);      // Define o pino do LED como saída
  digitalWrite(ledPin, LOW);    // Garante que o LED inicie apagado

  // Conexão Wi-Fi
  Serial.println("Conectando ao Wi-Fi...");
  WiFi.begin(ssid, password);   // Inicia a conexão Wi-Fi

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("\nConectado ao Wi-Fi!");
  Serial.print("IP obtido: ");
  Serial.println(WiFi.localIP()); // Exibe o IP atribuído ao ESP32

  digitalWrite(ledPin, HIGH);   // Acende o LED para indicar conexão
}

void loop() {
  // Caso deseje realizar verificações contínuas, inclua lógica aqui
}
