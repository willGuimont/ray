#ifndef SMOOTH_H
#define SMOOTH_H

#include <vector>
#include <memory>
#include <math.h>

#include "../../../../../../../libs/openFrameworks/math/ofVec3f.h"

#include "../Geometry.h"

class Smooth : public Geometry
{
public:
	Smooth(float k, std::shared_ptr<Geometry> a, std::shared_ptr<Geometry> b);

	float distance_from(const ofVec3f& point) const override;
private:
	float k;
	std::shared_ptr<Geometry> a;
	std::shared_ptr<Geometry> b;
};


#endif //SMOOTH_H
