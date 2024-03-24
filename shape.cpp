#define _USE_MATH_DEFINES
#include"shape.h"
#include<cmath>
Shape::Shape(int _type, Point _A, Point _B, Point _C, Point _D, Point _E, Point _F, Point _G, Point _H)
{
	type = _type;
	// заполн¤ем координаты фигуры
	switch (type)
	{
	case line:
		A = _A; B = _B;
		break;
	case sqr:
		A = _A; B = _B;
		C = _C; D = _D;
		break;
	case cube:
		A = _A; B = _B;
		C = _C; D = _D;
		E = _E; F = _F;
		G = _G; H = _H;
		break;
	default:
		break;
	}

	// стороны фигуры
	int a = abs(A.x - B.x) + abs(A.y - B.y);
	int b = abs(A.x - D.x) + abs(A.y - D.y);
	int c = abs(A.x - E.x) + abs(A.x - D.x) + abs(A.z - D.z);
	// считаем площадь фигуры
	switch (type)
	{
	case line:
		square = 0;
		break;
	case sqr:
		square = a * b;
		break;
	case cube:
		square = 2 * a * b + 2 * a * c + 2 * b * c;
		break;
	default:
		break;
	}

	// считаем объем фигуры
	switch (type)
	{
	case line:
		volume = 0;
		break;
	case sqr:
		volume = 0;
		break;
	case cube:
		volume = a * b * c;
		break;
	default:
		break;
	}

}

Shape::Shape(int _type, Point _O, double R, double H)
{
	// заполн¤ем координаты фигуры
	switch (type)
	{
	case circle:
		O = _O;
		radius = R;
		break;
	case cylinder:
		O = _O;
		radius = R;
		height = H;
		break;
	default:
		break;
	}

	// считаем площадь фигуры
	switch (type)
	{
	case circle:
		square = M_PI * R * R;
		break;
	case cylinder:
		square = M_PI * R * R + 2 * R * height;
		break;
	default:
		break;
	}

	// считаем объем фигуры
	switch (type)
	{
	case circle:
		volume = 0;
		break;
	case cylinder:
		volume = M_PI * R * R * height;
		break;
	default:
		break;
	}

}