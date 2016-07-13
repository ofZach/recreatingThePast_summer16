#include "ofApp.h"


// boolean predicate

bool bSort( ofColor a, ofColor b){
    return a.getBrightness() < b.getBrightness();
}


//--------------------------------------------------------------
void ofApp::setup(){

    danImg.load("dan.jpg");
 
    
    danRemix.allocate(danImg.getWidth(), danImg.getHeight(), OF_IMAGE_COLOR);
    
    int w = danImg.getWidth();
    int h = danImg.getHeight();
    
    for (int i = 0; i < w; i++){
        
        vector < ofColor > lineOfPixels;
        
        for (int j = 0; j < h; j++){
            
            ofColor orig = danImg.getColor(i,j);
            lineOfPixels.push_back(orig);
            
        
        }
        
        ofSort(lineOfPixels, bSort);
        
        
        for (int j = 0; j < h; j++){
            danRemix.setColor(i,j,  lineOfPixels[j]);
        }
        
        
        
    }
    danRemix.update();
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    
    danImg.draw(0,0);
    danRemix.draw(danImg.getWidth(), 0);
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
