#pragma once

struct Point {
	int x = 0, y = 0, z = 0;
	Point() { }
	Point(int _x, int _y) : x(_x), y(_y) { }
	Point(int _x, int _y, int _z) : x(_x), y(_y), z(_z) { }
};