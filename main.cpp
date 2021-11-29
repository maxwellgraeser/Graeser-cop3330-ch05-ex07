#include "header.h"

/*
Write a program that can calculate x for a quadratic equation. Create a
function that prints out the roots of a quadratic equation, given a, b, c.
When the program detects an equation with no real roots, have it print
out a message. How do you know that your results are plausible? Can
you check that they are correct?
*/

int main() {
    double a, b, c;
    
    cout << "Enter the coefficients a, b, and c for the quadratic formula: ";
    cin >> a;
    cin >> b;
    cin >> c;

    cout << quadratic(a,b,c);

    return 0;
}