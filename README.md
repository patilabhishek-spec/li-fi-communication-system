# Li-Fi Communication System (Mobile Flash to LCD)

## Description
This project demonstrates a Li-Fi (Light Fidelity) communication system where data is transmitted using a mobile flashlight and received using a photodiode. The received signal is processed by a microcontroller and displayed as text on an LCD.

## Objective
To implement wireless communication using visible light instead of radio frequency and display transmitted messages on an LCD.

## Components Used
- Mobile Flashlight (Transmitter)
- Photodiode / LDR (Receiver)
- Arduino / Microcontroller
- LCD Display (16x2)
- Resistors and Power Supply

## Working Principle
- The mobile flashlight is used to transmit data in the form of light pulses.
- Flash ON represents HIGH (1) and Flash OFF represents LOW (0).
- The photodiode detects the incoming light and converts it into electrical signals.
- The microcontroller reads this analog signal and converts it into digital binary data.
- Binary data is decoded into characters.
- The decoded message (e.g., "HI HELLO") is displayed on the LCD.

## Key Features
- Wireless communication using visible light
- No RF interference
- Secure short-range communication
- Real-time message display on LCD

## Challenges Faced
- Ambient light interference caused incorrect detection  
  → Solved by covering the sensor and adjusting threshold values  
- Fast blinking caused decoding errors  
  → Solved by adding delays and controlling flash speed  

## Applications
- Secure indoor communication
- Communication in RF-restricted areas
- Smart lighting systems

## Conclusion
This project successfully demonstrates basic Li-Fi communication using a mobile flashlight and photodiode, showing an alternative method for wireless data transmission.
