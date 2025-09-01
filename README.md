# Fire and Smoke Detection System

A simple IoT-based Fire and Smoke Detection System using Arduino, MQ-2 Gas Sensor, and DHT11 Temperature Sensor.

---

## Overview
This project is designed to detect smoke and high temperature using an Arduino board. It alerts the user with a buzzer and LED when smoke or heat levels exceed a predefined threshold.

---

## Features
- Detects smoke using MQ-2 sensor
- Monitors temperature with DHT11 sensor
- Activates buzzer and LED for alert
- Displays readings on Serial Monitor

---

## Components Required
- Arduino Uno (or compatible board)
- MQ-2 Gas Sensor
- DHT11 Temperature Sensor
- Buzzer
- LED
- Resistors & Jumper Wires
- Breadboard

---

## Circuit Diagram
![Circuit Diagram](link-to-your-circuit-image.png)  
*(Upload your circuit image and replace the link above)*

---

## How It Works
- Arduino reads smoke level from MQ-2 and temperature from DHT11.
- If smoke > threshold or temperature > 50°C, buzzer and LED are activated.
- Otherwise, the system remains in normal mode.

---

## Steps to Run
1. Open Arduino IDE.
2. Connect Arduino board via USB.
3. Install the DHT library from Arduino Library Manager.
4. Upload the code from `fire_smoke_detection.ino`.
5. Open Serial Monitor to view real-time sensor readings.

---

## Output
- Normal Condition: LED OFF, Buzzer OFF
- Alert Condition: LED ON, Buzzer ON

---

## License
This project is licensed under the MIT License.

