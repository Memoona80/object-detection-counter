# object-detection-counter
An Arduino-based object/person counter using IR sensor and LCD display.
# Object Detection Counter (Arduino + IR Sensor + LCD)

## 📌 Overview
This project is an **object/person detection counter** built with an Arduino Uno, an IR sensor, and a 16x2 LCD display.  
Whenever an object (e.g., a person walking past or a hand wave) interrupts the IR sensor, the counter increases by one and is displayed on the LCD in real-time.

## 🎯 Features
- Detects objects or people using an **IR sensor**.  
- Displays live count on a **16x2 LCD**.  
- Simple, low-cost, and beginner-friendly design.  
- Powered directly from Arduino’s **5V output**.  

## 🛠 Components Used
| Component | Quantity |
|-----------|----------|
| Arduino Uno | 1 |
| IR Sensor | 1 |
| 16x2 LCD Display | 1 |
| Breadboard & Jumper Wires | As needed |

## 🔌 Connections
**LCD → Arduino:**
RS  → 12  
EN  → 11  
D4  → 5  
D5  → 4  
D6  → 3  
D7  → 2  
VCC → 5V  
GND → GND  


**IR Sensor → Arduino**
VCC → 5V,
GND → GND,  
OUT → Pin 13


## 💻 Code
The Arduino code is available in the `object_detection_counter.ino` file.

## 🚀 How It Works
1. IR sensor detects an object in front of it.  
2. Signal is sent to Arduino, which increments the counter.  
3. The LCD updates with the new count.  
4. Removing the object resets the detection state, ready for the next count.

## 📚 Applications
- Entry/exit counters for rooms.  
- Production line object counting.  
- Event audience tracking.  

