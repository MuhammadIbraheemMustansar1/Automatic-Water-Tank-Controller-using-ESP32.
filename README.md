# Automatic Water Tank Controller using ESP32

## Overview

This project is an automatic water tank controller built using an ESP32 microcontroller. The system allows the user to manually start the water pump using a push button and automatically stops the pump when the water tank becomes full using a float switch.

This project demonstrates the use of embedded systems, sensors, MOSFET-based motor control, and external power management.

---

## Features

- Manual pump start using a push button
- Automatic pump stop when the tank is full
- IRLZ44N MOSFET for pump switching
- ESP32 microcontroller
- External 5V power supply using LM2596 Buck Converter
- Flyback diode protection
- Safe and energy-efficient operation

---

## Components Used

- ESP32 DevKit V1
- IRLZ44N MOSFET
- Float Switch
- Push Button
- Mini Water Pump (5V)
- LM2596 Buck Converter
- 1N4007 Diode
- 10kΩ Resistor
- Breadboard
- Jumper Wires
- 2 × 18650 Batteries

---

## Working Principle

1. User presses the push button.
2. ESP32 turns ON the MOSFET.
3. Water pump starts filling the tank.
4. Float switch monitors the water level.
5. When the tank becomes full, the float switch changes state.
6. ESP32 turns OFF the MOSFET.
7. Water pump stops.
8. Pump remains OFF until the push button is pressed again.

---

## Circuit
<img width="3006" height="1806" alt="Water Tank Controller Circuit" src="https://github.com/user-attachments/assets/6da099c2-8d56-4271-ab3f-e777a974e17c" />

#Images
<img width="719" height="405" alt="Image 2026-08-01" src="https://github.com/user-attachments/assets/fd9e8670-b61c-4827-8508-3af7f599caf5" />


<img width="719" height="405" alt="Image" src="https://github.com/user-attachments/assets/1b939acf-dcd9-4bd1-bb26-9719fc9fdfe9" />


### Inputs

- Push Button
- Float Switch

### Output

- Water Pump (controlled through IRLZ44N MOSFET)

### Power

- 2 × 18650 Batteries
- LM2596 Buck Converter adjusted to 5V

---

## Software

- Arduino IDE
- ESP32 Board Package
- Programming Language: C++

---

## Applications

- Home Water Tank Automation
- Water Storage Systems
- Small Irrigation Systems
- Automatic Liquid Filling Systems

---

## Skills Demonstrated

- Embedded Systems
- ESP32 Programming
- Digital Inputs and Outputs
- MOSFET Switching
- External Power Management
- Hardware Debugging
- Sensor Integration

---

## Future Improvements

- Wireless control using ESP-NOW
- Mobile application
- OLED display
- Water level percentage
- Battery monitoring
- Low water protection
- Dry run protection
- IoT monitoring

---

## Author

**Muhammad Ibraheem Mustansar**

Electrical Engineering Student

Learning Embedded Systems, Robotics, and Automation.
