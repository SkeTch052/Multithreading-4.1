#pragma once
#include<string>
#include "point.h"

class Shape
{
private:
	static const int line = 0;
	static const int sqr = 1;
	static const int cube = 2;
	static const int circle = 3;
	static const int cylinder = 4;
protected:
	int type;
	double height = 0;
	double radius = 0;
	double area = 0;
	double volume = 0;
public:
	Shape() = default;

	Point A, B, C, D, E, F, G, H, O;

	int getType() { return type; }
	double getHeight() { return height;  }
	double getRadius() { return radius; }
	double getArea() { return area; }
	double getVolume() { return volume; }

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

class Cylinder : public Shape {
	Cylinder(Point _O, double R, double H);
};