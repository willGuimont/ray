#include "ofApp.h"

ofApp::ofApp()
	: camera(WINDOW_WIDTH, WINDOW_HEIGHT, ofColor::black)
{
	std::shared_ptr<Geometry> sphere = std::make_shared<Translation>(ofVec3f(-0.5, 4, 0), std::make_shared<Sphere>(1.5));
	std::shared_ptr<Geometry> box = std::make_shared<Translation>(ofVec3f(0.5, 4, 0), std::make_shared<Box>(ofVec3f(1, 1, 1)));
//	std::vector<std::shared_ptr<Geometry>> geometries = {sphere, box};
	geometry = std::make_shared<Smooth>(0.75, sphere, box);
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
