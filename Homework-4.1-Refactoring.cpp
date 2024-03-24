#include <iostream>
#include "shape.h"
#include "transform.h"
#include "point.h"

int main()
{
    Point A(1, 4, 6);
    Point B(2, 5, 8);

    std::cout << "Point A coords is: x=" << A.x << " y=" << A.y << " z=" << A.z << std::endl;
    std::cout << "Point B coords is: x=" << B.x << " y=" << B.y << " z=" << B.z << std::endl;
}