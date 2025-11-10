                     Princess Smart Light
Project Overview:

This project is a Bluetooth voice-controlled light system built with Arduino Uno.
It allows me to say commands like:

“Princess turn on the light” 

“Princess turn off the light” 

And the LED connected to pin 12 responds accordingly.
Dedicated to my lovely princess(HAFSAT).

How It Works:

The project uses:

HC-05 Bluetooth Module for wireless voice command communication

Arduino Uno to process the command and control the LED

SoftwareSerial Library for serial communication with Bluetooth

When the Bluetooth receives:

"princess turn on the light" → LED turns ON

"princess turn off the light" → LED turns OFF


Components Used:
| Component              | Quantity | Description                    |
| ---------------------- | -------- | ------------------------------ |
| Arduino Uno            | 1        | Main microcontroller           |
| HC-05 Bluetooth Module | 1        | Handles wireless communication |
| LED                    | 1        | Represents the light           |
| 220Ω Resistor          | 1        | Current limiter for LED        |
| Jumper Wires           | Several  | Connections                    |
| Breadboard             | 1        | For testing connections        |


Voice Commands:
| Command                     | Action        |
| --------------------------- | ------------- |
| princess turn on the light  | Turns LED ON  |
| princess turn off the light | Turns LED OFF |

Upload Instructions:

Copy the Arduino code below.

Open Arduino IDE, paste the code, and select your board and COM port.

Upload it to your Arduino.

Connect the Bluetooth module (TX–RX, RX–TX).

Pair your phone and use a Bluetooth terminal or voice control app, but me i made my own app using MIT App Inevntor

Made With Love:

“This project is dedicated to my Princess❤️(HAFSAT) — because love shines brightest when you make things together.”

— By Mansur Isah (SmartSense)









































