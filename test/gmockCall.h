/**
 *  @copyright 2019
 *  @copyright GNU Public License
 *  @file gmockCall.h
 *  @author Raja Srinivas Iskala.
 *  @date 11/24/2019
 *  @version 1.0
 *  @brief Class definition of GmockCall.
 */

#ifndef TEST_GMOCKCALL_H_
#define TEST_GMOCKCALL_H_

#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "basePID.hpp"

/**
 * @brief GmockCall Class
 * class to call functions of BasePID mock class
 */
class GmockCall : public ::testing::Test {
 public:

  /**
   * @brief getKP function
   * @param object of std::unique_ptr<BasePID>
   * @return double the value of kp.
   * initializes the object and
   * calls the getkp in the BasePID class
   */
  double getKP(std::unique_ptr<BasePID> object) {
    return object->getkp();
  }

  /**
   * @brief getKI function
   * @param object of std::unique_ptr<BasePID>
   * @return double the value of ki.
   * initializes the object and
   * calls the getki in the BasePID class
   */
  double getKI(std::unique_ptr<BasePID> object) {
    return object->getki();
  }

  /**
   * @brief getKD function
   * @param object of std::unique_ptr<BasePID>
   * @return double the value of kd.
   * initializes the object and
   * calls the getkd in the BasePID class
   */
  double getKD(std::unique_ptr<BasePID> object) {
    return object->getkd();
  }

  /**
   * @brief setKP function
   * @param object of std::unique_ptr<BasePID>
   * @return none
   * initializes the object and
   * calls the setkp in the BasePID class
   */
  void setKP(std::unique_ptr<BasePID> object) {
    object->setkp(1);
  }

  /**
   * @brief setKP function
   * @param object of std::unique_ptr<BasePID>
   * @return none
   * initializes the object and
   * calls the setki in the BasePID class
   */
  void setKI(std::unique_ptr<BasePID> object) {
    object->setki(1);
  }

  /**
   * @brief setKD function
   * @param object of std::unique_ptr<BasePID>
   * @return none
   * initializes the object and
   * calls the setkd in the BasePID class
   */
  void setKD(std::unique_ptr<BasePID> object) {
    object->setkd(1);

  }

  /**
   * @brief computePID function
   * @param object of std::unique_ptr<BasePID>
   * @return none
   * initializes the object and
   * calls the compute in the BasePID class
   */
  void computePID(std::unique_ptr<BasePID> object) {
    object->compute(10, 30);
  }
};

#endif /* TEST_GMOCKCALL_H_ */
