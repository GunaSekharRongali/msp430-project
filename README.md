# TimerBlinker - MSP430 Modular Timer-Based LED Blinking

This project demonstrates a modular **object-oriented C++** approach for controlling an LED using the **Timer_A peripheral** on the MSP430 microcontroller.

## 📌 Features

- Blinks the on-board LED (P1.0) at a 0.5-second interval.
- Uses **ACLK** and **Timer_A** in **up mode** with a prescaler for timing.
- Implements **object-oriented C++ design** (`TimerBlinker` class).
- Compatible with TI LaunchPad (e.g., MSP430G2553).

## 🔧 Hardware Requirements

- **MCU**: MSP430G2553 (or similar with Timer_A and P1.0 LED)
- **Board**: TI LaunchPad
- **Tools**: Code Composer Studio (CCS) or VS Code with MSP430-GCC toolchain
