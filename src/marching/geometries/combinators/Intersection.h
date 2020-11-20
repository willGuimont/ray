#ifndef INTERSECTION_H
#define INTERSECTION_H

#include <vector>
#include <memory>
#include <algorithm>

#include "ofVec3f.h"

#include "../Geometry.h"

class Intersection : public Geometry
{
public:
	Intersection(std::vector<std::shared_ptr<Geometry>> geometries);

	float distance_from(const ofVec3f& point) const override;

private:
	std::vector<std::shared_ptr<Geometry>> geometries;
};


#endif //INTERSECTION_H
