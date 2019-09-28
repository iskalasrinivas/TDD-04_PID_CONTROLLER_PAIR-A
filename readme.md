# Week 5 - PID Controller
[![Build Status](https://travis-ci.org/RajPShinde/TDD04-PID_Controller_Pair-A.svg?branch=master)](https://travis-ci.org/RajPShinde)
[![Coverage Status](https://coveralls.io/repos/github/RajPShinde/TDD04-PID_Controller_Pair-A/badge.svg?branch=master&service=github)](https://coveralls.io/github/RajPShinde/TDD04-PID_Controller_Pair-A?branch=master)
---

## Authors of Part 1

* **Raj Prakash Shinde** - *Driver* - [GitHub](https://github.com/RajPShinde)
* **Sandeep Kota Sai Pavan** - *Navigator* - [GitHub](https://github.com/sandeep-kota)

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
