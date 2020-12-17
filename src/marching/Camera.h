#ifndef CAMERA_H
#define CAMERA_H

#include <memory>

#include "ofVec3f.h"
#include "ofMain.h"
#include "ofColor.h"
#include "ofImage.h"

#include "geometries/Geometry.h"

class Camera
{
public:
	Camera(int view_width, int view_height, ofColor background_color);

	ofImage render(const std::shared_ptr<const Geometry>& geometry) const;

private:
	constexpr static const int MAX_NUMBER_STEPS = 64;
	constexpr static const float EPSILON = 0.00001;
	constexpr static const float MAXIMUM_TRACE_DISTANCE = 1000;

	ofColor
	ray_march(const ofVec3f& position, const ofVec3f& direction, const std::shared_ptr<const Geometry>& geometry) const;
	static ofVec3f compute_normal(const ofVec3f& position, const std::shared_ptr<const Geometry>& geometry) ;

	const int view_width;
	const int view_height;
	const ofColor background_color;
};


#endif //CAMERA_H
