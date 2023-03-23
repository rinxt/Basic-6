#include "Triangle.h"
#include <iostream>

Triangle::Triangle(int a, int b, int c, int A, int B, int C) {
    name_ = "Треугольник";
    a_ = a;
    b_ = b;
    c_ = c;
    A_ = A;
    B_ = B;
    C_ = C;
}

int Triangle::get_a() {
    return a_;
}

int Triangle::get_b() {
    return b_;
}

int Triangle::get_c() {
    return c_;
}

int Triangle::get_A() {
    return A_;
}

int Triangle::get_B() {
    return B_;
}

int Triangle::get_C() {
    return C_;
}

void Triangle::print_info() {
    Figure::print_info();

    std::cout << "Стороны: " << "a = " << get_a() << ", b = " << get_b() << ", с = " << get_c()
        << "\nУглы: " << "А = " << get_A() << ", В = " << get_B() << ", С = " << get_C() << std::endl;
}