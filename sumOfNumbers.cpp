// Copyright (c) 2022 Paterry B.J All rights reserved
//
// Created by Paterry Baptichon Junior
// Created on 2022-04-20
// this program shows the sum of all positive numbers from 0 to number entered

#include <iostream>
#include <string>

int main() {
    // this program shows the sum of all positive numbers from 0 to number
    // entered
    int positive_number;
    int counter;
    int sum;
    std::string positive_number_string;


    // input
    std::cout << "Enter any positive integer please: ";
    std::cin >> positive_number_string;
    std::cout << "" << std::endl;
    sum = 0;
    counter = 0;


    // process the sum and output of the sum
    try {
        positive_number = std::stoi(positive_number_string);

        if (positive_number >= 0) {
            while (counter < positive_number) {
                sum = sum + (counter + 1);
                counter = counter + 1;
            }
             std::cout << "The sum of all positive numbers from 0 to "
                      << positive_number << " is " << sum << std::endl;
    }   else {
            std::cout << "That was not a positive integer. Enter an integer"
                          " above 0.";
            std::cout << "" << std::endl;
    }
    }catch (std::invalid_argument) {
        std::cout << "That was not an integer. Please enter an integer.";
    }
}
