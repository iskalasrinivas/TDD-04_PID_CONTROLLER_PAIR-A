/**
 *  @file pid.cpp
 *  Part - 1
 *  @author Sandeep Kota Sai Pavan-driver
 *  @author Raj Prakash Shinde-navigator
 *  Part - 2
 *  @author  Raja Iskala - driver
 *  @author Yashaarth Todi-navigator 
 *  @date 09/25/2019
 *  @version 1.0
 *  @copyright 2019
 *  @copyright GNU Public License
 *  @brief Member function definitions for PidController class 
 */

#include <iostream>
#include "pid.hpp"

/**
 *   @brief Constructor for class PidController
 */
PidController::PidController() {
kp_ = 0.2;
ki_ = 0.02;
kd_ = 0.002;
dt = 0.002;
prevError = 0;
integral = 0;
derivative = 0;
}

/**
 *  @brief Destructor for class PidController
 */
PidController::~PidController() {}

/**
 *	@brief Function to compute output of the PID Controller
 *	given the value of the previous state and goal state.
 *	@param int prevValue Previous state of the control parameter
 *	@param int setPoint Goal state of the control parameter
 *	@return int prevValue + output Updated output of the PID 
 *	controller block.
 */
double PidController::compute(double prevValue, double setPoint) {
return -100;
}

/**
 *   @brief Function to get kp_ attribute of class PidController
 *   @param none
 *   @return double
 */
double PidController::getkp() {
return 10;
}

/**
 *   @brief Function to get ki_ attribute of class PidController
 *   @param none
 *   @return double
 */
double PidController::getki() {
return 10;
}

/**
 *   @brief Function to get kd_ attribute of class PidController
 *   @param none
 *   @return double
 */
double PidController::getkd() {
return 10;
}

/**
 *   @brief Function to update kp_ attribute of class PidController
 *   @param int p
 *   @return boolean
 */
bool PidController::setkp(double p) {
return false;
}

/**
 *   @brief Function to update ki_ attribute of class PidController
 *   @param int i
 *   @return boolean
 */
bool PidController::setki(double i) {
return false;
}

/**
 *   @brief Function to update kd_ attribute of class PidController
 *   @param int d
 *   @return boolean
 */
bool PidController::setkd(double d) {
return false;
}


