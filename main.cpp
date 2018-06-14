#include <iostream>
#include "helpers.h"
#include "approximate.h"
#include <fstream>

int main() {
    std::cout << "Hello, World!" << std::endl;

    double xArr[50];
    int qArr[50];
    generatePointsAndApplyLinearTransformation(xArr, qArr, -2, 2, 50);

    double resultArr[50];

    int m = 2;

    std::ofstream doPliku;

    for (int i = 0; i < 50; i++)
        resultArr[i] = approximate(m, qArr[i]);

    for (int i = 0; i < 50; i++)
        std::cout << resultArr[i] << " " << std::endl;

    for (int m = 1; m <= 8; m++){
        std::string fname = "resultM";
        fname += std::to_string(m);
        fname += ".csv";

        doPliku.open(fname);

        for (int i = 0; i < 50; i++) {
            resultArr[i] = approximate(m, qArr[i]);
        }

        doPliku << "x,";
        for (int i = 0; i < 50; i++)
            doPliku << xArr[i] << ",";
        doPliku << std::endl;

        doPliku << "q,";
        for (int i = 0; i < 50; i++)
            doPliku << qArr[i] << ",";
        doPliku << std::endl;

        doPliku << "f(x),";
        for (int i = 0; i < 50; i++)
            doPliku << resultArr[i] << ",";
        doPliku << std::endl;

        doPliku.close();
    }
    return 0;
}