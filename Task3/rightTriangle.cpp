#include "rightTriangle.h"

RightTriangle::RightTriangle(int a, int b, int c, int A, int B, int C) : Triangle(a, b, c, A, B, C) {
        Triangle::name_ = "Прямоугольный треугольник";
}