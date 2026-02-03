#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain Brain;

// VEXcode device constructors
motor R1 = motor(PORT6, ratio18_1, false);
motor R2 = motor(PORT7, ratio18_1, false);
motor R3 = motor(PORT8, ratio18_1, false);
motor L1 = motor(PORT11, ratio18_1, true);
motor L2 = motor(PORT12, ratio18_1, true);
motor L3 = motor(PORT13, ratio18_1, true);
motor intakedown = motor(PORT1, ratio6_1, false);
motor intake = motor(PORT2, ratio6_1, false);

controller Controller1 = controller(primary);

inertial Inertial = inertial(PORT5);

optical Optical = optical(PORT7);
optical Optical_go = optical(PORT16);


digital_out hook = digital_out(Brain.ThreeWirePort.F);//hook
digital_out shooter = digital_out(Brain.ThreeWirePort.G);//poop
digital_out tongue = digital_out(Brain.ThreeWirePort.H);//tongue

digital_out pushCylinder = digital_out(Brain.ThreeWirePort.A);
digital_out redlight = digital_out(Brain.ThreeWirePort.C);
digital_out whitelight = digital_out(Brain.ThreeWirePort.D);
motor hang1 = motor(PORT19, ratio36_1, true);
vex::vision Vision1 = vex::vision(vex::PORT13, 50);
vex::vision Vision2 = vex::vision(vex::PORT15, 50);

// 88
//  VEXcode generated functions
//  define variable for remote controller enable/disable
bool RemoteControlCodeEnabled = true;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 *
 * This should be called at the start of your int main function.
 */
void vexcodeInit(void)
{
  shooter.set(false);
  hook.set(false);
  // nothing to initialize
}