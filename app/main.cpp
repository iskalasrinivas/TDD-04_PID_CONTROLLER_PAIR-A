/**
 *  @copyright 2019
 *  @copyright GNU Public License
 *  @file main.cpp - app
 *  @author Raja Srinivas Iskala
 *  @date 11/24/2019
 *  @version 1.0
 *  @brief Main file containing the main() method.
 */

#include <memory>
#include <iostream>
#include "pid.hpp"
#include "basePID.hpp"

/**
 *  @brief Main function to call methods
 *  @param none
 *  @return 0
 */
int main() {
  // use unique pointer to make base class pointer to derived class object.
  std::unique_ptr<BasePID> o = std::make_unique<PidController>();
  double actualVelocity = 10;
  double target = 30;
  int count = 0;
  int bound = 1;
  std::cout << "p gain :" << o->getkp() << std::endl;
  std::cout << "i gain :" << o->getki() << std::endl;
  std::cout << "d gain :" << o->getkd() << std::endl;
//  Check convergance of the designed controller
  while (abs(actualVelocity - target) > bound) {
    actualVelocity = o->compute(actualVelocity, target);
    count++;
  }
  std::cout << "New velocity: " << actualVelocity << " achieved in " << count
            << " cycles" << std::endl;
  return 0;
}
