//
//  main.cpp
//  Scattering_Algorithmus2
//
//  Created by Simon Zimmermann on 24.05.17.
//  Copyright © 2017 Simon Zimmermann. All rights reserved.

//  in earAPI: UpdateFilterCore
//  Bei Implementierung: Gain-Faktor für spekulare Reflektion in earAPI verarbeiten!
//  ScatteringReflectionSource Instanz in struct von earAPI Reflection aufnehmen
//  Korrektur Zeile 4602 muss auch für supportReflections angewendet werden: neue Reflections in earAPI aus support reflections generieren 

#include <iostream>
#include "ScatteringProcessing.h"
#include <numeric>

using namespace std;

int main() {
    vector <ScatteringReflectionSource> y;
    ScatteringProcessing scattertest = {0,0,0,0,0,0,y,0};       // dist,elev,azim,delIn,intens,vector,scale(number of reflections)
                                                                // scale 1 = 8 ; 2 = 16 ; 3 = 24 ; 4 = 32
    for (float a = 0; a <= 100; a++) {
        y.resize(33);
        cout << "\nscatteringLevel = " << a/100 << endl;
        
        scattertest.wanderingMethod(3,5,60,20.0,1,a/100,y,2);            // wanderingMethod = 4 refl. wandering
        vector<ScatteringReflectionSource>::iterator it;              // gridMethod = up to 32 static reflections on grid
    
        for (it = y.begin(); it != y.end(); ++it) {
        cout << "distance=" << it->getDist() << " elevation=" <<it->getElev() << " azimuth=" << it->getAzim() << " gain=" << it->getGain() << " delay=" << it->getDelOut() << endl;
        }
    }
    cout << "\nsize of vector = " << y.size() << endl;
    
    return 0;
}
