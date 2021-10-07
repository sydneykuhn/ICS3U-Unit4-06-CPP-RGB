// Copyright (c) 2020 Sydney Kuhn All rights reserved
//
// Created by: Sydney Kuhn
// Created on: Oct 2020
// This program calculates the squares of sequential numbers starting at 0

#include <iostream>


int main() {
    // this function has nested loop
    int red = 0;
    int green = 0;
    int blue = 0;

    // process & output
    for (red = 200; 256 > red; red++) {
        for (green = 200; 256 > green; green++) {
            for (blue = 200; 256 > blue; blue++) {
                std::cout << "RGB (" "" << red << ", " "" << green << ", " ""
                << blue << ")" << std::endl;
            }
        }
    }
    std::cout << "\nDone." << std::endl;
}
