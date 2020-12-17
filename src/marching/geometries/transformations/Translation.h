#ifndef TRANSLATION_H
#define TRANSLATION_H

#include <memory>

#include "ofVec3f.h"

#include "Geometry.h"

class Translation : public Geometry
{
public:
	explicit Translation(ofVec3f translation, std::shared_ptr<Geometry> geometry);
	float distance_from(const ofVec3f& point) const override;
private:
	ofVec3f translation;
	std::shared_ptr<Geometry> geometry;
};


#endif //TRANSLATION_H
