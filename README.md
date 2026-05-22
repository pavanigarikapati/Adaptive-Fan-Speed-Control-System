# Adaptive-Fan-Speed-Control-System
Smart Temperature Control System automatically adjusts fan speed according to room temperature using Arduino UNO. A DHT11 sensor continuously measures temperature and sends data to Arduino, which controls the DC fan through the L298N motor driver. Temperature and fan status are displayed on a 16×2 LCD, improving comfort and energy efficiency.


Temperature Control System is a smart automation project developed using Arduino UNO to control fan speed based on real-time room temperature. The system automatically increases or decreases fan speed to maintain comfort and reduce unnecessary power consumption.

Features
- Automatic fan speed adjustment
- Real-time temperature monitoring
- LCD display output
- Energy efficient operation
- Adaptive cooling control

Components Required
- Arduino UNO
- DHT11 Temperature Sensor
- L298N Motor Driver
- DC Fan
- LCD 16×2 with I2C
- Breadboard
- Jumper Wires
- Power Supply

Working Principle

The DHT11 sensor continuously measures room temperature and sends data to Arduino UNO. Based on predefined temperature ranges, Arduino controls the DC fan speed through the L298N motor driver. Temperature and fan status are displayed on the LCD screen.

Output Logic
- Temperature < 25°C → Fan OFF
- Temperature 25–30°C → Low Speed
- Temperature 30–35°C → Medium Speed
- Temperature > 35°C → High Speed

Applications
- Smart Home Systems
- Automatic Cooling Systems
- Energy Saving Applications
- Temperature Monitoring Systems

Advantages
- Reduces energy consumption
- Improves user comfort
- Fully automatic operation
- Simple and low-cost implementation

Future Enhancements
- Wi-Fi monitoring
- Mobile application control
- Smart home integration
- Multi-fan support

Conclusion

This project demonstrates an efficient temperature-based fan control system using Arduino UNO. By automatically adjusting fan speed according to environmental conditions, the system improves comfort while saving energy and supports smart automation concepts.
