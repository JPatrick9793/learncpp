//
//  main.cpp
//  4-1a_1
//
//  Created by John Conway on 7/2/17.
//  Copyright © 2017 Johninc. All rights reserved.
//

#include <iostream>


void printOrder (int a, int b)
{
    std::cout << a << " is smaller integer\n";
    std::cout << b << " is larger integer\n";
}

int main() {
    
    //prompt user for first integer
    std::cout << "Input Integer:\t";
    int a;
    std::cin >> a;
    
    //prompt user for second integer
    std::cout << "Input a larger integer:\t";
    int b;
    std::cin >> b;
    
    if (a == b) {
        std::cout << "They are the same!!";
    }
    if (a > b) {
        
        //create local variables to switch values of a and b
        int a1(a);
        int b1(b);
        int a(b1);
        int b(a1);
        
        printOrder(a, b);
    }
    if (a < b) {
        
        printOrder(a, b);

    }
    
    
    return 0;
}
