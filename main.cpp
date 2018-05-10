#include <iostream>
#include "helpers.h"
#include "approximate.h"

int main() {
    std::cout << "Hello, World!" << std::endl;

    double xArr[50];
    int qArr[50];
    generatePointsAndApplyLinearTransformation(xArr, qArr, -2, 2, 50);

    double resultArr[50];

    int m = 2;

    for (int i = 0; i < 50; i++)
        resultArr[i] = approximate(m, qArr[i]);

    for (int i = 0; i < 50; i++)
        std::cout << resultArr[i] << " " << std::endl;

    return 0;
}