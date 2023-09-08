//Documentation in header file: rec_fun.h
//Name and EMPLID: Jezlea Ortega 0846
//INTEGRITY: “The work in this assignment is my own. Any outside sources have been properly cited.”
//FILE:: rec_fun.cxx

#include <iostream>
#include "rec_fun.h"
using namespace std;

void binary_print(ostream& outs, unsigned int n)
{
    if (n == 0)
    {
        outs << 0;
        return;
    }
    
    if (n <= 1 && n !=0)
    {
        outs << n;
        return;
    }
    
    if (n > 1)
    {
       binary_print(outs, n >> 1);
       n = n % 2;
       outs << n;
    }
}

void triangle(ostream& outs, unsigned int m, unsigned int n) 
{
    if (m <=n)
    {
        int i;
        
        for (i = 1; i <=m; i++)
        {
            outs << "*";
        }
        outs << "\n";
        triangle(outs, m+1, n);
        
        for (i = 1; i <=m; i++)
        {
            outs << "*";
        }
        outs << "\n";
    }
}

double pow(double x, int n)
{
    int result = 0;
    
    if (n == 0)
    {
        return 1;
    }
    
    while (n % 2 > 0 || n % 2 < 0)
    {
        result = x * (pow(x, n / 2 ) * pow(x, n / 2 ));
        return result; 
    }
    
    while (n % 2 ==0)
    {
        result = (pow(x, n / 2) * pow(x, n / 2));
        return result; ;  
    }
}

void indented_sentences(size_t m, size_t n)
{
    if (m <=n)
    {
        int i;
        
        for (i = 1; i < m; i++)
            cout << " ";
            cout <<"This was written by calling number " << m;
            cout << "\n";
            indented_sentences(m+1, n);
        
        for (i = 1; i < m; i++)
            cout << " ";
            cout << "This was ALSO written by calling number " << m;
            cout << "\n";
    }
}
