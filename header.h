/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Maxwell Graeser
 */

#include <iostream>
#include <math.h>
#include "string"
using namespace std;

// given doubles representing the coeff of a quadratic equation: a, b, and c
// returns the roots
// returns "No real roots" message if no real roots
// you can check the results are accurate by plugging in x into the original equation
string quadratic(double a, double b, double c) {

    // what is inside the sqrt
    double temp = (b * b) - (4 * a * c);
    if (temp < 0) return "No real roots";

    // continue with quadratic equation
    double x1, x2;
    x1 = (-b + sqrt(temp)) / (2 * a);
    x2 = (-b - sqrt(temp)) / (2 * a);

    // return
    string hold1 = to_string(x1);
    string hold2 = to_string(x2);

    return "The roots for the given a, b, and c are: " + hold1 + " and " + hold2;
}