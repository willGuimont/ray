#ifndef GEOMETRY_H
#define GEOMETRY_H

#include "ofVec3f.h"

class Geometry
{
public:
	virtual float distance_from(const ofVec3f& point) const = 0;
};


#endif //GEOMETRY_H
