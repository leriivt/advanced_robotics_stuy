#pragma config(Motor,  port2,           rightMotor,    tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           leftMotor,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port9,           ServoMotor,    tmotorServoStandard, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
startMotor(rightMotor, 127/2);
wait(5);
stopMotor(rightMotor);
startMotor(leftMotor, 3 * 127 / 4);
wait(2.5);
stopMotor(leftMotor);
forward(127);
wait(7.25);
stopAllTasks();

}
