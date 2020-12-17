#include "Rotation.h"

Rotation::Rotation(const ofQuaternion& rotation, const std::shared_ptr<Geometry>& geometry)
	: rotation(rotation), geometry(geometry)
{}

float Rotation::distance_from(const ofVec3f& point) const
{
	const auto p = rotation.inverse() * point;
	return geometry->distance_from(p);
}
