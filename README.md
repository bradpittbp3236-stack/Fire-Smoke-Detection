# 🔥 Fire and Smoke Detection System

A simple IoT-based Fire and Smoke Detection System using **Arduino**, **MQ-2 Gas Sensor**, and **DHT11 Temperature Sensor**.

---

## 📌 Features
- Detects smoke using MQ-2 sensor.
- Monitors temperature with DHT11 sensor.
- Activates **buzzer** and **LED** when smoke or high temperature is detected.
- Displays readings on Serial Monitor.

---

## 🛠 Components Required
- Arduino Uno (or compatible board)
- MQ-2 Gas Sensor
- DHT11 Temperature Sensor
- Buzzer
- LED
- Resistors & Jumper Wires
- Breadboard

---

## 🔌 Circuit Diagram
![Circuit Diagram](link-to-your-circuit-image.png)  
*(Upload your circuit image and update the link here)*

---

## 💻 Code Explanation
- The Arduino continuously reads **smoke level** from MQ-2 and **temperature** from DHT11.
- If smoke > **threshold (e.g., 560)** or temperature > **50°C**, buzzer and LED will activate.
- Otherwise, the system stays in normal mode.

---

## ▶ How to Run
1. Open Arduino IDE on your computer.
2. Connect Arduino board via USB.
3. Install **DHT library** from Arduino Library Manager.
4. Upload the code from `fire_smoke_detection.ino`.
5. Open Serial Monitor to view real-time sensor readings.

---

## ✅ Output
- **Normal Condition:** LED OFF, Buzzer OFF.
- **Alert Condition:** LED blinks, Buzzer sounds loudly.

---

## 📜 License
This project is licensed under the **MIT License**.

