#include <marching/geometries/primitives/Sphere.h>
#include "ofApp.h"

ofApp::ofApp()
	: camera(WINDOW_WIDTH, WINDOW_HEIGHT, ofColor::black)
{
	std::shared_ptr<Geometry> sphere1 = std::make_shared<Sphere>(ofVec3f(1, 3, 0), 1);
	std::shared_ptr<Geometry> sphere2 = std::make_shared<Sphere>(ofVec3f(-1, 3, 0), 1);
	std::vector<std::shared_ptr<Geometry>> geometries = {sphere1, sphere2};
	geometry = std::make_shared<Smooth>(0.75, sphere1, sphere2);
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
