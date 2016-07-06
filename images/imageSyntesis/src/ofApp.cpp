#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    img.allocate(500, 500, OF_IMAGE_GRAYSCALE);
    
    for (int i = 0; i < 500; i++){
        for (int j = 0; j < 500; j++){
            
            img.getPixels().setColor(i,j, ofColor(0));
            
        }
    }
    
    img.update();
    
    
}

//--------------------------------------------------------------
void ofApp::update(){

    for (int i = 0; i < 500; i++){
        for (int j = 0; j < 500; j++){
            
            int gray = (int)(i*j * 0.01) % 255;
            img.getPixels().setColor(i,j, ofColor(gray));
            
//            float dist = ofDist(mouseX, mouseY, i, j);
//            if (dist < 200){
//                
//                img.getPixels().setColor(i,j, ofColor(ofMap(dist, 0, 200, 255, 0)));
//            } else {
//                 img.getPixels().setColor(i,j, ofColor(0));
//            }
            
//            float dist = ofDist(mouseX, mouseY, i, j);
//            if (dist < 100){
//                int color= img.getPixels().getColor(i, j).getBrightness();
//                img.getPixels().setColor(i,j, ofColor(color + 8));
//            }
            
        
            
        }
    }
    
    img.update();
    
}

//--------------------------------------------------------------
void ofApp::draw(){

    img.draw(0,0);
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
