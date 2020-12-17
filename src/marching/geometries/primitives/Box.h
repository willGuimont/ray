#ifndef BOX_H
#define BOX_H

#include "ofVec3f.h"

#include "Geometry.h"

class Box : public Geometry
{
public:
	explicit Box(const ofVec3f& size);
	float distance_from(const ofVec3f& point) const override;
private:
	ofVec3f size;
};


#endif //BOX_H
