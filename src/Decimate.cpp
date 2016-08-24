//
//  Decimate.cpp
//  maxiPlayer
//
//  Created by Joshua Batty on 23/08/2016.
//
//

#include "Decimate.h"




//---------------------------------------------
Decimate::Decimate(){
    bits = 16;
    rate = 0.5;
    
    y = 0.0;
    cnt = 0.0;
}

//---------------------------------------------
Decimate::~Decimate(){
}

//---------------------------------------------
int Decimate::getBits(){
    return bits;
}
float Decimate::getRate(){
    return rate;
}

//---------------------------------------------
void Decimate::setBits(int value){
    if(value > 0 && value < 16) bits = value;
}
void Decimate::setRate(float value){
    if(value > 0.0 && value < 1.0) rate = value;
}

//---------------------------------------------
double Decimate::process(double signal){

    long int m=1<<(bits-1);

    cnt+=rate;
    if (cnt>=1)
    {
        cnt-=1;
        y=(long int)(signal*m)/(double)m;
    }
    return y;
}
