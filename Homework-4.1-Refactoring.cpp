#include <iostream>
#include "shape.h"
#include "transform.h"

int main()
{
    Point A(1, 4);
    Point B(2, 4);

    std::cout << "Point A coords is : x = " << A.x << " y = " << A.y << std::endl;
    std::cout << "Point B coords is : x = " << B.x << " y = " << B.y << std::endl;
}