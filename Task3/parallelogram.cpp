#include "parallelogram.h"

Parallelogram::Parallelogram(int a, int b, int A) : Quadrilateral(a, b, a, b, A, 180 - A, A, 180 - A) {
    Quadrilateral::name_ = "ֿאנאככוכמדנאלל";
};
