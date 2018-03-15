//
//  ScatteringReflectionSource.h
//  Scattering_Algorithmus2
//
//  Created by Simon Zimmermann on 26.05.17.
//  Copyright © 2017 Simon Zimmermann. All rights reserved.
//

#ifndef ScatteringReflectionSource_h
#define ScatteringReflectionSource_h

class ScatteringReflectionSource {
private:
    float dist;
    float elev;
    float azim;
    float gain;
    float delOut;
    
public:
    float getDist();
    float getElev();
    float getAzim();
    float getGain();
    float getDelOut();
    
    ScatteringReflectionSource(float, float, float, float, float); //constructor
    ScatteringReflectionSource();
    ~ScatteringReflectionSource(); //destructor
};

#endif /* ScatteringReflectionSource_h */
