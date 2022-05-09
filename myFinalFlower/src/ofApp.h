#pragma once

#include "ofMain.h"
#include "ofxGui.h"

class ofApp : public ofBaseApp{

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
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
    int cnt;
        
        float posX;
        float posY;
        
        float r;
        float g;
        float b;
        
        float firstChangeTime;
        float secondChangeTime;
        float thirdChangeTime;
        
        float radius;
        ofColor firstBgColor;
        ofColor secondBgColor;
        ofColor sunColor;
        ofColor drawBgColor;
        

        ofPolyline myLine;
            ofPolyline myCircle2;
            ofPolyline myLine2;
            ofPolyline myTriangle2;
        
        ofPoint p;
        
    ofxPanel gui;
    ofParameter <int> uiSpeed;
    
    
    
};
