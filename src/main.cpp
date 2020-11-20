#include "ofMain.h"
#include "ofApp.h"

int main()
{
	ofSetupOpenGL(ofApp::WINDOW_WIDTH, ofApp::WINDOW_HEIGHT, OF_WINDOW);
	ofRunApp(new ofApp());
}
