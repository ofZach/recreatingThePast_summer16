#include "ofApp.h"

bool bSortFunction( frame & a, frame & b){
    return a.avgBrightness < b.avgBrightness;
}

//--------------------------------------------------------------
void ofApp::setup(){

    
    ofDirectory dir;
    dir.sort();
    dir.listDir("frames");
    
    for (int i = 0; i< dir.size(); i++){
        cout << dir.getPath(i) << endl;
        
        
        ofImage img;
        img.setUseTexture(false);
        img.load(dir.getPath(i));
        float avgBrightness = 0;
        for (int j = 0; j < img.getWidth(); j++){
            for (int k = 0; k < img.getHeight(); k++){
                avgBrightness += img.getColor(j,k).getBrightness();
            }
        }
        avgBrightness /= (float)(img.getWidth() * img.getHeight());
        
        //cout << i << " " << avgBrightness << endl;
        
        frame f;
        f.fileName = dir.getPath(i);
        f.avgBrightness = avgBrightness;
        
        frames.push_back(f);
        
    }
    
    
    ofSort(frames, bSortFunction);
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    //int frameNum = ofMap(x, 0, ofGetWidth(), 0, frames.size());
    img.load(frames[ofGetFrameNum() % frames.size()].fileName);
    
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
