#pragma once

#include "ofMain.h"

#include "marching/Camera.h"
#include "marching/geometries/Geometry.h"
#include "marching/geometries/combinators/Smooth.h"
#include "marching/geometries/combinators/Union.h"
#include "marching/geometries/primitives/Sphere.h"

class ofApp : public ofBaseApp
{
public:
	constexpr static const int WINDOW_WIDTH = 500;
	constexpr static const int WINDOW_HEIGHT = 500;

	ofApp();

	void setup() override;
	void update() override;
	void draw() override;

	void keyPressed(int key) override;
	void keyReleased(int key) override;
	void mouseMoved(int x, int y) override;
	void mouseDragged(int x, int y, int button) override;
	void mousePressed(int x, int y, int button) override;
	void mouseReleased(int x, int y, int button) override;
	void mouseEntered(int x, int y) override;
	void mouseExited(int x, int y) override;
	void windowResized(int w, int h) override;
	void dragEvent(ofDragInfo dragInfo) override;
	void gotMessage(ofMessage msg) override;

private:

	Camera camera;
	std::shared_ptr<Geometry> geometry;
	ofImage render;
};
