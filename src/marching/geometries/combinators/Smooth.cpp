#include "Smooth.h"

#include <utility>
Smooth::Smooth(float k, std::shared_ptr<Geometry> a, std::shared_ptr<Geometry> b)
	: k(k), a(std::move(a)), b(std::move(b))
{
}
float Smooth::distance_from(const ofVec3f& point) const
{
	const auto a_dist = a->distance_from(point);
	const auto b_dist = b->distance_from(point);
	const auto h = std::max(k - std::abs(a_dist - b_dist), 0.f) / k;
	return std::min(a_dist, b_dist) - std::pow(h, 3) * k / 6;
}
