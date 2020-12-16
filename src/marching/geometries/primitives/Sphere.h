#ifndef SPHERE_H
#define SPHERE_H

#include "Geometry.h"
#include "ofVec3f.h"

class Sphere : public Geometry
{
public:
	explicit Sphere(float radius);

	float distance_from(const ofVec3f& point) const override;

private:
	float radius;
};


#endif //SPHERE_H
