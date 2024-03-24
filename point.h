#pragma once

struct Point {
	double x = 0, y = 0, z = 0;
	Point() { }
	Point(double _x, double _y) : x(_x), y(_y) { }
	Point(double _x, double _y, double _z) : x(_x), y(_y), z(_z) { }
	Point operator /= (const int& val) {
		return Point{ x /= val, y /= val, z /= val };
	}
	//Point operator + (const Point& p) {
	//	return Point{ x + p.x, y + p.y, z + p.z };
	//}
};