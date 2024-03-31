#pragma once
#include<string>
#include "point.h"

class Shape
{
protected:
	static const int line = 0;
	static const int sqr = 1;
	static const int cube = 2;
	static const int circle = 3;
	static const int cylinder = 4;

	int type;
	double height = 0;
	double radius = 0;
	double area = 0;
	double volume = 0;

	Point A, B, C, D, E, F, G, H, O;
public:
	Shape() = default;

	int getType() const { return type; }
	double getHeight() const { return height;  }
	double getRadius() const { return radius; }
	double getArea() const { return area; }
	double getVolume() const { return volume; }

	Point getA() const { return A; }
	Point getB() const { return B; }
	Point getC() const { return C; }
	Point getD() const { return D; }
	Point getE() const { return E; }
	Point getF() const { return F; }
	Point getG() const { return G; }
	Point getH() const { return H; }
	Point getO() const { return O; }

	Shape& shift(int m, int n, int k);
	Shape& scaleX(int a);
	Shape& scaleY(int d);
	Shape& scaleZ(int e);
	Shape& scale(int s);

	virtual ~Shape() {}
};

class Line : public Shape {
public:
	Line(Point _A, Point _B);
};

class Sqr : public Shape {
public:
	Sqr(Point _A, Point _B, Point _C, Point _D);
};

class Cube : public Shape {
public:
	Cube(Point _A, Point _B, Point _C, Point _D, Point _E, Point _F, Point _G, Point _H);
};

class Circle : public Shape {
public:
	Circle(Point _O, double R);
};

class Cylinder : public Shape{
public:
	Cylinder(Point _O, double R, double H);
};