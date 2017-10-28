#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    // Set up our grabber.
    grabber.setup(640, 480);
    pixels.allocate(640, 480, OF_PIXELS_RGB);
    pixels.setColor(ofColor::black);

}

//--------------------------------------------------------------
void ofApp::update(){
    
    grabber.update();
    
    if (grabber.isFrameNew()) {
        
        for (int x = 0; x < grabber.getWidth(); x++) {
            for (int y = 0; y < grabber.getHeight(); y++) {
                
                ofColor color = grabber.getPixels().getColor(x, y);
                
                ofColor colorToUse = color;
                
                
            }
        }
        
        
        
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    
    
    grabber.draw(0, 0);

}

