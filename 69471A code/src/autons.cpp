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

void R_right7()
{
  vex::color selectedTeamColor = vex::color::red;
 chassis.set_drive_constants(10, 0.6, 0.01, 2, 10);
  chassis.set_heading_constants(10, 0.6, 0.01, 2, 10);
  hook.set(true);
  intakedown.spin(forward, 12, volt);
  chassis.drive_distance(8.5, 10, 12, 12);
  hook.set(false);
  tongue.set(true);
  //chassis.turn_to_angle(10);
  chassis.turn_to_angle(130);
  chassis.drive_distance(9.5, 130, 12, 12);
  chassis.turn_to_angle(180);

  //match loader
  //tongue.set(true);
  chassis.drive_distance(7, 180, 12, 12, 3, 10000, 1000);
  wait(0.3, seconds);
  chassis.drive_distance(-10.7, 180, 12, 12, 3, 10000, 950);

  //outtake
  intake.spin(forward, 12, volt);
  wait(2, seconds);
  intakedown.stop();
  intake.stop();
//cm/1.86 is degree
}

//----------------------------------------------------------------------

void B_43()
{
  vex::color selectedTeamColor = vex::color::blue;
  chassis.set_drive_constants(12, 0.6, 0.01, 2, 10);
  chassis.set_heading_constants(10, 0.6, 0.01, 2, 10);
  shooter.set(false);
  hook.set(true);
  intakedown.spin(forward, 12, volt);
  chassis.drive_distance(8.8, 15, 12, 12);
  tongue.set(true);
  hook.set(false);
  chassis.turn_to_angle(265);
  chassis.drive_distance(7.5, 265, 12, 12, 3, 10000, 1000);
  wait(0.09, seconds);
  chassis.drive_distance(-10.5, 265, 12, 12, 3, 10000, 900);

  //outtake
  intake.spin(forward, 12, volt);
  tongue.set(false);
  wait(1, seconds);
  intake.stop();

  //mid goal
  
  chassis.drive_distance(7, 170, 12, 12);
  tongue.set(true);
  chassis.turn_to_angle(315);
  chassis.drive_distance(-7.5, 315, 12, 12, 3, 10000, 900);
  intake.spin(reverse, 12, volt);
  intakedown.spin(reverse, 12, volt);
  wait(0.2, seconds);
  shooter.set(true);
  intake.spin(reverse, 12, volt);
  intakedown.spin(forward, 12, volt);
  wait(1.7, seconds);
  intakedown.stop();
  intake.stop();
  tongue.set(false);

  //hook
  chassis.drive_distance(10.3, 315, 12, 12);
  chassis.turn_to_angle(265);
  chassis.drive_distance(-9.8, 265, 12, 12);

}

//--------------------------------------------------------

void R_43()
{
  vex::color selectedTeamColor = vex::color::red;
  chassis.set_drive_constants(12, 0.6, 0.01, 2, 10);
  chassis.set_heading_constants(10, 0.6, 0.01, 2, 10);
  shooter.set(false);
  hook.set(true);
  intakedown.spin(forward, 12, volt);
  chassis.drive_distance(10, 15, 12, 12);
  hook.set(false);
  tongue.set(true);
  chassis.turn_to_angle(265);
  chassis.drive_distance(8.7, 270, 12, 12, 3, 10000, 1200);
  wait(0.15, seconds);
  chassis.drive_distance(-10.5, 270, 12, 12, 3, 10000, 900);

  //outtake
  intake.spin(forward, 12, volt);
  tongue.set(false);
  wait(2, seconds);
  intake.stop();

  //mid goal
  
  chassis.drive_distance(7, 170, 12, 12);
  tongue.set(true);
  chassis.turn_to_angle(315);
  chassis.drive_distance(-8, 315, 12, 12, 3, 10000, 900);
  intake.spin(reverse, 12, volt);
  intakedown.spin(reverse, 12, volt);
  wait(0.1, seconds);
  shooter.set(true);
  intake.spin(reverse, 12, volt);
  intakedown.spin(forward, 12, volt);
  wait(1, seconds);
  intakedown.stop();
  intake.stop();

  //hook
  chassis.drive_distance(10.5, 315, 12, 12);
  chassis.turn_to_angle(260);
  chassis.drive_distance(-10, 260, 12, 12);
}

//--------------------------------------------------------
void RL_43()
{
  vex::color selectedTeamColor = vex::color::red;
  chassis.set_drive_constants(12, 0.6, 0.01, 2, 10);
  chassis.set_heading_constants(10, 0.6, 0.01, 2, 10);
  shooter.set(false);
  hook.set(true);
  intakedown.spin(forward, 12, volt);
  chassis.drive_distance(9, 345, 12, 12);
  hook.set(false);
  tongue.set(true);
  chassis.turn_to_angle(85);
  chassis.drive_distance(8.7, 85, 12, 12, 3, 10000, 1000);
  wait(0.15, seconds);
  chassis.drive_distance(-10.5, 85, 12, 12, 3, 10000, 900);

  //outtake
  intake.spin(forward, 12, volt);
  tongue.set(false);
  wait(2, seconds);
  intake.stop();

  //mid goal
  
  chassis.drive_distance(6, 85, 12, 12);
  
  chassis.turn_to_angle(210);
  intakedown.spin(forward, 12, volt);
  chassis.drive_distance(20, 210, 12, 12, 3, 10000, 4500);
  intakedown.spin(reverse, 12, volt);
  wait(1, seconds);
  intakedown.stop();

  //hook
  chassis.drive_distance(-10.5, 225, 12, 12);
  chassis.turn_to_angle(280);
  chassis.drive_distance(10, 280, 12, 12);
}

//--------------------------------------------------------

void B_right7()
{
  vex::color selectedTeamColor = vex::color::blue;
  chassis.set_drive_constants(10, 0.6, 0.01, 2, 10);
  chassis.set_heading_constants(10, 0.6, 0.01, 2, 10);
  hook.set(true);
  intakedown.spin(forward, 12, volt);
  chassis.drive_distance(8.5, 10, 12, 12);
  hook.set(false);
  tongue.set(true);
  //chassis.turn_to_angle(10);
  chassis.turn_to_angle(130);
  chassis.drive_distance(10, 130, 12, 12);
  chassis.turn_to_angle(180);

  //match loader
  //tongue.set(true);
  chassis.drive_distance(7, 180, 12, 12, 3, 10000, 1000);
  wait(0.3, seconds);
  chassis.drive_distance(-10.7, 180, 12, 12, 3, 10000, 950);

  //outtake
  intake.spin(forward, 12, volt);
  wait(2, seconds);
  intakedown.stop();
  intake.stop();
}

//--------------------------------------------------------

void skills96()
{
  chassis.set_drive_constants(10, 1.2, 0.005, 2, 10);
  chassis.set_heading_constants(10, 1.2, 0.005, 2, 10);
  
}

//--------------------------------------------------------

void R_solo()
{
  vex::color selectedTeamColor = vex::color::red;
}

//-------------------------------------------------------- 

void B_solo()
{
  vex::color selectedTeamColor = vex::color::blue;
}

//--------------------------------------------------------

void B_left7()
{
  
}

//--------------------------------------------------------

void R_left7()
{
  vex::color selectedTeamColor = vex::color::red;
}

//--------------------------------------------------------

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
