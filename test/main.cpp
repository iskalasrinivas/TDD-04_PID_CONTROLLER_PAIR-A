/**
 *  @copyright 2019
 *  @copyright GNU Public License
 *  @file main.cpp-test
 *  Part - 1
 *  @author Sandeep Kota Sai Pavan-driver
 *  @author Raj Prakash Shinde-navigator
 *  Part - 2
 *  @author  Raja Iskala - driver
 *  @author Yashaarth Todi-navigator 
 *  @date 09/25/2019
 *  @version 1.0
 *  @brief Run google unit tests present in test.cpp 
 */

#include <gtest/gtest.h>

int main(int argc, char** argv) {
::testing::InitGoogleTest(&argc, argv);
return RUN_ALL_TESTS();
}
