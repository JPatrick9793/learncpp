//
//  main.cpp
//  4-4
//
//  Created by John Conway on 7/4/17.
//  Copyright © 2017 Johninc. All rights reserved.
//

#include <string>
#include <iostream>

using namespace std;

int main() {

    //promp and store full name as string
    cout << "Enter you full name:  \n";
    string name;
    getline(cin, name);
    
    //prompt and store age as integer
    cout << "Enter your age:  \n";
    int age;
    cin >> age;
    
    //clear std::cin
    cin.ignore(100, '\n');
    
    
    //create integer variable for length of name string
    float name_length(name.length());
    
    //create variable for years / stringlength as float
    float name_years(age/name_length);
    
    //write message to console
    cout << "You've lived " << name_years << " years for each letter in your name." << endl;
    
    return 0;
}
