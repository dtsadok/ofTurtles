#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup()
{
    camWidth = 640;
    camHeight = 480;
	
	//inputImage.loadImage("triangle1.png");
	//camWidth = inputImage.width;
	//camHeight = inputImage.height;
	
	textureImage.loadImage("triangle1.png");
	
	nPixels = camWidth * camHeight;
	
	//ofSetupScreen();
	ofSetWindowShape(camWidth, camHeight);
		
    //vidGrabber.setVerbose(true);
    //vidGrabber.initGrabber(camWidth,camHeight);
	
	//glEnable(GL_DEPTH_TEST);
	ofEnableAlphaBlending();
	ofEnableSmoothing();

	//ofSetSphereResolution(1000);
	
	ofBackgroundHex(0x333333, 1.0);
}

//--------------------------------------------------------------
void testApp::update()
{
	//AR Code here ;-)
}

//--------------------------------------------------------------
void testApp::draw()
{
	//translucent sphere
	//#28e3fd
	ofSetColor(40, 227, 253, 0.20f*255);
	
	ofTranslate(ofGetWidth()/2, ofGetHeight()/2, -20);

	ofPushMatrix();
	//ofEnableBlendMode(ofBlendMode b);
	ofSphere(0, 0, 0, 75);
	ofPopMatrix();
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){
}

//--------------------------------------------------------------
void testApp::keyReleased(int key){
	
}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){
	
}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){
	
}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){
	
}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){
	
}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){
	
}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){
	
}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 
	
}
