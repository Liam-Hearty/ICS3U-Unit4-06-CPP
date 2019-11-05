// Copyright (c) 2019 Liam Hearty All rights reserved.
//
// Created by: Liam Hearty
// Created on: October 2019
// This program uses a while loop inside another loop.


#include <iostream>

main() {
    // this function uses a nested loop
    int red;
    int green;
    int blue;

    // process & output
    for (red = 0; red < 255+1; red++) {
        for (green = 0; green < 255+1; green++) {
            for (blue = 0; blue < 255+1; blue++) {
                std::cout << "RGB " << red << ", " << green << ", " << blue <<
                std::endl;
            }
        }
    }
}
