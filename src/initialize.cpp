#include "main.h"
#include "display/lvgl.h"

/*
void on_center_button() {
	static bool pressed = false;
	pressed = !pressed;
	if (pressed) {
		pros::lcd::set_text(2, "I was pressed!");
	} else {
		pros::lcd::clear_line(2);
	}
}
*/

/**
 * Runs initialization code. This occurs as soon as the program is started.
 *
 * All other competition modes are blocked by initialize; it is recommended
 * to keep execution time for this mode under a few seconds.
 */

void input_task(){
	pros::c::delay(20);
}

// Create switches
lv_obj_t * digital1 = lv_sw_create(lv_scr_act(), NULL);
lv_obj_t * digital2 = lv_sw_create(lv_scr_act(), NULL);
lv_obj_t * digital3 = lv_sw_create(lv_scr_act(), NULL);
lv_obj_t * digital4 = lv_sw_create(lv_scr_act(), NULL);
lv_obj_t * digital5 = lv_sw_create(lv_scr_act(), NULL);
lv_obj_t * digital6 = lv_sw_create(lv_scr_act(), NULL);
lv_obj_t * digital7 = lv_sw_create(lv_scr_act(), NULL); 
lv_obj_t * digital8 = lv_sw_create(lv_scr_act(), NULL);

void initialize() {
	// pros::lcd::initialize();
	// pros::lcd::set_text(1, "Hello PROS User!");
	// pros::lcd::register_btn1_cb(on_center_button);

	/*Create a Label on the currently active screen*/
    lv_obj_t * Title =  lv_label_create(lv_scr_act(), NULL);

	// Create labels for each switch
    lv_obj_t * label1 =  lv_label_create(lv_scr_act(), NULL);
    lv_obj_t * label2 =  lv_label_create(lv_scr_act(), NULL);
    lv_obj_t * label3 =  lv_label_create(lv_scr_act(), NULL);
    lv_obj_t * label4 =  lv_label_create(lv_scr_act(), NULL);
    lv_obj_t * label5 =  lv_label_create(lv_scr_act(), NULL);
    lv_obj_t * label6 =  lv_label_create(lv_scr_act(), NULL);
    lv_obj_t * label7 =  lv_label_create(lv_scr_act(), NULL);
    lv_obj_t * label8 =  lv_label_create(lv_scr_act(), NULL);

    /*Modify the Label's text*/
    lv_label_set_text(Title, "Digital Controller");
	lv_label_set_text(label1, "Port A");
	lv_label_set_text(label2, "Port B");
	lv_label_set_text(label3, "Port C");
	lv_label_set_text(label4, "Port D");
	lv_label_set_text(label5, "Port E");
	lv_label_set_text(label6, "Port F");
	lv_label_set_text(label7, "Port G");
	lv_label_set_text(label8, "Port H");
    /* Align the Label to the center
     * NULL means align on parent (which is the screen now)
     * 0, 0 at the end means an x, y offset after alignment*/

    lv_obj_align(Title, NULL, LV_ALIGN_IN_TOP_MID, 0, 0);
	
	lv_obj_align(digital1, NULL, LV_ALIGN_IN_TOP_LEFT, LV_HOR_RES * 0.25, LV_VER_RES * 0.2);
	lv_obj_align(digital2, NULL, LV_ALIGN_IN_TOP_LEFT, LV_HOR_RES * 0.25, LV_VER_RES * 0.4);
	lv_obj_align(digital3, NULL, LV_ALIGN_IN_TOP_LEFT, LV_HOR_RES * 0.25, LV_VER_RES * 0.6);
	lv_obj_align(digital4, NULL, LV_ALIGN_IN_TOP_LEFT, LV_HOR_RES * 0.25, LV_VER_RES * 0.8);
	lv_obj_align(digital5, NULL, LV_ALIGN_IN_TOP_LEFT, LV_HOR_RES * 0.75, LV_VER_RES * 0.2);
	lv_obj_align(digital6, NULL, LV_ALIGN_IN_TOP_LEFT, LV_HOR_RES * 0.75, LV_VER_RES * 0.4);
	lv_obj_align(digital7, NULL, LV_ALIGN_IN_TOP_LEFT, LV_HOR_RES * 0.75, LV_VER_RES * 0.6);
	lv_obj_align(digital8, NULL, LV_ALIGN_IN_TOP_LEFT, LV_HOR_RES * 0.75, LV_VER_RES * 0.8);

	lv_obj_align(label1, NULL, LV_ALIGN_IN_TOP_LEFT, LV_HOR_RES * 0.1, LV_VER_RES * 0.22);
	lv_obj_align(label2, NULL, LV_ALIGN_IN_TOP_LEFT, LV_HOR_RES * 0.1, LV_VER_RES * 0.42);
	lv_obj_align(label3, NULL, LV_ALIGN_IN_TOP_LEFT, LV_HOR_RES * 0.1, LV_VER_RES * 0.62);
	lv_obj_align(label4, NULL, LV_ALIGN_IN_TOP_LEFT, LV_HOR_RES * 0.1, LV_VER_RES * 0.82);
	lv_obj_align(label5, NULL, LV_ALIGN_IN_TOP_LEFT, LV_HOR_RES * 0.6, LV_VER_RES * 0.22);
	lv_obj_align(label6, NULL, LV_ALIGN_IN_TOP_LEFT, LV_HOR_RES * 0.6, LV_VER_RES * 0.42);
	lv_obj_align(label7, NULL, LV_ALIGN_IN_TOP_LEFT, LV_HOR_RES * 0.6, LV_VER_RES * 0.62);
	lv_obj_align(label8, NULL, LV_ALIGN_IN_TOP_LEFT, LV_HOR_RES * 0.6, LV_VER_RES * 0.82);
}

/**
 * Runs while the robot is in the disabled state of Field Management System or
 * the VEX Competition Switch, following either autonomous or opcontrol. When
 * the robot is enabled, this task will exit.
 */
void disabled() {}

/**
 * Runs after initialize(), and before autonomous when connected to the Field
 * Management System or the VEX Competition Switch. This is intended for
 * competition-specific initialization routines, such as an autonomous selector
 * on the LCD.
 *
 * This task will exit when the robot is enabled and autonomous or opcontrol
 * starts.
 */
void competition_initialize() {}
