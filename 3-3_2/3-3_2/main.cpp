//
//  main.cpp
//  3-3_2
//
//  Created by John Conway on 7/1/17.
//  Copyright © 2017 Johninc. All rights reserved.
//

#include <iostream>
#include "Header.h"


int main()
{
    //Prompt user to input integer
    std::cout << "Please input integer:\t";
    
    //insantiate integer variable "user_input" and assign value
    int user_input;
    std::cin >> user_input;
  
    if (isEven(user_input) == true) {
        std::cout << "your integer is EVEN\n";
    } else {
        std::cout << "your integer is ODD \n";
    }
    
    return 0;
}
