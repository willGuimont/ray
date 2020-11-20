#include "Union.h"

#include <utility>
Union::Union(std::vector<std::shared_ptr<Geometry>> geometries)
	: geometries(std::move(geometries))
{
}

float Union::distance_from(const ofVec3f& point) const
{
	std::vector<float> distances;
	std::transform(std::begin(geometries), std::end(geometries), std::back_inserter(distances), [&point](auto g){ return g->distance_from(point); });
	return *std::min_element(std::begin(distances), std::end(distances));
}
