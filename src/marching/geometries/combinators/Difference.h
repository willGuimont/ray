#ifndef DIFFERENCE_H
#define DIFFERENCE_H

#include <memory>

#include "ofVec3f.h"

#include "Geometry.h"

class Difference : public Geometry
{
public:
	Difference(std::shared_ptr<Geometry> shape, std::shared_ptr<Geometry> sub);
	float distance_from(const ofVec3f& point) const override;
private:
	std::shared_ptr<Geometry> shape;
	std::shared_ptr<Geometry> sub;
};


#endif //DIFFERENCE_H
