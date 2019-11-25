/**
 *  @copyright 2019
 *  @copyright GNU Public License
 *  @file basePID.h
 *  @author Raja Srinivas Iskala.
 *  @date 11/24/2019
 *  @version 1.0
 *  @brief Class definition of BasePID.
 */

#ifndef INCLUDE_BASEPID_H_
#define INCLUDE_BASEPID_H_

/**
 * @brief BasePID Class
 * Abstract interface for PidController and other classes.
 */
class BasePID {
 public:

  /**
   *  @brief Constructor for class BasePID.
   */
  BasePID() {
  }
  ;
  /**
   *  @brief virtual Destructor for class BasePID.
   */
  virtual ~BasePID() {
  }
  ;

  /**
   *  @brief pure virtual Function to compute method
   *  @param int prevValue Previous state of the control parameter
   *  @param int setPoint Goal state of the control parameter
   *  @return int prevValue + output Updated output of the PID
   *  controller block.
   */
  virtual double compute(double prevValue, double setPoint) = 0;

  /**
   *  @brief virtual Function to get kp_ attribute.
   *  @param none
   *  @return double
   */
  virtual double getkp() = 0;

  /**
   *  @brief Function to get ki_ attribute.
   *  @param none
   *  @return double
   */
  virtual double getki() = 0;

  /**
   *  @brief virtual Function to get kd_ attribute
   *  @param none
   *  @return double
   */
  virtual double getkd() = 0;

  /**
   *  @brief virtual Function to set kp_ attribute
   *  @param p of type double.
   *  @return boolean
   */
  virtual bool setkp(double p) = 0;

  /**
   *  @brief virtual Function to set ki_ attribute
   *  @param i of type double.
   *  @return boolean
   */
  virtual bool setki(double i) = 0;

  /**
   *  @brief virtual Function to set kd_ attribute.
   *  @param d of type double.
   *  @return boolean
   */
  virtual bool setkd(double d) = 0;
};
#endif /* INCLUDE_BASEPID_H_ */

