/**
 *  @file pid.hpp
 *  @author Raj Prakash Shinde-driver
 *  @author Sandeep Kota Sai Pavan-navigator
 *  @date 09/25/2019
 *  @version 1.0
 *  @copyright 2019
 *  @copyright GNU Public License
 *  @brief Class defination of PidController
 */

#ifndef INCLUDE_PID_HPP_
#define INCLUDE_PID_HPP_

/**
 *  @brief Class containing the parameters of the 
 *  PID Controller.
 */
class PidController {
 private:
    double kp_, ki_, kd_;

 public:
    double prevError, integral, derivative, dt;
    /**
    *  @brief Constructor for class PidController
    */
    PidController();

    /**
    *  @brief Destructor for class PidController
    */
    ~PidController();

   /**
    *  @brief Function to compute output of the PID Controller
    *  given the value of the previous state and goal state.
    *  @param int prevValue Previous state of the control parameter
    *  @param int setPoint Goal state of the control parameter
    *  @return int prevValue + output Updated output of the PID 
    *  controller block.
   */
    double compute(double prevValue, double setPoint);

    /**
    *  @brief Function to get kp_ attribute of class PidController
    *  @param none
    *  @return double
    */
     double getkp();

    /**
    *  @brief Function to get ki_ attribute of class PidController
    *  @param none
    *  @return double 
    */
     double getki();

    /**
    *  @brief Function to get kd_ attribute of class PidController
    *  @param none
    *  @return double 
    */
     double getkd();

    /**
    *  @brief Function to set kp_ attribute of class PidController
    *  @param double p
    *  @return boolean 
    */
     bool setkp(double p);

    /**
    *  @brief Function to set ki_ attribute of class PidController
    *  @param double i
    *  @return boolean 
    */
     bool setki(double i);

    /**
    *  @brief Function to set kd_ attribute of class PidController
    *  @param double d
    *  @return boolean 
    */

     bool setkd(double d);
};

#endif  // INCLUDE_PID_HPP_


