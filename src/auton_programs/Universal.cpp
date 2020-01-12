#include "main.h"
#include "robot.hpp"
#include "define.hpp"

//Pushes preload into scoring zone
//Works on any side
//Points scored: 1
void Universal(){

  //Drive into scoring zone
  Chassis->moveDistanceAsync(-36_in);
  pros::delay(2500);
  Chassis->stop();

  //Drive out of scoring zone
  Chassis->moveDistanceAsync(36_in);
  pros::delay(2500);
  Chassis->stop();

  //Unfolds tray
  Unfold();

}