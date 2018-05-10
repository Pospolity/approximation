//
// Created on 10/05/2018.
//

#include "helpers.h"
#include <math.h>

void generatePointsAndApplyLinearTransformation(double *xArr, int *qArr, int rangeStart, int rangeEnd, int numberOfNodes) {
    double h = double(rangeEnd - rangeStart) / numberOfNodes;
    for(int i = 0; i < numberOfNodes; i++){
        double x = rangeStart + i * h;
        xArr[i] = x;
        qArr[i] = round((x - rangeStart) / h);
    }
}
