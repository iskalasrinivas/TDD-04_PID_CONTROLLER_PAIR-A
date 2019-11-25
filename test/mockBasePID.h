/**
 *  @copyright 2019
 *  @copyright GNU Public License
 *  @file mockBasePID.h
 *  @author Raja Srinivas Iskala.
 *  @date 11/24/2019
 *  @version 1.0
 *  @brief Class definition of MockBasePID.
 */

#ifndef TEST_MOCKBASEPID_H_
#define TEST_MOCKBASEPID_H_

#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "basePID.hpp"

/**
 * @brief mockBasePID class
 * class to initializes the mock method
 * which will be tested using gmock.
 */

class MockBasePID : public BasePID {
 public:

  /**
   * @brief getkp mock method with no parameter
   * @return double
   * initializes the getkp mock
   */
  MOCK_METHOD0(getkp, double());

  /**
   * @brief getki mock method with no parameter
   * @return double
   * initializes the getki mock
   */
  MOCK_METHOD0(getki, double());

  /**
   * @brief getkd mock method with no parameter
   * @return double
   * initializes the getkd mock
   */
  MOCK_METHOD0(getkd, double());

  /**
   * @brief setkp mock method with one parameter
   * @param double p.
   * @return bool
   * initializes the setkp mock
   */
  MOCK_METHOD1(setkp, bool(double p));

  /**
   * @brief setki mock method with one parameter
   * @param double i.
   * @return bool
   * initializes the setki mock
   */
  MOCK_METHOD1(setki, bool(double i));

  /**
   * @brief setkd mock method with one parameter
   * @param double d.
   * @return bool
   * initializes the setkd mock
   */
  MOCK_METHOD1(setkd, bool(double d));

  /**
   * @brief compute mock method with 2 parameters.
   * @param double prevValue.
   * @param double setPoint.
   * @return double.
   * initializes the compute mock
   */
  MOCK_METHOD2(compute, double(double prevValue, double setPoint));

};

#endif /* TEST_MOCKBASEPID_H_ */
