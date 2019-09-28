/**
 *  @file main.cpp-test
 *  @author Raj Prakash Shinde-driver
 *  @author Sandeep Kota Sai Pavan-navigator
 *  @date 09/25/2019
 *  @version 1.0
 *  @copyright 2019
 *  @copyright GNU Public License
 *  @brief Run google unit tests present in test.cpp 
 */

#include <gtest/gtest.h>

int main(int argc, char** argv) {
::testing::InitGoogleTest(&argc, argv);
return RUN_ALL_TESTS();
}
