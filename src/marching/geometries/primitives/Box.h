#ifndef BOX_H
#define BOX_H

#include "../Geometry.h"
#include "ofVec3f.h"

class Box : public Geometry
{
public:
	explicit Box(const ofVec3f& size);

	float distance_from(const ofVec3f& point) const override;

private:
	ofVec3f size;
};


#endif //BOX_H
