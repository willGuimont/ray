#include "ofApp.h"

ofApp::ofApp()
	: camera(WINDOW_WIDTH, WINDOW_HEIGHT, ofColor::black)
{
	std::shared_ptr<Geometry> sphere1 = std::make_shared<Translation>(
		ofVec3f(-1, 4, -1),
		std::make_shared<Sphere>(1));
	std::shared_ptr<Geometry> sphere2 = std::make_shared<Translation>(
		ofVec3f(1, 4, -1),
		std::make_shared<Sphere>(1));
	std::shared_ptr<Geometry> sphere3 = std::make_shared<Translation>(
		ofVec3f(1, 4, 1),
		std::make_shared<Sphere>(1));
	std::shared_ptr<Geometry> sphere4 = std::make_shared<Translation>(
		ofVec3f(-1, 4, 1),
		std::make_shared<Sphere>(1));

	const auto k = 1.f;
	geometry = std::make_shared<Smooth>(k, sphere1, sphere2);
	geometry = std::make_shared<Smooth>(k, geometry, sphere3);
	geometry = std::make_shared<Smooth>(k, geometry, sphere4);
}

void ofApp::setup()
{
	render = camera.render(geometry);
}

void ofApp::update()
{
}

void ofApp::draw()
{
	ofBackground(0);  // Clear the screen with a black color
	render.draw(0, 0);
}

void ofApp::keyPressed(int key)
{
}

void ofApp::keyReleased(int key)
{
}

void ofApp::mouseMoved(int x, int y)
{
}

void ofApp::mouseDragged(int x, int y, int button)
{
}

void ofApp::mousePressed(int x, int y, int button)
{
}

void ofApp::mouseReleased(int x, int y, int button)
{
}

void ofApp::mouseEntered(int x, int y)
{
}

void ofApp::mouseExited(int x, int y)
{
}

void ofApp::windowResized(int w, int h)
{
}

void ofApp::gotMessage(ofMessage msg)
{
}
void ofApp::dragEvent(ofDragInfo dragInfo)
{
}
