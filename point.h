#pragma once

struct Point {
	int x = 0, y = 0, z = 0;
	Point(int _x, int _y, int _z) : x(_x), y(_y), z(_z) { }
	Point(int _x, int _y) : x(_x), y(_y) { }
};