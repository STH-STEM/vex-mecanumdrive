// Mecanum Drive by Seb Jensen

#include "vex.h"

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Controller1          controller                    
// FrontLeft            motor         12              
// BackLeft             motor         11              
// FrontRight           motor         2               
// BackRight            motor         1               
// ---- END VEXCODE CONFIGURED DEVICES ----
using namespace vex;

int main()
{
  while(true)
  {
    BackLeft.spin(directionType::fwd,Controller1.Axis3.value()-Controller1.Axis4.value()+Controller1.Axis1.value() , velocityUnits::pct);
    FrontLeft.spin(directionType::fwd,Controller1.Axis3.value()+Controller1.Axis4.value()+Controller1.Axis1.value() , velocityUnits::pct);
    BackRight.spin(directionType::rev,Controller1.Axis3.value()+Controller1.Axis4.value()-Controller1.Axis1.value() , velocityUnits::pct);
    FrontRight.spin(directionType::rev,Controller1.Axis3.value()-Controller1.Axis4.value()-Controller1.Axis1.value() , velocityUnits::pct);
  }
}
