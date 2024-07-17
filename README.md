Introduction

This project builds a smart plug with a timer-controlled cutoff switch using an Arduino microcontroller programmed in C. It allows you to set a timer for your appliance to automatically shut off after a specified duration.

Hardware Components

Arduino Uno or compatible board
Relay module (rated for your appliance's current)
Power supply (appropriate voltage for Arduino and relay)
Three push buttons (for time decrement, increment, and start)
Six LEDs (optional, for visual time indication)
Connecting wires
Appliance to be controlled (ensure compatibility with relay's current rating)
Connections

Connect the Arduino's 5V pin to the relay module's VCC pin.
Connect the Arduino's ground pin to the relay module's GND pin.
Connect the Arduino's pin 2 (or a different digital output pin) to the relay module's control pin.
Connect the three push buttons to Arduino's digital pins 3 (decrement), 4 (increment), and 5 (start) (these pin numbers can be adjusted based on your preference).
Connect the six LEDs (optional) to Arduino's digital pins 6 to 11 (these pin numbers can be adjusted based on your preference). Connect each LED's anode (longer leg) to its respective pin and the cathodes (shorter legs) to a common ground resistor (e.g., 220 ohms) connected to ground.
