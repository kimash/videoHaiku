#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
//    if(!water.loadMovie("converted/waterZurich.mov") && !cars.loadMovie("converted/cars.mov")){
//        ofLogError("Videos failed to load!");
//    }
//    else{
        cars.loadMovie("converted/cars.mov");
        water.loadMovie("converted/waterZurich.mov");
        cars.setLoopState(OF_LOOP_NONE);
        water.setLoopState(OF_LOOP_NONE);
        cars.play();
        //    }
}

//--------------------------------------------------------------
void testApp::update(){
    cars.update();
    water.update();
}

//--------------------------------------------------------------
void testApp::draw(){
    cars.draw(0, 0, 1280, 720);
    if (cars.getIsMovieDone()) {
        water.play();
        water.setVolume(0);
        water.draw(0, 0);
    }
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}