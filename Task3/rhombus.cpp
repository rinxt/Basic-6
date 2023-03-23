#include "rhombus.h"

Rhombus::Rhombus(int a, int A) : Parallelogram(a, a, A) {
    Parallelogram::name_ = "Ромб";
};