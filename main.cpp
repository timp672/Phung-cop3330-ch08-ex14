/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Tim Phung
 */
#include "std_lib_facilities.h"
using namespace std;

const float DollarToEuro = 0.89;

//the dollar inputted will not change
float convert(const float a)
{
    return (int)a * DollarToEuro;
}

int main()
{
    float a, result;
    cout << "Enter your dollar amount (In USD): ";
    cin >> a;

    result = convert(a);

    cout << a << " USD is equal to " << result << " EUROS";

    return 0;
}
