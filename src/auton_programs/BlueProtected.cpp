#include "main.h"
#include "define.hpp"
#include "voids.hpp"

//Collects 5 cubes from the field
//Places cubes into the protected scoring zone
//Points scored: 5
void BlueProtected(){

  //Auton start things
  driveMove("both", -15);
  unfold();
  angler.move_voltage(-12000);
  intakeMove(200);
  delay(70);
  driveStop();
  arm.move_velocity(-5);
  angler.move_voltage(-1000);

  //Drive at 1st & 2nd cube
  drive("f", 22, 170, 1.2);
  intakeStop();
  angler.move_velocity(0);

  //Turn and get 3rd and 4th cube
  drive("l", 92, 160, 1.1);
  intakeMove(150);
  drive("f", 24.5, 110, 1.8);
  delay(300);

  //Turn and get 5th cube
  intakeStop();
  drive("l", 22, 100, 0.5);
  intakeMove(200);
  drive("f", 13, 100, 1.0);
  delay(350);

  //Drive away from cube turn at scoring zone
  intakeStop();
  drive("b", 20, 220, 1.0);
  drive("l", 135, 200, 1.5);

  //Drive at scoring zone and score cubes
  drive("f", 18, 150, 0.9);
  anglerStack(2.0);
  intakeMove(-200);
  delay(150);
  drive("b", 12, 250, 1.0);
  intakeStop();

}
