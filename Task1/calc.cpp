#include "calc.h"
#include <cmath>
#include <iostream>

double Calculator::add(double x, double y) {
    return x + y;
}

double Calculator::subtract(double x, double y) {
    return x - y;
}

double Calculator::multiply(double x, double y) {
    return x * y;
}

double Calculator::divide(double x, double y) {
    return x / y;
}

double Calculator::power(double x, double y) {
    return pow(x, y);
}
