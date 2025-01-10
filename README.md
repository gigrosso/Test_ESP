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
