#include "Box.h"
Box::Box(const ofVec3f& size)
	: size(size)
{
}

float Box::distance_from(const ofVec3f& point) const
{
	const auto x = std::max(std::abs(point.x) - size.x, 0.f);
	const auto y = std::max(std::abs(point.y) - size.y, 0.f);
	const auto z = std::max(std::abs(point.z) - size.z, 0.f);
	return ofVec3f(x, y, z).length();
}
