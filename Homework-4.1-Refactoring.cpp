#include <iostream>
#include "shape.h"
#include "transform.h"
#include "point.h"

int main()
{
    Point A(1, 1);
    Point B(1, 3);
    Point C(3, 3);
    Point D(3, 1);
    Point E, F, G, H;
    Shape square(1, A, B, C, D, E, F, G, H);
    std::cout << square.square << std::endl;

    transform trans_sqr(square);
    trans_sqr.shift(10, 10, 10);
    std::cout << trans_sqr.shape.A.x << " " << trans_sqr.shape.A.y << std::endl;
    std::cout << trans_sqr.shape.B.x << " " << trans_sqr.shape.B.y << std::endl;
    std::cout << trans_sqr.shape.C.x << " " << trans_sqr.shape.C.y << std::endl;
    std::cout << trans_sqr.shape.D.x << " " << trans_sqr.shape.D.y << std::endl;
}