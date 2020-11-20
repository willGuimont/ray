#include "Camera.h"

Camera::Camera(int view_width, int view_height, ofColor background_color)
	: view_width(view_width), view_height(view_height), background_color(background_color)
{
}

ofImage Camera::render(const std::shared_ptr<const Geometry>& geometry) const
{
	const auto position = ofVec3f();
	const auto forward = ofVec3f(0, 1, 0);
	const auto left = ofVec3f(1, 0, 0);
	const auto up = ofVec3f(0, 0, 1);

	ofImage image;
	image.allocate(view_width, view_height, ofImageType::OF_IMAGE_COLOR_ALPHA);

	for (int x = 0; x < view_width; ++x)
	{
		const auto u = (float)x / (float)view_width * 2 - 1;
		for (int y = 0; y < view_height; ++y)
		{
			const auto v = (float)y / (float)view_height * 2 - 1;
			const auto point_image_plane = position + forward + left * u - up * v;
			const auto direction = (point_image_plane - position).normalize();

			auto color = ray_march(position, direction, geometry);
			image.setColor(x, y, color);
		}
	}
	image.update();
	return image;
}

ofColor
Camera::ray_march(const ofVec3f& position,
	const ofVec3f& direction,
	const std::shared_ptr<const Geometry>& geometry) const
{
	auto distance_traveled = 0.f;

	for (auto i = 0; i < MAX_NUMBER_STEPS; ++i)
	{
		auto current_position = position + distance_traveled * direction;
		auto distance_to_closest = geometry->distance_from(current_position);

		if (distance_to_closest < MINIMUM_HIT_DISTANCE)
		{
			float c = (float)i / MAX_NUMBER_STEPS * 255;
			return { c, c, c };
		} else if (distance_traveled > MAXIMUM_TRACE_DISTANCE)
		{
			break;
		} else
		{
			distance_traveled += distance_to_closest;
		}
	}

	return background_color;
}
