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
    water.play();
    water.setVolume(0);
    dest.allocate(water.getWidth(), water.getHeight(), water.getPixelsRef().getImageType());

//    }
}

//--------------------------------------------------------------
void testApp::update(){
    cars.update();
    water.update();
    if (water.isFrameNew()) {
        for (int y = 0; y < water.getHeight(); y++) {
            for (int x = 0; x < water.getWidth(); x++) {
                ofColor carsFrame = cars.getPixelsRef().getColor(x, y);
                     ofColor waterFrame = water.getPixelsRef().getColor(x, y);
                        dest.getPixelsRef().setColor(x, y, carsFrame*waterFrame);
            }
        }
        dest.reloadTexture();
    }
    
}
//--------------------------------------------------------------
void testApp::draw(){
    cars.draw(0, 0, 480, 270);
    water.draw(0, 270, 480, 270);
    dest.draw(0, 540, 480, 270);
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