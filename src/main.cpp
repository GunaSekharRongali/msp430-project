#include <msp430.h>
#include "TimerBlinker.hpp"

TimerBlinker blinker;

int main() {
    WDTCTL = WDTPW | WDTHOLD;     // Stop watchdog timer

    blinker.initGPIO();
    blinker.initTimer();
    blinker.start();

    while (1) {
        __low_power_mode_3();     // Sleep until interrupt
    }
}

// Timer ISR
#pragma vector=TIMER0_A0_VECTOR
__interrupt void Timer_A(void) {
    blinker.toggleLED();
}
