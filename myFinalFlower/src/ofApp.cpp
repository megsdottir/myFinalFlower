#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    gui.setup();
    gui.add(uiSpeed.set("Life", 1, 1, 30));
    
      posX = - 100;
      posY = (ofGetHeight()/4)*3;
      r = 242;
      g = 232;
      b = 158;
    
      firstBgColor = ofColor(0,45,113);
      secondBgColor = ofColor(222,165,164);
      ofBackground(firstBgColor);
      drawBgColor = firstBgColor;
      radius = 40;

      firstChangeTime = 1;
      secondChangeTime = 12;
      thirdChangeTime = 19;
      
      cnt = 2;
  
  
}

//--------------------------------------------------------------
void ofApp::update(){
    float animationTime = ofGetElapsedTimef();

        if (animationTime < firstChangeTime) {
            drawBgColor = firstBgColor;
                    
        } else if (animationTime < secondChangeTime) {
            float timeSinceFirst = animationTime - firstChangeTime;
            float percentageToSecond = timeSinceFirst / (secondChangeTime - firstChangeTime);
            drawBgColor = firstBgColor.getLerped(secondBgColor, percentageToSecond);
            
        } else if (animationTime < thirdChangeTime) {
            float timeSinceSecond = animationTime - secondChangeTime;
            float percentageToThird = timeSinceSecond / (thirdChangeTime - secondChangeTime);
            drawBgColor = secondBgColor.getLerped(firstBgColor, percentageToThird);
        }

}

//--------------------------------------------------------------
void ofApp::draw(){

       ofBackground(drawBgColor);
       

       if (posX >= ofGetWidth() + 100) {
           cnt++;
           posX = -100;
           posY = (ofGetHeight()/4)*3;
           firstChangeTime += ofGetElapsedTimef()/cnt;
           secondChangeTime += ofGetElapsedTimef()/cnt;
           thirdChangeTime += ofGetElapsedTimef()/cnt;
           r = 242;
           g = 232;
           b = 158;
       }
    
       if (posX >= (ofGetWidth()/2)) {
           posY += 1.2;
           ofSetColor(r, g -= 0.01, b -=0.01);
       }
       else{
           posY -= 1.2;
           ofSetColor(r, g -= 0.15, b -=0.15);
       }
       posX += 1.5;
       ofDrawCircle(posX, posY, radius);
       ofSetColor(119, 198, 110);
       ofDrawRectangle(0, (ofGetHeight()/4)*3, ofGetWidth(), ofGetHeight() - (ofGetHeight()/4)*3);
       
   //flower 1
    //stem color
       ofSetColor(190,229,176);
       ofPushMatrix();
           ofTranslate(20, 177, 0);
       ofPushMatrix();
       ofTranslate(4,80);
       ofCircle(300,200,30);
       ofPopMatrix();
       ofSetLineWidth(5);
           ofPushMatrix();
       ofTranslate(4,200);
       ofLine(300,100,300,200);
       ofPopMatrix();
       ofTranslate(285, 300);
       ofTriangle(20,60,20,20,50,90);
       ofPopMatrix();
       
    //petal colors
       ofSetColor(251,204,209);
       ofPushMatrix();
       ofTranslate(320, 450, -10);
       float angle = ofGetElapsedTimef()*uiSpeed*15;
       ofRotate(angle);
       
       int petals = 8;
       for (int i=0; i<petals; i++) {
           ofRotate(360.0/petals);
           
           ofPoint p1 (0,40);
           ofPoint p2 (60,0);
           ofTriangle (p1, -p1, -p2);
       }
       ofPopMatrix();
       
       ofSetColor(188,175,207);
       ofPushMatrix();
       ofTranslate(22,250);
       ofCircle(300,200,30);
       ofPopMatrix();
       


    //flower 2
    //stem color
       ofSetColor(180,211,178);
       ofPushMatrix();
           ofTranslate(200, 177, 0);
       ofCircle(300,100,40);
       ofSetLineWidth(7);
       ofLine(300,100,300,400);
       ofTriangle(300,270,300,300,220,220);
       ofTriangle(300,270,300,300,385,220);
       ofPopMatrix();
       
       ofPushMatrix();
       ofTranslate(200,130,0);
       ofSetColor(100,150,10);
       ofTriangle(300,270,300,300,200,220);
       ofTriangle(300,270,300,300,400,220);
       ofPopMatrix();

    //petal colors
       ofSetColor(251,187,98);
       ofPushMatrix();
       ofTranslate(500, 270, 0);
       float angle1 = ofGetElapsedTimef()*uiSpeed*30;
       ofRotate(angle1);
       
       int petals1 = 15;
       for (int i=0; i<petals1; i++) {
           ofRotate(360.0/petals1);
           
           ofPoint p1 (0,40);
           ofPoint p2 (80,0);
           ofTriangle (p1, -p1, -p2);
       }
       ofPopMatrix();
       
       ofSetColor(248,241,174);
       ofPushMatrix();
       ofTranslate(500, 270, 0);
       float angle2 = ofGetElapsedTimef()*uiSpeed*15;
       ofRotate(angle2);
       
       int petals2 = 15;
       for (int i=0; i<petals1; i++) {
           ofRotate(360.0/petals1);
           
           ofPoint p1 (0,30);
           ofPoint p2 (70,0);
           ofTriangle (p1, -p1, -p2);
       }
       ofPopMatrix();
       
       ofSetColor(251,191,119);
       ofPushMatrix();
       ofTranslate(22,250);
       ofCircle(477,20,40);
       ofPopMatrix();
           
       
       
   //flower 3
       ofSetColor(80,90,10);
       ofPushMatrix();
           ofTranslate(200, 277, 0);
       ofCircle(530,60,30);
       ofSetLineWidth(7);
       ofPopMatrix();

       ofPushMatrix();
       ofTranslate(390,276);
       ofLine(300,100,300,300);
       ofPopMatrix();

       ofPushMatrix();
       ofTranslate(666.5,320);
       ofLine(20,60,50,30);
       ofPopMatrix();
       
       ofSetColor(50,50);
       ofPushMatrix();
       ofTranslate(740, 330, 0);
       float angle4 = ofGetElapsedTimef()*uiSpeed*10;
       ofRotate(angle4);
       
       int petals4 = 10;
       for (int i=0; i<petals4; i++) {
           ofRotate(360.0/petals4);
           
           ofPoint p1 (0,55);
           ofPoint p2 (65,5);
           ofTriangle (p1, -p1, -p2);
       }
       ofPopMatrix();

       ofSetColor(100,100,0);
       ofPushMatrix();
       ofTranslate(740, 330, 0);
       float angle3 = ofGetElapsedTimef()*uiSpeed*8;
       ofRotate(angle3);
       
       int petals3 = 10;
       for (int i=0; i<petals3; i++) {
           ofRotate(360.0/petals3);
           
           ofPoint p1 (0,45);
           ofPoint p2 (55,5);
           ofTriangle (p1, -p1, -p2);
       }
       ofPopMatrix();

       ofSetColor(300,300,300);
       ofPushMatrix();
       ofTranslate(263,311);
       ofCircle(477,20,30);
       ofPopMatrix();

       ofPushMatrix();
       ofTranslate(387,190,0);
       ofSetColor(80,90,10);
       ofTriangle(300,270,300,300,240,220);
       ofPopMatrix();
       
       ofPushMatrix();
       ofTranslate(400,390,0);
       ofSetColor(10,90,10);
       ofTriangle(300,280,310,300,380,220);
       ofPopMatrix();
       
       ofPushMatrix();
       ofTranslate(340,390,0);
       ofSetColor(10,90,10);
       ofTriangle(300,285,310,300,390,220);
       ofPopMatrix();

    
    gui.draw();
    
    
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
