//
//  main.cpp
//  4-7_2
//
//  Created by John Conway on 7/6/17.
//  Copyright © 2017 Johninc. All rights reserved.
//

#include <iostream>

struct Fraction
{
    int numerator;
    int denominator;
};

void multiply(Fraction a, Fraction b)
{
    using namespace std;
    double A = static_cast<double>(a.numerator) / a.denominator;
    double B = static_cast<double>(b.numerator) / b.denominator;
    double AB = A * B;
    
    cout << "The product of your fractions is " << AB << endl;
}

Fraction getFraction()
{
    using namespace std;
    
    cout << "Enter numerator of fraction\n";
    int a;
    cin >> a;
    
    cout << "Enter denominator of fraction\n";
    int b;
    cin >> b;
    
    cout << "-----------\n";
    
    Fraction temp = {a, b};
    return temp;
}

int main()
{
    std::cout << "Initializing first fraction...\n";
    Fraction first = getFraction();
    
    std::cout << "Initializing second fraction...\n";
    Fraction second = getFraction();
    
    multiply(first, second);
    return 0;
    
    return 0;
}
