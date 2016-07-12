#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    img.load("dan.png");
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackground(0);
    //img.draw(0,0);
    
//    for (int i = 0; i < img.getWidth(); i+=10){
//        for (int j = 0; j < img.getHeight(); j+=10){
//            int brightness = img.getColor(i,j).getBrightness();
//            ofCircle(i, j, ofMap(brightness, 0, 255, 3, 3.5));
//        }
//    }
    
    ofSetRectMode(OF_RECTMODE_CENTER);
    
    for (int i = 0; i < img.getWidth(); i+=10){
        for (int j = 0; j < img.getHeight(); j+=10){
            int brightness = img.getColor(i,j).getBrightness();
            //ofCircle(i, j, ofMap(brightness, 0, 255, 3, 3.5));
    
            ofPushMatrix();
            
            ofTranslate(i, j);
            ofRotateZ( ofMap(brightness, 0, 255, 0, mouseX));
            ofDrawRectangle(0, 0, 10, 3);
            
            ofPopMatrix();
        }
    }
    
    
    
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
