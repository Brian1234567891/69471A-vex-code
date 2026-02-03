#pragma once
#include "JAR-Template/drive.h"

class Drive;

extern Drive chassis;

void default_constants();

void R_right7();
void R_left7();
void B_43();
void R_43();
void R_solo();
void B_right7();
void B_left7();
void skills96();
void RL_43();
void B_solo();



void PIDtest();
void autoarm();
void drive_test();
void turn_test();
void swing_test();
void full_test();
void odom_test();
void tank_odom_test();
void holonomic_odom_test();
