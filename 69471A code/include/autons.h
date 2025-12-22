#pragma once
#include "JAR-Template/drive.h"

class Drive;

extern Drive chassis;

void default_constants();

void R_right();
void R_left();
void skills85();
void R_right_F();
void R_solo();
void B_right();
void B_left();
void skills96();
void skills101();
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
