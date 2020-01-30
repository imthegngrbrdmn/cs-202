#include "vector3f.h"
#include <iostream>
Vector3f::Vector3f(float ex, float wye, float zee)
{
	x = ex;
	y = wye;
	z = zee;
}
Vector3f::~Vector3f()
{
	std::cout << "Deleted <" << x << "," << y << "," << z << ">\n";
}