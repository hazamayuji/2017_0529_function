#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(60);
    ofBackground(0,0,0);
    

}

//--------------------------------------------------------------
void ofApp::update(){

    cir_y += 10;
    
    if(cir_y > ofGetHeight()){
        cir_y = 0;
    }
}

//--------------------------------------------------------------
void ofApp::draw(){

    triangle_red();
    
    rect_green();
    
    circle_blue();
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

//--------------------------------------------------------------


void ofApp::triangle_red(){
    ofSetColor(255,0,0);
    ofDrawTriangle(100,100, 100,200, 200,150);
}


void ofApp::rect_green(){
    ofSetColor(0,255,0);
    ofDrawRectangle(ofGetWidth()/2, ofGetHeight()/2, 100, 100);
}

void ofApp::circle_blue(){
    ofSetColor(0,0,255);
    ofDrawCircle(200,cir_y, radius);
}






