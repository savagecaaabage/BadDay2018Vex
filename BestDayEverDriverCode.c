#pragma config(Motor,  motor1,          Intake,        tmotorVexIQ, PIDControl, encoder)
#pragma config(Motor,  motor6,          FourBar,       tmotorVexIQ, PIDControl, encoder)
#pragma config(Motor,  motor8,          Middle,        tmotorVexIQ, PIDControl, encoder)
#pragma config(Motor,  motor10,         Right,         tmotorVexIQ, PIDControl, driveRight, encoder)
#pragma config(Motor,  motor11,         Left,          tmotorVexIQ, PIDControl, driveLeft, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	while(true) {


		//The code for the Left Joystick
		if (getJoystickValue(ChA)	> threshold || getJoystickValue(ChA) < -threshold) {
			setMotorSpeed(Left, getJoystickValue(ChA)*0.85);
		}
		else {
			setMotorSpeed(Left, 0);
		}


		//The code for the Right Joystick
		if (getJoystickValue(ChD)	> threshold || getJoystickValue(ChD) < -threshold) {
			setMotorSpeed(Right, getJoystickValue(ChD)*0.85);
		}
		else {
			setMotorSpeed(Right, 0);
		}


		//The code for the lateral movement
		if(getJoystickValue(BtnEUp) == 1) {
			setMotorSpeed(Middle, 75);
		}
		else if(getJoystickValue(BtnFUp) == 1) {
			setMotorSpeed(Middle, -75);
		}
		else() {
			setMotorSpeed(Middle, 0);
		}


		//The code for the 4 Bar lift
		if(getJoystickValue(BtnLUp) == 1) {
			setMotorSpeed(FourBar, 75);
		}
		else if(getJoystickValue(BtnLDown) == 1) {
			setMotorSpeed(FourBar, -75);
		}
		else() {
			setMotorSpeed(FourBar, 0);
		}

		//The code for the Intake
		if(getJoystickValue(BtnRUp) == 1) {
			setMotorSpeed(Intake, 75);
		}
		else if(getJoystickValue(BtnRDown) == 1) {
			setMotorSpeed(Intake, -75);
		}
		else() {
			setMotorSpeed(Intake, 0);
		}
	}
}
