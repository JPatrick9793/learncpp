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
    //if x / 2^y is greater than or equal to 1, print "1"
    std::cout << ((x / pow(2, y) >= 1) ? 1 : 0);
    return x / pow(2, y);
}


int main()
{
    std::cout << "Input integer between 0 and 255:\t";
    
    //"x" is user input
    int x;
    std::cin >> x;
    
    //"y" is power of 2
    int y(8);
    
    while (y >= 0) {
        //print corresponding binary #
        isGreaterThan2s(x, y);
        
        //create if loop to evaluate new value for x
        if (isGreaterThan2s(x, y) == 1) {
            x = x % static_cast<int>(x / pow(2, y));
        }
        
        //re-assign the remainder to be the value of x
        //x = x % static_cast<int>(x / pow(2, y));
        
        //decrement counter
        y -= 1;
    }
    std::cout << std::endl;
    
    return 0;
}
