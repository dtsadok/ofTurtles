#pragma once

#include "ofMain.h"
//#include "ofxOpenCv.h"
#include "ofxNetwork.h"
#include "ofxXmlSettings.h"
#include "ofx3DModelLoader.h"
//#include "ofxAssimpModelLoader.h"

//#def _DEBUG 1
#define	NUM_PARTICLES 1
//500000


class testApp : public ofBaseApp {
	
public:
	void setup();
	void update();
	void draw();
	
	void keyPressed(int key);
	void keyReleased(int key);
	void mouseMoved(int x, int y );
	void mouseDragged(int x, int y, int button);
	void mousePressed(int x, int y, int button);
	void mouseReleased(int x, int y, int button);
	void windowResized(int w, int h);
	void dragEvent(ofDragInfo dragInfo);
	void gotMessage(ofMessage msg);		
	
	//From: http://wiki.openframeworks.cc/index.php?title=Color_Tracking
	ofVideoGrabber vidGrabber;
	ofImage inputImage;
	int camWidth;
	int camHeight;
	
	int briThresh;
	int numBlobs;
	int nPixels; //only need to compute once...
	
	ofImage textureImage;  

	//for smoothing
	//vector<ofVec2f> last5Points;

	ofCamera camera;
};