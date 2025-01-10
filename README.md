#English
ESP32 Wi-Fi Connection Test with LED Indicator

This project is a simple Arduino sketch for the ESP32 that tests the device's connection to a Wi-Fi network and uses an LED indicator to signal the connection status.
Features

    Connects the ESP32 to a specified Wi-Fi network.
    Lights up an LED connected to GPIO2 (D2) when the connection is successful.
    Displays the device's IP address on the serial monitor after connecting.

Requirements

    ESP32 development board.
    Arduino IDE with ESP32 board support installed.
    Wi-Fi network credentials (SSID and password).
    An LED and a 330-ohm resistor connected to GPIO2.

How It Works

    The ESP32 attempts to connect to the specified Wi-Fi network using the credentials provided in the code.
    While connecting, status messages are printed to the serial monitor for debugging.
    Once connected:
        The LED on GPIO2 lights up to indicate a successful connection.
        The device's IP address is displayed on the serial monitor.

Setup Instructions

    Clone or download this repository to your local machine.
    Open the esp32_wifi_led.ino file in the Arduino IDE.
    Replace the placeholders SEU_SSID and SUA_SENHA with your Wi-Fi network's SSID and password.
    Connect an LED to GPIO2 with a 330-ohm resistor in series.
    Upload the sketch to your ESP32 using the Arduino IDE.
    Open the Serial Monitor at 115200 baud to view connection status and the assigned IP address.

Hardware Setup

    LED: Connect the positive leg (anode) of the LED to GPIO2 and the negative leg (cathode) to the ground through a 330-ohm resistor.
    ESP32: Ensure it's properly connected to your computer via USB for programming.

Example Output

    Conectando ao Wi-Fi...
    ......
    Conectado ao Wi-Fi!
    IP obtido: 192.168.0.102

Troubleshooting

    If the LED does not light up, verify the Wi-Fi credentials and ensure your ESP32 is within range of the Wi-Fi network.
    Check the wiring of the LED and resistor to ensure proper connections.
    Use the Serial Monitor to diagnose connection issues.

-x-

#Portuguese
Teste de Conexão Wi-Fi com ESP32 e Indicador LED

Este projeto é um sketch simples para o ESP32 que testa a conexão do dispositivo a uma rede Wi-Fi e utiliza um LED como indicador de status da conexão.
Funcionalidades

    Conecta o ESP32 a uma rede Wi-Fi especificada.
    Acende um LED conectado ao GPIO2 (D2) ao estabelecer uma conexão bem-sucedida.
    Exibe o endereço IP do dispositivo no monitor serial após a conexão.

Requisitos

    Placa de desenvolvimento ESP32.
    IDE Arduino com suporte configurado para ESP32.
    Credenciais de uma rede Wi-Fi (SSID e senha).
    Um LED e um resistor de 330 ohms conectados ao GPIO2.

Como Funciona

    O ESP32 tenta se conectar à rede Wi-Fi especificada utilizando as credenciais fornecidas no código.
    Durante o processo de conexão, mensagens de status são exibidas no monitor serial para depuração.
    Após a conexão:
        O LED no GPIO2 é aceso para indicar sucesso.
        O endereço IP do dispositivo é exibido no monitor serial.

Instruções de Configuração

    Clone ou faça o download deste repositório para sua máquina.
    Abra o arquivo esp32_wifi_led.ino na IDE Arduino.
    Substitua os placeholders YOUR_SSID e YOUR_PASSWORD pelo nome e senha da sua rede Wi-Fi.
    Conecte um LED ao GPIO2 com um resistor de 330 ohms em série.
    Faça o upload do código para o ESP32 usando a IDE Arduino.
    Abra o Monitor Serial configurado a 115200 baud para visualizar o status da conexão e o IP atribuído.

Montagem do Hardware

    LED: Conecte a perna positiva (ânodo) do LED ao GPIO2 e a perna negativa (cátodo) ao terra através de um resistor de 330 ohms.
    ESP32: Certifique-se de que está devidamente conectado ao computador via USB para a programação.

Exemplo de Saída

    Conectando ao Wi-Fi...
    ......
    Conectado ao Wi-Fi!
    IP obtido: 192.168.0.102

Solução de Problemas

    Caso o LED não acenda, verifique as credenciais da rede Wi-Fi e assegure-se de que o ESP32 está dentro do alcance do roteador.
    Verifique a fiação do LED e do resistor para garantir conexões corretas.
    Use o Monitor Serial para diagnosticar problemas de conexão.
