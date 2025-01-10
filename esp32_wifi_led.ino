#include <WiFi.h>  // Library for Wi-Fi / Biblioteca para Wi-Fi

// Wi-Fi network configuration / Configuração da rede Wi-Fi
const char* ssid = "YOUR_SSID";       // Replace with your Wi-Fi network name / Substitua pelo nome da sua rede Wi-Fi
const char* password = "YOUR_PASSWORD"; // Replace with your Wi-Fi password / Substitua pela senha da sua rede Wi-Fi

// LED pin configuration / Configuração do pino do LED
const int ledPin = 2; // D2 on ESP32 (GPIO2) / D2 no ESP32 (GPIO2)

void setup() {
  // Initial setup / Configuração inicial
  Serial.begin(115200);         // Initialize serial communication / Inicializa a comunicação serial
  pinMode(ledPin, OUTPUT);      // Set LED pin as output / Define o pino do LED como saída
  digitalWrite(ledPin, LOW);    // Ensure LED starts turned off / Garante que o LED inicie apagado

  // Connecting to Wi-Fi / Conectando ao Wi-Fi
  Serial.println("Connecting to Wi-Fi..."); // Display connecting status / Exibe o status de conexão
  WiFi.begin(ssid, password);   // Start Wi-Fi connection / Inicia a conexão Wi-Fi

  // Wait until connected / Aguarda até conectar
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);                 // Wait 500ms / Aguarde 500ms
    Serial.print(".");          // Print dots to indicate progress / Imprime pontos para indicar progresso
  }

  // Connected successfully / Conexão bem-sucedida
  Serial.println("\nConnected to Wi-Fi!"); // Connection message / Mensagem de conexão
  Serial.print("IP address: ");            // Print IP address / Exibe o endereço IP
  Serial.println(WiFi.localIP());          // Show assigned IP address / Mostra o endereço IP atribuído

  digitalWrite(ledPin, HIGH);   // Turn on the LED to indicate success / Acende o LED para indicar sucesso
}

void loop() {
  // Add logic here for continuous checks if needed / Adicione lógica aqui para verificações contínuas, se necessário
}
