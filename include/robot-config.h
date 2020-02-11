using namespace vex;

extern brain Brain;

// VEXcode devices
extern motor BackLeft;
extern motor FrontLeft;
extern motor BackRight;
extern motor FrontRight;
extern controller Controller1;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Text.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );