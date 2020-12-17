#include "Translation.h"

Translation::Translation(ofVec3f translation, std::shared_ptr<Geometry> geometry)
	: translation(translation), geometry(std::move(geometry))
{}

float Translation::distance_from(const ofVec3f& point) const
{
	const auto p = point - translation;
	return geometry->distance_from(p);
}
