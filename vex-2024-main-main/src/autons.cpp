#include "vex.h"
#include "note.h"
#include "autoarm.h"
void cos_move_distance_smooth(double distance_in, double angle_deg, double turn_maxV, double drive_maxV);

void driveTime(int ms)
{
  chassis.drive_with_voltage(12, 12);
  wait(ms, msec);
  chassis.DriveL.stop(brake);
  chassis.DriveR.stop(brake);
}

int info()
{
  while (1)
  {
    Brain.Screen.clearScreen();
    Brain.Screen.printAt(0, 50, "X: %f", chassis.get_X_position());
    Brain.Screen.printAt(0, 70, "Y: %f", chassis.get_Y_position());
    Brain.Screen.printAt(0, 90, "Heading: %f", chassis.get_absolute_heading());
    Brain.Screen.printAt(0, 110, "ForwardTracker: %f", chassis.get_ForwardTracker_position());
    Brain.Screen.printAt(0, 130, "SidewaysTracker: %f", chassis.get_SidewaysTracker_position());
    task::sleep(20);
  }
  return 1;
}

void R_right()
{
  vex::color selectedTeamColor = vex::color::red;
  chassis.set_drive_constants(10, 1.2, 0.005, 2, 10);
  chassis.set_heading_constants(10, 1.2, 0.005, 2, 10);
  intakeCylander.set(false);
  chassis.drive_distance(20, 0, 12, 12);
  intakedown.spin(forward, 10, volt);
  chassis.drive_distance(30, 20, 12, 12);
  wait(0.5, seconds);
  chassis.turn_to_angle(320);
  chassis.drive_distance(-33.2, 320, 12, 12);
  intakedown.stop();
  chassis.turn_to_angle(180);
  chassis.drive_distance(-15, 180, 12, 12);
  intakedown.spin(forward, 12, volt);
  intake.spin(forward, 12, volt);
  wait(1.5, seconds);
  intakedown.stop();
  intake.stop();

  
  //match loader
  aligner.set(true);
  chassis.drive_distance(35, 185, 8, 8);
  intakedown.spin(forward, 12, volt);
  wait(2, seconds);
  intakedown.stop();
  chassis.drive_distance(-10, 185, 12, 12);
  //aligner.set(false);
  chassis.drive_distance(-25, 185, 12, 12);
  intakedown.spin(forward, 12, volt);
  intake.spin(forward, 12, volt);
  wait(3, seconds);
  intakedown.stop();
  intake.stop();

//cm/1.86 is degree
//--------------------------------------------------------
  
  /*
  aligner.set(true);
  shooter.set(true);
   intakedown.spin(reverse, 10, volt);
  wait(0.05,sec);
  intake.spin(forward, 10, volt);
  wait(2,sec);
  intake.stop();
  intakedown.stop();
  wait(0.05,sec);
  */

}
//----------------------------------------------------------------------

void R_left()
{
  vex::color selectedTeamColor = vex::color::red;
  chassis.set_drive_constants(10, 1.2, 0.005, 2, 10);
  chassis.set_heading_constants(10, 1.2, 0.005, 2, 10);
  intakeCylander.set(false);
  chassis.drive_distance(20, 0, 12, 12);
  intakedown.spin(forward, 10, volt);
  chassis.drive_distance(30, 340, 12, 12);
  wait(0.5, seconds);
  chassis.turn_to_angle(30);
  chassis.drive_distance(-34, 45, 12, 12);
  intakedown.stop();
  chassis.turn_to_angle(180);
  chassis.drive_distance(-30, 180, 12, 12);
  intakedown.spin(forward, 12, volt);
  intake.spin(forward, 12, volt);
  wait(1.5, seconds);
  intakedown.stop();
  intake.stop();

  //match loader
  aligner.set(true);
  chassis.drive_distance(35, 175, 10, 10);
  intakedown.spin(forward, 12, volt);
  wait(2, seconds);
  intakedown.stop();
  chassis.drive_distance(-10, 175, 12, 12);
  aligner.set(false);
  chassis.drive_distance(-25, 175, 12, 12);
  intakedown.spin(forward, 12, volt);
  intake.spin(forward, 12, volt);
  wait(1.5, seconds);
  intakedown.stop();
  intake.stop();
}

//--------------------------------------------------------

void R_right_final()
{
  vex::color selectedTeamColor = vex::color::red;
}

//--------------------------------------------------------

void R_left_final()
{
  vex::color selectedTeamColor = vex::color::red;
}

//--------------------------------------------------------

void R_solo()
{
  vex::color selectedTeamColor = vex::color::red;
}
//--------------------------------------------------------

void B_right()
{
  vex::color selectedTeamColor = vex::color::blue;
  chassis.set_drive_constants(10, 1.2, 0.005, 2, 10);
  chassis.set_heading_constants(10, 1.2, 0.005, 2, 10);
  intakeCylander.set(false);
  chassis.drive_distance(20, 0, 12, 12);
  intakedown.spin(forward, 10, volt);
  chassis.drive_distance(30, 20, 12, 12);
  wait(0.5, seconds);
  chassis.turn_to_angle(320);
  chassis.drive_distance(-35, 320, 12, 12);
  intakedown.stop();
  chassis.turn_to_angle(180);
  chassis.drive_distance(-18, 180, 12, 12);
  intakedown.spin(forward, 12, volt);
  intake.spin(forward, 12, volt);
  wait(1.5, seconds);
  intakedown.stop();
  intake.stop();
  
  //match loader
  aligner.set(true);
  chassis.drive_distance(35, 185, 10, 10);
  intakedown.spin(forward, 12, volt);
  wait(2, seconds);
  intakedown.stop();
  chassis.drive_distance(-10, 185, 12, 12);
  //aligner.set(false);
  chassis.drive_distance(-25, 185, 12, 12);
  intakedown.spin(forward, 12, volt);
  intake.spin(forward, 12, volt);
  wait(1.5, seconds);
  intakedown.stop();
  intake.stop();
}
//--------------------------------------------------------
void B_left()
{
  vex::color selectedTeamColor = vex::color::blue;
  chassis.set_drive_constants(10, 1.2, 0.005, 2, 10);
  chassis.set_heading_constants(10, 1.2, 0.005, 2, 10);
  intakeCylander.set(false);
  chassis.drive_distance(20, 0, 12, 12);
  intakedown.spin(forward, 10, volt);
  chassis.drive_distance(30, 340, 12, 12);
  wait(0.5, seconds);
  chassis.turn_to_angle(45);
  chassis.drive_distance(-33, 45, 12, 12);
  intakedown.stop();
  chassis.turn_to_angle(180);
  chassis.drive_distance(-18, 180, 12, 12);
  intakedown.spin(forward, 12, volt);
  intake.spin(forward, 12, volt);
  wait(1.5, seconds);
  intakedown.stop();
  intake.stop();

  //match loader
  aligner.set(true);
  chassis.drive_distance(35, 178, 8, 8);
  intakedown.spin(forward, 12, volt);
  wait(1.5, seconds);
  intakedown.stop();
  chassis.drive_distance(-10, 178, 12, 12);
  //aligner.set(false);
  chassis.drive_distance(-25, 178, 12, 12);
  intakedown.spin(forward, 12, volt);
  intake.spin(forward, 12, volt);
  wait(1.5, seconds);
  intakedown.stop();
  intake.stop();
}
//--------------------------------------------------------
void B_right_final()
{
  vex::color selectedTeamColor = vex::color::blue;   
}
//--------------------------------------------------------
void B_left_final()
{
  vex::color selectedTeamColor = vex::color::blue;
}
//-------------------------------------------------------- 
void B_solo()
{
  vex::color selectedTeamColor = vex::color::blue;
}
//--------------------------------------------------------


void B_17022A()
{
  vex::color selectedTeamColor = vex::color::blue;
 
}

void odom_test()
{
}

void PIDtest()
{
}

void default_constants()
{
  chassis.set_drive_constants(12, .5, 0.004, 5, 20);
  chassis.set_heading_constants(12, .25, 0.007, 5, 40);
  chassis.set_turn_constants(12, .35, .001, 3, 90);
  chassis.set_swing_constants(12, .5, .001, 2, 15);
  chassis.set_drive_exit_conditions(.5, 0, 2000);
  chassis.set_turn_exit_conditions(4, 0, 3000);
  chassis.set_swing_exit_conditions(10, 0, 3000);
}

void odom_constants()
{
  default_constants();
  chassis.drive_max_voltage = 12;
  chassis.drive_settle_error = 3;
}

void drive_test()
{
  chassis.turn_to_angle(45);
  chassis.drive_distance(30);
  chassis.turn_to_angle(270);
  chassis.drive_distance(20);
  chassis.turn_to_angle(135);
  chassis.drive_distance(30);
  chassis.turn_to_angle(270);
  chassis.drive_distance(20);
  chassis.turn_to_angle(0);
}

void turn_test()
{
  chassis.turn_to_angle(5);
  chassis.turn_to_angle(30);
  chassis.turn_to_angle(90);
  chassis.turn_to_angle(225);
  chassis.turn_to_angle(0);
}

void swing_test()
{
  chassis.left_swing_to_angle(90);
  chassis.right_swing_to_angle(0);
}

void full_test()
{
  chassis.drive_distance(24);
  chassis.turn_to_angle(-45);
  chassis.drive_distance(-36);
  chassis.right_swing_to_angle(-90);
  chassis.drive_distance(24);
  chassis.turn_to_angle(0);
}

void tank_odom_test()
{
  odom_constants();
  chassis.set_coordinates(0, 0, 0);
  chassis.turn_to_point(24, 24);
  chassis.drive_to_point(24, 24);
  chassis.drive_to_point(0, 0);
  chassis.turn_to_angle(0);
}

void holonomic_odom_test()
{
  odom_constants();
  chassis.set_coordinates(0, 0, 0);
  chassis.holonomic_drive_to_point(0, 18, 90);
  chassis.holonomic_drive_to_point(18, 0, 180);
  chassis.holonomic_drive_to_point(0, 18, 270);
  chassis.holonomic_drive_to_point(0, 0, 0);
}
