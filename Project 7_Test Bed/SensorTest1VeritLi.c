#pragma config(Sensor, in1,    lineFollower,   sensorLineFollower)
#pragma config(Sensor, in2,    potentiometer,  sensorPotentiometer)
#pragma config(Sensor, in3,    lightSensor,    sensorReflection)
#pragma config(Sensor, dgtl1,  limitSwitch,    sensorTouch)
#pragma config(Sensor, dgtl2,  bumpSwitch,     sensorTouch)
#pragma config(Sensor, dgtl3,  quad,           sensorQuadEncoder)
#pragma config(Sensor, dgtl5,  sonar,          sensorSONAR_inch)
#pragma config(Sensor, dgtl9,  jumper,         sensorDigitalIn)
#pragma config(Sensor, dgtl12, green,          sensorLEDtoVCC)
#pragma config(Motor,  port1,           flashlight,    tmotorVexFlashlight, openLoop, reversed)
#pragma config(Motor,  port2,           rightMotor,    tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           leftMotor,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port9,           servoMotor,    tmotorServoStandard, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
//motors: (viewing the motor such that the output shaft faces towards you)
//postive power value goes counter-clockwise
//negative power value goes clockwise
//the closer the abs(power value) is to 127, the faster the motor spins
//when the power value is 0 the motor stays still (seems to coast)

//servo motor: (same view as motors)
//has a default position of 0
//difference between -127 and 127 is about 120 degrees
//increasing power --> counter-clockwise turn
//decreasing power --> clockwise turn

//flashlight:
//brightest at a power of 127
//completely off when power is <=0


//line follower:
//red: 128
//orange: 133
//yellow:
//green:
//blue:
//indigo:
//violet:


//potentiometer:
//has values of 0-4095
//rotation of 90 degrees corresponds to 4095-2750

//light sensor:
//when covered has a value of about 770
//when uncovered (exposed to light of lab) has a value of about 140

//limit switch:
//value of 0 when unpressed
//value of 1 when pressed

//bump switch:
//value of 0 when unpressed
//value of 1 when pressed

//quadrature encoder:
//clockwise turn increases value
//counter-clockwise turn decreases value
//value doesn't reset to 0 ever time run the code
//half turn clockwise corresponds to about +180

//sonar sensor:

//LED:
//unlit has a value of 0
//lit has a value of 1

//jumper clip:
//value of 1 when out
//value of 0 when in


}
