#include "main.h"

#ifndef DEFINE_HPP
#define DEFINE_HPP

/* ********** Declare Motors ********** */

extern Motor LFD;
extern Motor LBD;
extern Motor RFD;
extern Motor RBD;
extern Motor arm;
extern Motor LI;
extern Motor RI;
extern Motor angler;

/* ********** Declare Sensors ********** */

extern Imu IMU;
extern ADIPotentiometer armPot;
extern ADIPotentiometer anglerPot;
extern ADIEncoder lEnc;
extern ADIEncoder rEnc;

/* ********** Declare Controller ********** */

extern Controller Main;

/* ********** Declare Angler Variables ********** */

extern int anglerHomeVar;
extern int anglerStackVar;
extern int anglerAdd;
extern float angler_Kp;

/* ********** Declare Arm Variables ********** */

extern int smallChalice;
extern int mediumChalice;
extern int armHold;
extern int armHome;



#endif
