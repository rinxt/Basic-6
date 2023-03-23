#include "Quadrilateral.h"
#include <iostream>

Quadrilateral::Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D) {
    name_ = "Четырехугольник";
    a_ = a;
    b_ = b;
    c_ = c;
    d_ = d;
    A_ = A;
    B_ = B;
    C_ = C;
    D_ = D;
}

int Quadrilateral::get_a() {
    return a_;
}

int Quadrilateral::get_b() {
    return b_;
}

int Quadrilateral::get_c() {
    return c_;
}

int Quadrilateral::get_d() {
    return d_;
}

int Quadrilateral::get_A() {
    return A_;
}

int Quadrilateral::get_B() {
    return B_;
}

int Quadrilateral::get_C() {
    return C_;
}

int Quadrilateral::get_D() {
    return D_;
}

void Quadrilateral::print_info() {
    Figure::print_info();

    std::cout << "Стороны: " << "a = " << get_a() << ", b = " << get_b() << ", с = " << get_c() << ", d = " << get_d()
        << "\nУглы: " << "А = " << get_A() << ", В = " << get_B() << ", С = " << get_C() << ", D = " << get_D() << std::endl;
}
