//
// Created by Bartłomiej Gładys on 10.05.2018.
//
#include "math.h"
unsigned long long newton( unsigned int n, unsigned int k)
{
    double result = 1;

    for( unsigned int i = 1; i <= k; i++)
    {
        result = result * ( n - i + 1 ) / i;
    }

    return (unsigned long long) result;
}

double gram(double k, int n, double q){
    double result;
    for(int s = 0 ; s <= k; s ++){
        result += pow(-1, s) * newton(k, s) * newton(k+s, s) * (pow(q, s)/ pow(n, s));
    }
    return result;
}

