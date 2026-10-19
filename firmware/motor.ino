//setting up intial elegoo uno r3 for electronics 1 project, upd 10/18/26
//Board: Arduino UNO
//Port: COM3 (if not found, just unplug and replug while trying to set the board up)

#include <Stepper.h>

const int stepsPerRevolution = 2048;

// ULN2003 inputs connected to Arduino pins 8, 9, 10, 11.
// The library uses the alternating pin order for this motor.
Stepper motor(stepsPerRevolution, 8, 10, 9, 11);

void setup() {
  motor.setSpeed(10);  // 10 RPM
}

void loop() {
  motor.step(stepsPerRevolution);
}
