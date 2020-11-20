#ifndef UNION_H
#define UNION_H

#include <vector>
#include <memory>
#include <algorithm>

#include "Geometry.h"
#include "ofVec3f.h"

class Union : public Geometry
{
public:
	Union(std::vector<std::shared_ptr<Geometry>> geometries);

	float distance_from(const ofVec3f& point) const override;

private:
	std::vector<std::shared_ptr<Geometry>> geometries;
};


#endif //UNION_H
