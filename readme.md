# C++ Boilerplate
[![Build Status](https://travis-ci.org/RajPShinde/TDD-04_PID_CONTROLLER_PAIR-A.svg?branch=master)](https://travis-ci.org/RajPShinde/TDD-04_PID_CONTROLLER_PAIR-A)
[![Coverage Status](https://coveralls.io/repos/github/RajPShinde/TDD-04_PID_CONTROLLER_PAIR-A/badge.svg?branch=master&service=github)](https://coveralls.io/github/RajPShinde/TDD-04_PID_CONTROLLER_PAIR-A?branch=master)


## Authors of Part 1

* **Sandeep Kota Sai Pavan** - *Driver* - [GitHub](https://github.com/sandeep-kota)
* **Raj Prakash Shinde** - *Navigator* - [GitHub](https://github.com/RajPShinde)

## Authors of Part 2

* **Raja Iskala** - *Driver* - [GitHub](https://github.com/iskalasrinivas)
* **Yashaarth Todi** - *Navigator* - [GitHub](https://github.com/Ytodi31)


## Overview

Implimentation of PID Controller

## Install Instructions

```
git clone --recursive https://github.com/RajPShinde/TDD04-PID_Controller_Pair_A.git
cd <path to repository>
mkdir build
cd build
cmake ..
make
Run tests: ./test/cpp-test
Run program: ./app/shell-app
```

## Guidelines to compute method

Design a [PID controller](https://en.wikipedia.org/wiki/PID_controller) to reach a given set point goal from the given actual velocity. Change the compute() method and pass the tests. 

The UML Class and Activity Diagram represents the workflow of the compute method. A proper implementation of the methods will clear the two unit test cases.


## TODO List

1) Inputs for kp, ki, kd could have been taken from the user rather than setting a default value
2) Method for tuning the PID constants could have been added.
