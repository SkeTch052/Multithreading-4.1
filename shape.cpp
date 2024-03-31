#define _USE_MATH_DEFINES
#include"shape.h"
#include<cmath>

Shape& Shape::shift(int m, int n, int k)
{
	switch (this->getType())
	{
	case Shape::line:
		this->A.x += m; this->A.y += n;
		this->B.x += m; this->B.y += n;
		break;
	case Shape::sqr:
		this->A.x += m; this->A.y += n;
		this->B.x += m; this->B.y += n;
		this->C.x += m; this->C.y += n;
		this->D.x += m; this->D.y += n;
		break;
	case Shape::cube:
		this->A.x += m; this->A.y += n; this->A.z += k;
		this->B.x += m; this->B.y += n; this->B.z += k;
		this->C.x += m; this->C.y += n; this->C.z += k;
		this->D.x += m; this->D.y += n; this->D.z += k;
		this->E.x += m; this->E.y += n; this->E.z += k;
		this->F.x += m; this->F.y += n; this->F.z += k;
		this->G.x += m; this->G.y += n; this->G.z += k;
		this->H.x += m; this->H.y += n; this->H.z += k;
		break;
	}
	return *this;
}

Shape& Shape::scaleX(int a)
{
	switch (this->getType())
	{
	case Shape::line:
		this->A.x *= a;
		this->B.x *= a;
		break;
	case Shape::sqr:
		this->A.x *= a;
		this->B.x *= a;
		this->C.x *= a;
		this->D.x *= a;
		break;
	case Shape::cube:
		this->A.x *= a;
		this->B.x *= a;
		this->C.x *= a;
		this->D.x *= a;
		this->E.x *= a;
		this->F.x *= a;
		this->G.x *= a;
		this->H.x *= a;
		break;
	}
	return *this;
}

Shape& Shape::scaleY(int d)
{
	switch (this->getType())
	{
	case Shape::line:
		this->A.y *= d;
		this->B.y *= d;
		break;
	case Shape::sqr:
		this->A.y *= d;
		this->B.y *= d;
		this->C.y *= d;
		this->D.y *= d;
		break;
	case Shape::cube:
		this->A.y *= d;
		this->B.y *= d;
		this->C.y *= d;
		this->D.y *= d;
		this->E.y *= d;
		this->F.y *= d;
		this->G.y *= d;
		this->H.y *= d;
		break;
	}
	return *this;
}

Shape& Shape::scaleZ(int e)
{
	switch (this->getType())
	{
	case Shape::line:
		this->A.z *= e;
		this->B.z *= e;
		break;
	case Shape::sqr:
		this->A.z *= e;
		this->B.z *= e;
		this->C.z *= e;
		this->D.z *= e;
		break;
	case Shape::cube:
		this->A.z *= e;
		this->B.z *= e;
		this->C.z *= e;
		this->D.z *= e;
		this->E.z *= e;
		this->F.z *= e;
		this->G.z *= e;
		this->H.z *= e;
		break;
	}
	return *this;
}

Shape& Shape::scale(int s)
{
	switch (this->getType())
	{
	case Shape::line:
		this->A /= s;
		this->B /= s;
		break;
	case Shape::sqr:
		this->A /= s;
		this->B /= s;
		this->C /= s;
		this->D /= s;
		break;
	case Shape::cube:
		this->A /= s;
		this->B /= s;
		this->C /= s;
		this->D /= s;
		this->E /= s;
		this->F /= s;
		this->G /= s;
		this->H /= s;
		break;
	}

	return *this;
}

Line::Line(Point _A, Point _B) 
{ 
	type = Shape::line;
	A = _A; B = _B;

	area = 0;
	volume = 0;
}

Sqr::Sqr(Point _A, Point _B, Point _C, Point _D)
{
	type = Shape::sqr;
	A = _A; B = _B; C = _C; D = _D;

	double side_a = abs(A.x - B.x) + abs(A.y - B.y);
	double side_b = abs(A.x - D.x) + abs(A.y - D.y);

	area = side_a * side_b;
	volume = 0;
}

Cube::Cube(Point _A, Point _B, Point _C, Point _D, Point _E, Point _F, Point _G, Point _H)
{
	type = Shape::cube;
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
	type = Shape::circle;
	O = _O; 
	radius = R;

	area = M_PI * R * R;
	volume = 0;
}

Cylinder::Cylinder(Point _O, double R, double H)
{
	type = Shape::cylinder;
	O = _O;
	radius = R;
	height = H;

	area = M_PI * R * R + 2 * R * height;
	volume = M_PI * R * R * height;
}