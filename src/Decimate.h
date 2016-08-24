//
//  Decimate.h
//  maxiPlayer
//
//  Created by Joshua Batty on 23/08/2016.
//
//

#pragma once 

#include "ofMain.h"


class Decimate{
    
public:
    
    // Constructor -- Name of the class.. gets called automatically when defined
    Decimate();
    
    // Destructor ... gets called automatically when program ends.
    ~Decimate();
    
    // Methods of the class
    double process(double signal);

    // Getters and Setters on those variables
    int getBits();
    float getRate();
    
    void setRate(float value);
    void setBits(int value);
    
private:

    // local variables to the class
    
    int bits;
    float rate;
    
    double y, cnt;
};