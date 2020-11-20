#ifndef SPHERE_H
#define SPHERE_H

#include "Geometry.h"
#include "ofVec3f.h"

class Sphere : public Geometry
{
public:
	Sphere(ofVec3f position, float radius);

	float distance_from(const ofVec3f& point) const override;

private:
	ofVec3f position;
	float radius;
};


#endif //SPHERE_H
