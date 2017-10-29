#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0, 0, 0);
    // Set up our grabber.
    grabber.setup(640, 480);
    pixels.allocate(640, 480, OF_PIXELS_RGB);
    pixels.setColor(ofColor::black);

}

//--------------------------------------------------------------
void ofApp::update(){
    
    grabber.update();
    
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    int offset = 15;
    
    ofPixels pixels = grabber.getPixels();
    
        
        for (int x = 0; x < grabber.getWidth(); x += offset) {
            for (int y = 0; y < grabber.getHeight(); y += offset) {
                
                
                float brightness = pixels.getColor(x, y).getBrightness();
                
                float brightnessRadius = ofMap(brightness, 0, 255, 0, 50);
                
                //                ofColor color = grabber.getPixels().getColor(x, y);
                //                ofColor colorToUse = color;
                
                ofSetColor(255, 255, 255);
                ofDrawCircle(x, y, brightnessRadius);
                
                
            }
        }
        
        
        
    

}

