#include "vex.h"
using namespace vex;

int hangControlTask()
{
    static uint32_t lastRumbleTime = 0;
    const uint32_t rumbleInterval = 900; // milliseconds
    while (true)
    {
        uint32_t now = vex::timer::system();
        if (Controller1.ButtonL1.pressing())
        {
            hang1.setMaxTorque(100, percent);
            hang1.spin(reverse, 12, volt);
            
        }
        else if (Controller1.ButtonA.pressing())
        {
            hang1.setMaxTorque(30, percent);
            hang1.spin(forward, 6, volt);
            hang1.resetPosition();
        }
        else if (Controller1.ButtonB.pressing())
        {
            if (hang1.position(degrees) > -63)
            {
                hang1.spinToPosition(-58, degrees, 35, rpm, true);
            }
            else
            {
                hang1.stop(hold);
            }
        }
        else
        {
            hang1.setMaxTorque(100, percent);
            hang1.stop(hold);
        }
        wait(20, msec);
    }
    return 0;
}