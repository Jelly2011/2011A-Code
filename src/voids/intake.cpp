#include "main.h"
#include "define.hpp"
#include "voids.hpp"

/**
 * Sets brake mode of intake to brake
 */
void intakeBrake(){
  LI.set_brake_mode(MOTOR_BRAKE_BRAKE);
  RI.set_brake_mode(MOTOR_BRAKE_BRAKE);
}

/**
 * Sets velocity of intake between -200 to 200
 */
void intakeMove(int velocity){
  LI.move_velocity(velocity);
  RI.move_velocity(velocity);
}

/**
 * Stops movement of intake
 */
void intakeStop(){
  intakeBrake(); //Sets brake mode of intake to brake
  intakeMove(0); //Stops intakes
}
