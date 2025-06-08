#ifndef TIMER_BLINKER_HPP
#define TIMER_BLINKER_HPP

class TimerBlinker {
public:
    TimerBlinker();              // Constructor
    void initTimer();            // Setup Timer
    void initGPIO();             // Setup GPIO for LED
    void start();                // Enable Timer and interrupts
    void toggleLED();           // Called in ISR

private:
    void configureClock();       // Optional: Add system clock config
};

#endif // TIMER_BLINKER_HPP
