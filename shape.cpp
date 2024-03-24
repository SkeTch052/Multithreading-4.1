#define _USE_MATH_DEFINES
#include"shape.h"
#include<cmath>

Line::Line(Point _A, Point _B) 
{ 
	type = 0;
	A = _A; B = _B;

	area = 0;
	volume = 0;
}

Sqr::Sqr(Point _A, Point _B, Point _C, Point _D)
{
	type = 1;
	A = _A; B = _B; C = _C; D = _D;

	double side_a = abs(A.x - B.x) + abs(A.y - B.y);
	double side_b = abs(A.x - D.x) + abs(A.y - D.y);

	area = side_a * side_b;
	volume = 0;
}

Cube::Cube(Point _A, Point _B, Point _C, Point _D, Point _E, Point _F, Point _G, Point _H)
{
	type = 2;
	A = _A; B = _B; C = _C; D = _D;
	E = _E; F = _F; G = _G; H = _H;

	double side_a = abs(A.x - B.x) + abs(A.y - B.y);
	double side_b = abs(A.x - D.x) + abs(A.y - D.y);
	double side_c = abs(A.x - E.x) + abs(A.x - D.x) + abs(A.z - D.z);

	area = (2 * side_a * side_b) + (2 * side_a * side_c) + (2 * side_b * side_c);
	volume = side_a * side_b * side_c;
}

Circle::Circle(Point _O, double R)
{
	type = 3;
	O = _O; 
	radius = R;

	area = M_PI * R * R;
	volume = 0;
}

Cylinder::Cylinder(Point _O, double R, double H)
{
	type = 4;
	O = _O;
	radius = R;
	height = H;

	area = M_PI * R * R + 2 * R * height;
	volume = M_PI * R * R * height;
}