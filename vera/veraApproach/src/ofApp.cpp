#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    ofBackground(0,0,0);
    
    ofSetColor(255,255,255);
    
    ofSeedRandom(mouseX*10000);
    // initial condition, check, iterate
    for (int i = 0; i < 40; i++){
        for (int j = 0; j < 40; j++){
            
            float randomAngle = ofRandom(0, TWO_PI);
            if (i == 0 && j == 0){
                cout << randomAngle << endl;
                
            }
            ofPoint origin;
            origin.set(100 + i * 20,
                   100 + j*20);
            
            float amountRandom = 4;
            origin += ofPoint( ofRandom(-amountRandom,amountRandom),
                              ofRandom(-amountRandom,amountRandom));
            
            ofPoint direction = ofPoint(cos(randomAngle), sin(randomAngle));
            
            ofPoint ptA = origin + 20 * direction;
            ofPoint ptB = origin - 20 * direction;
            
            //if (ofRandom(0,1) < ofMap(mouseX, 0, ofGetWidth(), 0, 1)){
            
            if (ofNoise(i/10.0, j/10.0) > ofMap(100, 0, ofGetWidth(), 0, 1)){
                ofDrawLine(ptA, ptB);
            }
            
            //}
            
            //ofLine(pt, pt + ofPoint(20,0));
            
            
            ///ofDrawLine(100 + 20*i,100+j*20,
            //           100 + 20*i+10,100+j*20);
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
