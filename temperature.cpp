// Copyright (c) 2019 Jacob Bonner All rights reserved.
//
// Created by: Jacob Bonner
// Created on: November 2019
// This program converts Celcius to Farenheit

#include <iostream>

void conversion() {
    // This program converts Celcius to Farenheit

    // Variables
    float temperatureCelcius;
    float temperatureFarenheit;

    // Input
    std::cout << "Enter a temperature in Celcius here:" << std::endl;
    std::cin >> temperatureCelcius;
    std::cout << "" << std::endl;

    // Process
    temperatureFarenheit = (9.0/5.0) * temperatureCelcius + 32;

    // Output
    std::cout << temperatureCelcius << "°C is " << temperatureFarenheit \
              << "° in Farenheit" << std::endl;
}

int main() {
    // This function calls other functions

    // Function calls
    conversion();
}
