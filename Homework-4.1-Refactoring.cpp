#include <iostream>
#include "shape.h"
#include "transform.h"
#include "point.h"

int main()
{
    Point A(10, 10);
    Point B(10, 30);
    Point C(30, 30);
    Point D(30, 10);
    
    Sqr sqr(A, B, C, D);
    
    std::cout << sqr.getArea() << std::endl;
    std::cout << sqr.getVolume() << std::endl;
    std::cout << "D: " << sqr.D.x << ", " << sqr.D.y << std::endl;
}