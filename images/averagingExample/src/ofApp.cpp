#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

//    myImage.load("yearbook1971.png");
//    
//    offScreen.allocate(myImage.getWidth()/5, myImage.getHeight()/6);
//    
////    int counter = 0;
////    for (int i = 0; i < 5; i++){
////        for (int j = 0; j < 6; j++){
////            
////            offScreen.begin();
////            ofClear(255,255,255);
////            myImage.draw(-i * myImage.getWidth()/5, -j * myImage.getHeight()/6);
////            offScreen.end();
////            
////            ofPixels tempPixels;
////            offScreen.readToPixels(tempPixels);
////            ofSaveImage(tempPixels, ofToString(counter) + ".png" );
////            
////            counter++;
////        }
////    }
    
    
    
    ofDirectory dir;
    dir.listDir("faces");
    
    for (int i = 0; i < dir.size(); i++){
        ofImage temp;
        temp.load(dir.getPath(i));
        imgs.push_back(temp);
    }
    
    mixResult.allocate(imgs[0].getWidth(), imgs[0].getHeight(), OF_IMAGE_COLOR);
    
    int w = imgs[0].getWidth();
    int h = imgs[0].getHeight();
    
    for (int i = 0; i < w; i++){
        for (int j = 0; j < h; j++){
            float rAvg = 0;
            float bAvg = 0;
            float gAvg = 0;
            for (int k =0; k < imgs.size(); k++){
                rAvg += imgs[k].getColor(i, j).r;
                gAvg += imgs[k].getColor(i, j).g;
                bAvg += imgs[k].getColor(i, j).b;
            }
            rAvg /= imgs.size();
            gAvg /= imgs.size();
            bAvg /= imgs.size();
            mixResult.setColor(i, j, ofColor(rAvg, gAvg, bAvg));
            
        }
    }
    
    mixResult.update();
    
    
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    //myImage.draw(0,0);
    
    //imgs[ofGetFrameNum() % imgs.size()].draw(0,0);
    
    mixResult.draw(0,0);
    
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
