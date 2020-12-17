#ifndef UNION_H
#define UNION_H

#include <vector>
#include <memory>
#include <algorithm>

#include "ofVec3f.h"

#include "Geometry.h"

class Union : public Geometry
{
public:
	explicit Union(std::vector<std::shared_ptr<Geometry>> geometries);
	float distance_from(const ofVec3f& point) const override;
private:
	std::vector<std::shared_ptr<Geometry>> geometries;
};


#endif //UNION_H
