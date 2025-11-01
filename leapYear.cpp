// Copyright (c) 2025 Yoma Ozoh All rights reserved.
//
// Created by: Yoma Ozoh
// Date: October 2025
// This program checks if user can date grandchild

#include <iostream>
#include <string>

int main() {
    int userYear;
    std::string userYearAsString;

    // get user input as a string
    std::cout << "Hello, Enter a year please: ";
    std::cin >> userYearAsString;

    int userYearAsInt;

    try {
        // convert input to integer
        userYearAsInt = std::stoi(userYearAsString);

        // check if year is divisible by 4
        if (userYearAsInt % 4 == 0) {
            // check if year is divisible by 100
            if (userYearAsInt % 100 == 0) {
                // check if year is divisible by 400
                if (userYearAsInt % 400 == 0) {
                    std::cout << userYearAsInt << " is a leap year"
                    << std::endl;
                    // output if userYearAsInt is not a leap year
                } else {
                    std::cout << userYearAsInt << " is not a leap year"
                    << std::endl;
                }
            } else {
                // output if userYearAsInt is not evenly divisible by 100
                std::cout << userYearAsInt << " is a leap year" << std::endl;
            }

        } else {
            // output if userYearAsInt is not evenly divisible by 100
            std::cout << userYearAsInt << " is not a leap year " << std::endl;
        }
    } catch (std::invalid_argument) {
        // input was not a number
        std::cout << "ERROR! Please enter an integer!" << std::endl;
    }

    std::cout << "Thanks for playing!" << std::endl;
}
