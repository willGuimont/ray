#include "Sphere.h"

Sphere::Sphere(float radius)
	: radius(radius)
{
}

float Sphere::distance_from(const ofVec3f& point) const
{
	return point.length() - radius;
}
