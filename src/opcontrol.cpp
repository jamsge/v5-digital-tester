#include "main.h"

/**
 * Runs the operator control code. This function will be started in its own task
 * with the default priority and stack size whenever the robot is enabled via
 * the Field Management System or the VEX Competition Switch in the operator
 * control mode.
 *
 * If no competition control is connected, this function will run immediately
 * following initialize().
 *
 * If the robot is disabled or communications is lost, the
 * operator control task will be stopped. Re-enabling the robot will restart the
 * task, not resume it from where it left off.
 */

void opcontrol() {
	pros::Controller master(pros::E_CONTROLLER_MASTER);

  	pros::ADIDigitalOut digital_out_A (1);
	pros::ADIDigitalOut digital_out_B (2);
	pros::ADIDigitalOut digital_out_C (3);
	pros::ADIDigitalOut digital_out_D (4);
	pros::ADIDigitalOut digital_out_E (5);
	pros::ADIDigitalOut digital_out_F (6);
	pros::ADIDigitalOut digital_out_G (7);
	pros::ADIDigitalOut digital_out_H (8);

	while (true) {
		int left = master.get_analog(ANALOG_LEFT_Y);
		int right = master.get_analog(ANALOG_RIGHT_Y);

		pros::delay(20);

		if (lv_sw_get_state(digital1)){
			digital_out_A.set_value(LOW);
		} else {
			digital_out_A.set_value(HIGH);
		}

		if (lv_sw_get_state(digital2)){
			digital_out_B.set_value(LOW);
		} else {
			digital_out_B.set_value(HIGH);
		}

		if (lv_sw_get_state(digital3)){
			digital_out_C.set_value(LOW);
		} else {
			digital_out_C.set_value(HIGH);
		}

		if (lv_sw_get_state(digital4)){
			digital_out_D.set_value(LOW);
		} else {
			digital_out_D.set_value(HIGH);
		}

		if (lv_sw_get_state(digital5)){
			digital_out_E.set_value(LOW);
		} else {
			digital_out_E.set_value(HIGH);
		}

		if (lv_sw_get_state(digital6)){
			digital_out_F.set_value(LOW);
		} else {
			digital_out_F.set_value(HIGH);
		}

		if (lv_sw_get_state(digital7)){
			digital_out_G.set_value(LOW);
		} else {
			digital_out_G.set_value(HIGH);
		}

		if (lv_sw_get_state(digital8)){
			digital_out_H.set_value(LOW);
		} else {
			digital_out_H.set_value(HIGH);
		}

	}
}
