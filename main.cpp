//
//  main.cpp
//  cpp-022
//
//  Created by Asher Abrams on 2017/06/28.
//  Copyright © 2017 Asher Abrams. All rights reserved.
//
//  Returns the square of the cube of a number.
//  Last updated 2018-12-04.

//  PREPROCESSOR
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

//  DECLARATIONS
int userchoice;
double userin01;
double userin02;
double output01;
double output02;

double func01(double);
double func02(double);

//  MAIN
int main(int argc, const char * argv[]) 
{
    cout << "Square=1, Cube=2\n?";
    cin >> userchoice;

//  SCREEN USERCHOICE
    if(userchoice != 1)
        if(userchoice !=2)
        {
            cout << "INVALID ENTRY\n";
            return 0;
        }
    
//  USER INPUT
    cout << "Input\n?";
    cin >> userin01;
    if(userchoice == 1)
    {
        func01(userin01);
        cout << output01 << '\n';
        return 0;
    }
    if(userchoice == 2)
    {
        func02(userin01);
        cout << output02 << '\n';
        return 0;
    }
    return 0;
}

//  FUNCTION DEFINITION
double func01(double userin01)
{
    return output01 = pow(userin01, 2);
}

double func02(double userin01)
{
    return output02 = pow(userin01, 3);
}
