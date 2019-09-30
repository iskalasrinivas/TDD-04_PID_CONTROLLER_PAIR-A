/**
 *  @copyright 2019
 *  @copyright GNU Public License
 *  @file  test.cpp
 *  Part - 1
 *  @author Sandeep Kota Sai Pavan-driver
 *  @author Raj Prakash Shinde-navigator
 *  Part - 2
 *  @author  Raja Iskala - driver
 *  @author Yashaarth Todi-navigator 
 *  @date  09/25/2019
 *  @version 1.0
 *  @brief Unit test cases for testing the methods
 */

#include <gtest/gtest.h>
#include <cstdlib>
#include <memory>
#include "pid.hpp"

std::shared_ptr<PidController> test;

/**
*   @brief A unit test to check the output velocity
*   in 1st cycle
*   
*/
TEST(PidController, testformulae) {
test = std::make_shared<PidController>();
ASSERT_EQ(test->compute(10, 30), 34.0008);
}

/**
*  @brief A unit test to check if the output velocity
*  is positive
*
*/
TEST(PidController, testVelocitySign) {
test = std::make_shared<PidController>();
EXPECT_GT(test->compute(10, 30), 0);
}

/**
*  @brief A unit test to check get Functions
*
*/
TEST(PidController, testGetFunctions) {
test = std::make_shared<PidController>();
EXPECT_LT(test->getkp(), 2);
EXPECT_LT(test->getki(), 2);
EXPECT_LT(test->getkd(), 2);
}

/**
*  @brief A unit test to check set Functions
*
*/
TEST(PidController, testSetFunctions) {
test = std::make_shared<PidController>();
EXPECT_TRUE(test->setkp(1));
EXPECT_TRUE(test->setki(1));
EXPECT_TRUE(test->setkd(1));
}

