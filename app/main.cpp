/**
 *  @copyright 2019
 *  @copyright GNU Public License
 *  @file main.cpp - app
 *  Part - 1
 *  @author Sandeep Kota Sai Pavan-driver
 *  @author Raj Prakash Shinde-navigator
 *  Part - 2
 *  @author  Raja Iskala - driver
 *  @author Yashaarth Todi-navigator 
 *  @date 09/25/2019
 *  @version 1.0
 *  @brief Main file containing the main() method.
 */

#include <iostream>
#include "pid.hpp"


/**
 *  @brief Main function to call methods
 *  @param none
 *  @return 0
 */
int main() {
PidController o;
double actualVelocity = 10;
double target = 30;
int count = 0;
int bound = 1;
std::cout << "p gain :" << o.getkp() << std::endl;
std::cout << "i gain :" << o.getki() << std::endl;
std::cout << "d gain :" << o.getkd() << std::endl;
std::cout << "dt gain:" << o.dt << std::endl;
//  Check convergance of the designed controller
while(abs(actualVelocity - target) > bound) {
actualVelocity = o.compute(actualVelocity, target);
count++;
}
std::cout << "New velocity: " << actualVelocity << " achieved in "
<< count << " cycles" << std::endl;
return 0;
}
