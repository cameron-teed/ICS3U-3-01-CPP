// Copyright(c) 2019 Cameron Teed All rights reserved.
//
// Created by: Cameron Teed
// Created on: September 2019
// This program adds two numbers

#include <iostream>

int main() {
     // This program adds two numbers

    int firstnumber;
    int secondnumber;
    int sum;

    // input

    std::cout << "Enter the first number: ";
    std::cin >> firstnumber;
    std::cout << "Enter the second number: ";
    std::cin >> secondnumber;

    // process

    sum = firstnumber+secondnumber;

    // output

    std::cout << "" << std::endl;
    std::cout << "The sum of " << firstnumber << "+" << secondnumber <<
    "=" << sum << "" << std::endl;
}
