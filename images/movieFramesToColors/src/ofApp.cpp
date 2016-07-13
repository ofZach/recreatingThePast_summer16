#include "ofApp.h"

//bool bSortFunction( frame & a, frame & b){
//    return a.avgBrightness < b.avgBrightness;
//}

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
        
        float avgRed = 0;
        float avgBlue = 0;
        float avgGreen = 0;
        
        for (int j = 0; j < img.getWidth(); j++){
            for (int k = 0; k < img.getHeight(); k++){
                
                ofColor pix = img.getColor(j,k);
                avgRed += pix.r;
                avgGreen += pix.g;
                avgBlue += pix.b;
                
                
                //avgBrightness += img.getColor(j,k).getBrightness();
            }
        }
        
        avgRed /= (float)(img.getWidth() * img.getHeight());
        avgGreen /= (float)(img.getWidth() * img.getHeight());
        avgBlue /= (float)(img.getWidth() * img.getHeight());
        
        ofColor avg(avgRed, avgGreen, avgBlue);
        avgs.push_back(avg);
//        avgBrightness /= (float)(img.getWidth() * img.getHeight());
//        
        //cout << i << " " << avgBrightness << endl;
        
//        frame f;
//        f.fileName = dir.getPath(i);
//        f.avgBrightness = avgBrightness;
//        
//        frames.push_back(f);
        
    }
    
    
    //ofSort(frames, bSortFunction);
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    //int frameNum = ofMap(x, 0, ofGetWidth(), 0, frames.size());
    //img.load(frames[ofGetFrameNum() % frames.size()].fileName);
    
}

//--------------------------------------------------------------
void ofApp::draw(){

    //img.draw(0,0);
    
    ofClear(255,255,255);
    
    int dim = sqrt(avgs.size());
    
    for (int i = 0; i < avgs.size(); i++){
        ofSetColor(avgs[i]);
        ofDrawRectangle(50 + (i %dim) *10, 50 + (i/dim) * 10, 10, 10);
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
