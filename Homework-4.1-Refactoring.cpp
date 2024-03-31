#include <iostream>
#include "shape.h"
#include "point.h"

int main()
{
    Point A(10, 10);
    Point B(10, 30);
    Point C(30, 30);
    Point D(30, 10);
    Point O(50, 50, 50);
    
    Sqr sqr(A, B, C, D);
    
    std::cout << "Sqr area is: " << sqr.getArea() << std::endl;
    std::cout << "Sqr volume is: " << sqr.getVolume() << std::endl;

    std::cout << "\nBefore shift: A(" << sqr.getA().x << ", " << sqr.getA().y << ")"
                             << " B(" << sqr.getB().x << ", " << sqr.getB().y << ")"
                             << " C(" << sqr.getC().x << ", " << sqr.getC().y << ")"
                             << " D(" << sqr.getD().x << ", " << sqr.getD().y << ")" << std::endl;

    sqr.shift(15, 15, 0);

    std::cout << "After shift: A(" << sqr.getA().x << ", " << sqr.getA().y << ")"
                          << " B(" << sqr.getB().x << ", " << sqr.getB().y << ")"
                          << " C(" << sqr.getC().x << ", " << sqr.getC().y << ")"
                          << " D(" << sqr.getD().x << ", " << sqr.getD().y << ")" << std::endl;

    Cylinder cylinder(O, 2, 10);

    std::cout << "\nCylinder area is: " << cylinder.getArea() << std::endl;
    std::cout << "Cylinder volume is: " << cylinder.getVolume() << std::endl;
    std::cout << "Cylinder info: O(" << cylinder.getO().x << ", " << cylinder.getO().y << ", " << cylinder.getO().z 
              << "), Radius: " << cylinder.getRadius() 
              << ", Height: " << cylinder.getHeight() << std::endl;
}