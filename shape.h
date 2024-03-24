#pragma once
#include<string>
#include "point.h"

class Shape
{
public:
	static const int line = 0;
	static const int sqr = 1;
	static const int cube = 2;
	static const int circle = 3;
	static const int cylinder = 4;
	Shape() = default;
	Shape(int _type, Point _A, Point _B, Point _C, Point _D, Point _E, Point _F, Point _G, Point _H);
	Shape(int _type, Point _O, double R, double H);
	int getType() { return type; }

	int type;
	Point A, B, C, D, E, F, G, H, O;
	double volume;
	double square;
	double height;
	double radius;
};