//
// Created by Bartłomiej Gładys on 10.05.2018.
//
#include "gram.h"
#include "math.h"

int N = 50;

double f(double x) {
    return cos(3 * x) * sin(sqrt(2)) * x;
}

//k === j
double getSj(double k, int n) {
    double result = 0;
    for (int q = 0; q <= n; q++)
        result += pow(gram(k, n, q), 2);
    return result;
}


double getCj(double k, int n) {
    double result = 0;
    for (int q = 0; q <= n; q++)
        result += gram(k, n, q) * f(q);
    return result;
}

double approximate(double m, double q) {
    double result = 0;
    for (int j = 0; j <= m; j++)
        result += getCj(j, N) / getSj(j, N) * gram(j, N, q);
    return result;
}
