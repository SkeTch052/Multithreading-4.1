#include "transform.h"

transform::transform(const Shape& sh)
{
	shape = sh;
}

Shape transform::shift(int m, int n, int k)
{
	switch (shape.getType())
	{
	case 0:
		shape.A.x += m; shape.A.y += n;
		shape.B.x += m; shape.B.y += n;
		break;
	case 1:
		shape.A.x += m; shape.A.y += n;
		shape.B.x += m; shape.B.y += n;
		shape.C.x += m; shape.C.y += n;
		shape.D.x += m; shape.D.y += n;
		break;
	case 2:
		shape.A.x += m; shape.A.y += n; shape.A.z += k;
		shape.B.x += m; shape.B.y += n; shape.B.z += k;
		shape.C.x += m; shape.C.y += n; shape.C.z += k;
		shape.D.x += m; shape.D.y += n; shape.D.z += k;
		shape.E.x += m; shape.E.y += n; shape.E.z += k;
		shape.F.x += m; shape.F.y += n; shape.F.z += k;
		shape.G.x += m; shape.G.y += n; shape.G.z += k;
		shape.H.x += m; shape.H.y += n; shape.H.z += k;
		break;
	}
	return shape;
}

Shape transform::scaleX(int a)
{
	switch (shape.getType())
	{
	case 0:
		shape.A.x *= a;
		shape.B.x *= a;
		break;
	case 1:
		shape.A.x *= a;
		shape.B.x *= a;
		shape.C.x *= a;
		shape.D.x *= a;
		break;
	case 2:
		shape.A.x *= a;
		shape.B.x *= a;
		shape.C.x *= a;
		shape.D.x *= a;
		shape.E.x *= a;
		shape.F.x *= a;
		shape.G.x *= a;
		shape.H.x *= a;
		break;
	}
	return shape;
}

Shape transform::scaleY(int d)
{
	switch (shape.getType())
	{
	case 0:
		shape.A.y *= d;
		shape.B.y *= d;
		break;
	case 1:
		shape.A.y *= d;
		shape.B.y *= d;
		shape.C.y *= d;
		shape.D.y *= d;
		break;
	case 2:
		shape.A.y *= d;
		shape.B.y *= d;
		shape.C.y *= d;
		shape.D.y *= d;
		shape.E.y *= d;
		shape.F.y *= d;
		shape.G.y *= d;
		shape.H.y *= d;
		break;
	}
	return shape;
}

Shape transform::scaleZ(int e)
{
	switch (shape.getType())
	{
	case 0:
		shape.A.z *= e;
		shape.B.z *= e;
		break;
	case 1:
		shape.A.z *= e;
		shape.B.z *= e;
		shape.C.z *= e;
		shape.D.z *= e;
		break;
	case 2:
		shape.A.z *= e;
		shape.B.z *= e;
		shape.C.z *= e;
		shape.D.z *= e;
		shape.E.z *= e;
		shape.F.z *= e;
		shape.G.z *= e;
		shape.H.z *= e;
		break;
	}
	return shape;
}

Shape transform::scale(int s)
{
	switch (shape.getType())
	{
	case 0:
		shape.A /= s;
		shape.B /= s;
		break;
	case 1:
		shape.A /= s;
		shape.B /= s;
		shape.C /= s;
		shape.D /= s;
		break;
	case 2:
		shape.A /= s;
		shape.B /= s;
		shape.C /= s;
		shape.D /= s;
		shape.E /= s;
		shape.F /= s;
		shape.G /= s;
		shape.H /= s;
		break;
	}

	return shape;
}