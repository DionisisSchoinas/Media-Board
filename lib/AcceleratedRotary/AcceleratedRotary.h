// AcceleratedRotary.h
#ifndef AcceleratedRotary_h
#define AcceleratedRotary_h

#include "Arduino.h"

class AcceleratedRotary {
  private:
    bool isMovingClockwise;
    int numberOfClicks;
    unsigned long lastChangeTime;
    unsigned short resetDelay;
    int minSpeed;
    int maxSpeed;

  public:
    AcceleratedRotary(int minSpeed, int maxSpeed, unsigned short resetDelay);
    void addClick(int direction);
    int getSpeed();
    void print();
};

#endif