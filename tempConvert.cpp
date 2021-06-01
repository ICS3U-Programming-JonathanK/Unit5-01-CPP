// Copyright (c) 2021 Jonathan Kene All rights reserved.
//
// Created by: Jonathan Kene
// Created on: June 1, 2021
// The program will use one for loop and one if statement,
// outputting five integers per line with each separated by a space.

#include <iostream>

void Fahrenheit() {
    float userAsInt;
    float temp;
    std::string userAsString;

    // get the user's guess
    std::cout << "Enter the Temperature (°C): ";
    // get the guess from the user as a string
    std::cin >> userAsString;

try {
    // convert the tempertature in celsius from user into fahrenheit
    userAsInt = std::stoi(userAsString);
    std::cout << "\n";
    temp = (9.0/5.0) * userAsInt + 32;
    std::cout << userAsInt << "°C is equal to " << temp << "°F" << std::endl;
} catch (std::invalid_argument) {
    // The user did not enter an integer.
       std::cout << "\n";

    std::cout << userAsString << " is not an integer.\n";
}
}

int main() {
    Fahrenheit();
}

