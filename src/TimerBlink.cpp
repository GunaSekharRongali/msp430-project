#include <msp430.h>
#include "TimerBlinker.hpp"


TimerBlinker::TimerBlinker() {}

void TimerBlinker::initGPIO() {
    P1DIR |= BIT0;    // Set P1.0 as output (LED)
    P1OUT &= ~BIT0;   // Turn off LED
}

void TimerBlinker::initTimer() {
    TA0CCTL0 = CCIE;              // Enable interrupt
    TA0CCR0 = 62500;              // Count limit (~0.5s if 1MHz / 8)
    TA0CTL = TASSEL_1 + MC_1 + ID_3; // ACLK, Up mode, /8
}

void TimerBlinker::start() {
    __enable_interrupt();         // Enable global interrupts
}

void TimerBlinker::toggleLED() {
    P1OUT ^= BIT0;                // Toggle LED
}
