// Copyright (c) 2021 Jenoe Balote All Rights Reserved
//
// Created by: Jenoe Balote
// Created on: May 2021
// This program determines the greatest of two numbers
//   inputted by the user

#include <iostream>

int main() {
    // this function runs the greatest number program
    int number1;
    int number2;


    // input
    std::cout << "Which number is greater?";
    std::cout << "" << std::endl;
    std::cout << "Enter your first number: ";
    std::cin >> number1;
    std::cout << "Enter your second number: ";
    std::cin >> number2;
    std::cout << "Enter your first number: ";
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;

    // process
    if (number1 > number2) {
        // output
        std::cout << number1 << " is the greater number!" << std::endl;
    } else if (number1 < number2) {
        // output
        std::cout << number2 << " is the greater number!" << std::endl;
    } else if (number1 == number2) {
        // output
        std::cout << "The two numbers are equal!" << std::endl;
    }
}
