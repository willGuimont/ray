#ifndef ROTATION_H
#define ROTATION_H

#include <memory>

#include "ofVec3f.h"
#include "ofQuaternion.h"

#include "Geometry.h"

class Rotation : public Geometry
{
public:
	Rotation(const ofQuaternion& rotation, const std::shared_ptr<Geometry>& geometry);
	float distance_from(const ofVec3f& point) const override;
private:
	ofQuaternion rotation{};
	std::shared_ptr<Geometry> geometry{};
};


#endif //ROTATION_H
