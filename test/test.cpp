/**
 *  @copyright 2019
 *  @copyright GNU Public License
 *  @file test.cpp
 *  @author Raja Srinivas Iskala.
 *  @date 11/24/2019
 *  @version 1.0
 *  @brief  Implementation of gmock framework for unit testing.
 */

#include <iostream>
#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "mockBasePID.h"
#include "gmockCall.h"
#include "pid.hpp"
#include "basePID.hpp"

/**
 *@brief Cases to test setting of kp gain by the mocked class
 *and the derived class
 *@param none
 *@return none
 */
TEST(GmockCall, setkpTest) {
  PidController pidController;
  std::unique_ptr<MockBasePID> pidObject(new MockBasePID);;
  std::unique_ptr<GmockCall> gmock;

  // expect a call of the mocked class and should return true
  ON_CALL(*pidObject, setkp(1)).WillByDefault(::testing::Return(true));
  gmock->setKP(std::move(pidObject));

  // check if the value is set properly
  EXPECT_TRUE(pidController.setkp(1));
}

/**
 *@brief Cases to test setting of ki gain by the mocked class
 *and the derived class
 *@param none
 *@return none
 */
TEST(GmockCall, setkiTest) {
  PidController pidController;
  std::unique_ptr<MockBasePID> pidObject = std::make_unique<MockBasePID>();
  std::unique_ptr<GmockCall> gmock;

  // expect a call of the mocked class and should return true
  ON_CALL(*pidObject, setki(1)).WillByDefault(::testing::Return(true));
  gmock->setKP(std::move(pidObject));

  // check if the value is set properly
  EXPECT_TRUE(pidController.setki(1));
}

/**
 *@brief Cases to test setting of kd gain by the mocked class
 *and the derived class
 *@param none
 *@return none
 */
TEST(GmockCall, setkdTest) {
  PidController pidController;
  std::unique_ptr<MockBasePID> pidObject = std::make_unique<MockBasePID>();
  std::unique_ptr<GmockCall> gmock;

  // expect a call of the mocked class and should return true
  ON_CALL(*pidObject, setkd(1)).WillByDefault(::testing::Return(true));
  gmock->setKP(std::move(pidObject));

  // check if the value is set properly
  EXPECT_TRUE(pidController.setkd(1));
}

/**
 *@brief Unit test to check if the returned gain
 *are the initialized gains
 *@param none
 *@return none
 */
TEST(PIDtest, getGainsTest) {
  PidController pidController;

  // check if the values set are correct.
  EXPECT_EQ(0.2, pidController.getkp());
  EXPECT_EQ(0.02, pidController.getki());
  EXPECT_EQ(0.002, pidController.getkd());
}

/**
 *@brief Cases to test setting of compute PID by the mocked class
 *and the derived class
 *@param none
 *@return none
 */
TEST(GmockStatic, computeMethodTest) {
  PidController pidController;
  std::unique_ptr<MockBasePID> pidObject = std::make_unique<MockBasePID>();
  std::unique_ptr<GmockCall> gmock;

  EXPECT_CALL(*pidObject , compute(10, 30)).Times(1).WillOnce(
      ::testing::Return(34.0008));
  gmock->computePID(std::move(pidObject));

  ASSERT_EQ(pidController.compute(10, 30), 34.0008);
}

