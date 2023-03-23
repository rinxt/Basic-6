#include "isoscelesTriangle.h"

IsoscelesTriangle::IsoscelesTriangle(int a, int b, int A) : Triangle(a, b, a, A, 180 - 2 * A, A) {
    Triangle::name_ = "Равнобедренный треугольник";
}