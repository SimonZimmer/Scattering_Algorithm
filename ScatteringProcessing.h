//
//  ScatteringProcessing.h
//  Scattering_Algorithmus2
//
//  Created by Simon Zimmermann on 24.05.17.
//  Copyright © 2017 Simon Zimmermann. All rights reserved.
//

#ifndef ScatteringProcessing_h
#define ScatteringProcessing_h

#include "ScatteringReflectionSource.h"
#include <vector>
#include <array>
#include <cmath>

class ScatteringProcessing : public ScatteringReflectionSource {
private:
    
public:
    std::vector<ScatteringReflectionSource> gridMethod(float dist, float elev, float azim, float delIn, float gainIn, float intens, std::vector <ScatteringReflectionSource>& listOfRefl, short quantity);
    
    std::vector<ScatteringReflectionSource> wanderingMethod(float dist, float elev, float azim, float delIn, float gainIn, float intens, std::vector <ScatteringReflectionSource>& listOfRefl, short quantity);
    
    ScatteringProcessing(float dist, float elev, float azim, float delIn, float gainIn,  float intens, std::vector <ScatteringReflectionSource>& listOfRefl, short quantity); //constructor
    ~ScatteringProcessing(); //destructor
};

#endif /* ScatteringProcessing_h */
