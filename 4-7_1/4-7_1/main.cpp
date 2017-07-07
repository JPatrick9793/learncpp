//
//  main.cpp
//  4-7_1
//
//  Created by John Conway on 7/6/17.
//  Copyright © 2017 Johninc. All rights reserved.
//

#include <iostream>

using namespace std;

struct Advertisements
{
    int number;
    double percent;
    double earned;
};

void printInfo(Advertisements x)
{
    cout << "number of ads:\t" << x.number << "\n";
    cout << "percent of ads clicked:\t" << x.percent * 100 << "%\n";
    cout << "average earnings per ad clicked:\t$" << x.earned << "\n";
    
    double y = x.number * x.percent * x.earned;
    
    cout << "--------------------\n";
    cout << "Total amount earned:\t$" << y << endl;
}

int main()
{
    Advertisements website;
    
    cout << "Input number of ads\n";
    cin >> website.number;
    
    cout << "Input percent of ads clicked on (in decimal form):\n";
    cin >> website.percent;
    
    cout << "Input average earnings per ad clicked:\n";
    cin >> website.earned;
    
    cout << "--------------------\n";
    
    printInfo(website);
    
    cout << "--------------------\n";
    return 0;
}
