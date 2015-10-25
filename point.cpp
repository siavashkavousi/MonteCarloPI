//
// Created by sia on 10/23/15.
//

#include "point.h"

point::point(double x, double y) {
    xval = x;
    yval = y;
}

double point::x() {
    return xval;
}

double point::y() {
    return yval;
}

