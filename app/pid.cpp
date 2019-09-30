/**
 *  @copyright 2019
 *  @copyright GNU Public License
 *  @file pid.cpp
 *  Part - 1
 *  @author Sandeep Kota Sai Pavan-driver
 *  @author Raj Prakash Shinde-navigator
 *  Part - 2
 *  @author  Raja Iskala - driver
 *  @author Yashaarth Todi-navigator
 *  @date 09/25/2019
 *  @version 1.0
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
double error = setPoint - prevValue;  // Calculate error
double Pout = kp_ * error;  //  Calculate the proportional term of error
integral += error * dt;
double Iout = ki_ * integral;  //  Calculate integral proportional term of error
derivative = (error - prevError) / dt;
double Dout = kd_ * derivative;  //  Calculate derivative term of error
double output = Pout + Iout + Dout;  //  Calculate total error
return (prevValue + output);
}

/**
 *   @brief Function to get kp_ attribute of class PidController
 *   @param none
 *   @return double
 */
double PidController::getkp() {
return kp_;
}

/**
 *   @brief Function to get ki_ attribute of class PidController
 *   @param none
 *   @return double
 */
double PidController::getki() {
return ki_;
}

/**
 *   @brief Function to get kd_ attribute of class PidController
 *   @param none
 *   @return double
 */
double PidController::getkd() {
return kd_;
}

/**
 *   @brief Function to update kp_ attribute of class PidController
 *   @param double p
 *   @return boolean
 */
bool PidController::setkp(double p) {
kp_ = p;
return true;
}

/**
 *   @brief Function to update ki_ attribute of class PidController
 *   @param double i
 *   @return boolean
 */
bool PidController::setki(double i) {
ki_ = i;
return true;
}

/**
 *   @brief Function to update kd_ attribute of class PidController
 *   @param double d
 *   @return boolean
 */
bool PidController::setkd(double d) {
kd_ = d;
return true;
}
