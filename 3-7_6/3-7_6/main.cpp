//
//  main.cpp
//  3-7_6
//
//  Created by John Conway on 7/1/17.
//  Copyright © 2017 Johninc. All rights reserved.
//

#include <iostream>
#include <cmath>

int isGreaterThan2s(int x, int y)
{
    //if x - 2^y is greater than or equal to 1, print "1" and return difference
    if (x >= pow(2, y)) {
        std::cout << 1;
        return (x - pow(2,y));
    } else {
        std::cout << 0;
        return x;
    }
}


int main()
{
    std::cout << "Input integer between 0 and 255:\t";
    
    //"x" is user input
    int x;
    std::cin >> x;
    
    std::cout << "\nThis is how to write " << x << " in binary:\n";
    //initialize y to start at power of 8:
    int y(8);
    
    //create while loop to iterate through powers of 2:
    while (y >= 0) {
        x = isGreaterThan2s(x, y);
        y -= 1;
         //print space between 4th and 5th chars
        if (y == 4) {
            std::cout << " ";
        }
    }

    std::cout << "\n\n";
    
    return 0;
}
