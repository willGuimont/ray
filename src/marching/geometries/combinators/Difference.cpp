#include "Difference.h"

Difference::Difference(std::shared_ptr<Geometry> shape, std::shared_ptr<Geometry> sub)
	: shape(std::move(shape)), sub(std::move(sub))
{}

float Difference::distance_from(const ofVec3f& point) const
{
	return std::max(shape->distance_from(point), -sub->distance_from(point));
}
