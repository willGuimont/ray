#include "Sphere.h"

Sphere::Sphere(ofVec3f position, float radius)
	: position(position), radius(radius)
{
}

float Sphere::distance_from(const ofVec3f& point) const
{
	return (position - point).length() - radius;
}
