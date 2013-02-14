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
    totalFrames = 0;
    ofEnableAlphaBlending();
    cars.play();
    water.play();
    water.setVolume(0);

//    }
}

//--------------------------------------------------------------
void testApp::update(){
    cars.update();
//    if(cars.isFrameNew()) {
//        totalFrames++;
//        for (int y = 0; y < cars.getHeight(); y++) {
//            for (int x = 0; x < cars.getWidth(); x++) {
//                ofFloatColor currentAvg, newAvg, currentPixel; 
//                currentAvg = accumulation.getColor(x, y);
//                currentPixel = cars.getPixelsRef().getColor(x, y);
//                newAvg = (currentAvg*totalFrames + currentPixel)/totalFrames + 1;
//                accumulation.setColor(x, y, newAvg);
//            }
//        }
//        accumulation.reloadTexture();    
    water.update();
//    }
}
//--------------------------------------------------------------
void testApp::draw(){
    cars.draw(0, 0, 480, 270);
    water.draw(0, 270, 480, 270);
    cars.draw(480, 540, -480, 270);
//    if (cars.getIsMovieDone()) {
//        water.play();
//        water.setVolume(0);
//    }
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