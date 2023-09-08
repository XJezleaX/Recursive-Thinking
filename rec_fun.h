// PROVIDED BY: ________________ Jezlea Ortega jortega010@citymail.cuny.edu
// FILE: recfun.h
//Name and EMPLID: Jezlea Ortega 0846
//INTEGRITY: “The work in this assignment is my own. Any outside sources have been properly cited.”
  
#include <iostream>
#include <cstdlib>
#include <cctype>
using namespace std;


void binary_print(ostream& outs, unsigned int n);
//    Postcondition: The function prints the value of n as a BINARY number to the 
//    ostream outs. If n is zero, then a single zero is printed; otherwise no leading 
//    zeros are printed in the output. The ‘\n’ character is NOT printed at the end of the output.

void triangle(ostream& outs, unsigned int m, unsigned int n);
//    Precondition: m <= n
//    Postcondition: The function has printed a pattern of 2*(n-m+1) lines
//    to the output stream outs. The first line contains m asterisks, the next 
//    line contains m+1 asterisks, and so on up to a line with n asterisks.
//    Then the pattern is repeated backwards, going n back down to m.

void indented_sentences(size_t m, size_t n);
//    Precondition: m <=n;
//    Postcondition: print out the above pattern by calling number from m to n

double pow(double x, int n);
//    Precondition: If x is zero, then n must be positive.
//    Postcondition: The value returned is x raised to the power n.
  
