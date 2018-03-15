//
//  ScatteringProcessing.cpp
//  Scattering_Algorithmus2
//
//  Created by Simon Zimmermann on 06.06.17.
//  Copyright © 2017 Simon Zimmermann. All rights reserved.
//

#include <iostream>
#include "ScatteringProcessing.h"

using namespace std;

ScatteringProcessing::ScatteringProcessing(float dist, float elev, float azim, float delIn, float gainIn, float intens, std::vector <ScatteringReflectionSource>& listOfRefl, short quantity) {
}
 
ScatteringProcessing::~ScatteringProcessing() {
}

//grid reflections====================================================================================================================

std::vector<ScatteringReflectionSource> ScatteringProcessing::gridMethod(float dist, float elev, float azim, float delIn, float gainIn, float intens, std::vector<ScatteringReflectionSource>& listOfRefl, short quantity) {
    
    //static polarcoordinates_________________________________________________________________________________________________________
    const double plus1 = 0.25;
    const double plus2 = 0.5;
    const double plus3 = 0.75;
    
    float reflCoordSpec[3] = {dist, elev, azim};                //calculate coordinates of support reflections
    float reflCoord1[3] = {dist, elev + 5, azim - 5};
    float reflCoord2[3] = {dist, elev + 5, azim + 5};
    float reflCoord3[3] = {dist, elev - 5, azim + 5};
    float reflCoord4[3] = {dist, elev - 5, azim - 5};
    
    float reflCoord5[3] = {dist, elev, azim - 5};
    float reflCoord6[3] = {dist, elev, azim + 5};
    float reflCoord7[3] = {dist, elev - 5, azim};
    float reflCoord8[3] = {dist, elev + 5, azim};
    
    float reflCoord9[3] = {dist, elev + 10, azim - 10};
    float reflCoord10[3] = {dist, elev + 10, azim + 10};
    float reflCoord11[3] = {dist, elev - 10, azim + 10};
    float reflCoord12[3] = {dist, elev - 10, azim - 10};
    
    float reflCoord13[3] = {dist, elev, azim - 10};
    float reflCoord14[3] = {dist, elev, azim + 10};
    float reflCoord15[3] = {dist, elev - 10, azim};
    float reflCoord16[3] = {dist, elev + 10, azim};
    
    float reflCoord17[3] = {dist, elev + 15, azim - 15};
    float reflCoord18[3] = {dist, elev + 15, azim + 15};
    float reflCoord19[3] = {dist, elev - 15, azim + 15};
    float reflCoord20[3] = {dist, elev - 15, azim - 15};
    
    float reflCoord21[3] = {dist, elev, azim - 15};
    float reflCoord22[3] = {dist, elev, azim + 15};
    float reflCoord23[3] = {dist, elev - 15, azim};
    float reflCoord24[3] = {dist, elev + 15, azim};
    
    float reflCoord25[3] = {dist, elev + 20, azim - 20};
    float reflCoord26[3] = {dist, elev + 20, azim + 20};
    float reflCoord27[3] = {dist, elev - 20, azim + 20};
    float reflCoord28[3] = {dist, elev - 20, azim - 20};
    
    float reflCoord29[3] = {dist, elev, azim - 20};
    float reflCoord30[3] = {dist, elev, azim + 20};
    float reflCoord31[3] = {dist, elev - 20, azim};
    float reflCoord32[3] = {dist, elev + 20, azim};
    
    
    if (intens >= plus1 && quantity == 1) {
        reflCoord9[0] = dist;               //assign 8 more reflections if degree > 5°
        reflCoord9[1] = elev + 10;
        reflCoord9[2] = azim - 10;
        
        reflCoord10[0] = dist;
        reflCoord10[1] = elev + 10;
        reflCoord10[2] = azim + 10;
        
        reflCoord11[0] = dist;
        reflCoord11[1] = elev - 10;
        reflCoord11[2] = azim + 10;
        
        reflCoord12[0] = dist;
        reflCoord12[1] = elev - 10;
        reflCoord12[2] = azim - 10;
        
        reflCoord13[0] = dist;
        reflCoord13[1] = elev;
        reflCoord13[2] = azim - 10;
        
        reflCoord14[0] = dist;
        reflCoord14[1] = elev;
        reflCoord14[2] = azim + 10;
        
        reflCoord15[0] = dist;
        reflCoord15[1] = elev - 10;
        reflCoord15[2] = azim;
        
        reflCoord16[0] = dist;
        reflCoord16[1] = elev + 10;
        reflCoord16[2] = azim;
        
        if (intens >= plus2 && quantity == 2) {
            reflCoord17[0] = dist;          //assign 8 more reflections if degree > 10°
            reflCoord17[1] = elev + 15;
            reflCoord17[2] = azim - 15;
            
            reflCoord18[0] = dist;
            reflCoord18[1] = elev + 15;
            reflCoord18[2] = azim + 15;
            
            reflCoord19[0] = dist;
            reflCoord19[1] = elev - 15;
            reflCoord19[2] = azim + 15;
            
            reflCoord20[0] = dist;
            reflCoord20[1] = elev - 15;
            reflCoord20[2] = azim - 15;
            
            reflCoord21[0] = dist;
            reflCoord21[1] = elev;
            reflCoord21[2] = azim - 15;
            
            reflCoord22[0] = dist;
            reflCoord22[1] = elev;
            reflCoord22[2] = azim + 15;
            
            reflCoord23[0] = dist;
            reflCoord23[1] = elev - 15;
            reflCoord23[2] = azim;
            
            reflCoord24[0] = dist;
            reflCoord24[1] = elev + 15;
            reflCoord24[2] = azim;
            
            if (intens >= plus3 && quantity == 3) {
                reflCoord25[0] = dist;          //assign 8 more reflections if degree > 10°
                reflCoord25[1] = elev + 20;
                reflCoord25[2] = azim - 20;
                
                reflCoord26[0] = dist;
                reflCoord26[1] = elev + 20;
                reflCoord26[2] = azim + 20;
                
                reflCoord27[0] = dist;
                reflCoord27[1] = elev - 20;
                reflCoord27[2] = azim + 20;
                
                reflCoord28[0] = dist;
                reflCoord28[1] = elev - 20;
                reflCoord28[2] = azim - 20;
                
                reflCoord29[0] = dist;
                reflCoord29[1] = elev;
                reflCoord29[2] = azim - 20;
                
                reflCoord30[0] = dist;
                reflCoord30[1] = elev;
                reflCoord30[2] = azim + 20;
                
                reflCoord31[0] = dist;
                reflCoord31[1] = elev - 20;
                reflCoord31[2] = azim;
                
                reflCoord32[0] = dist;
                reflCoord32[1] = elev + 20;
                reflCoord32[2] = azim;
            }
        }
    }
    
    //gain___________________________________________________________________________________________________________________________
    const float specMax = 1.0;
    const float specMin = 0.2;
    float numberOfRefl = 8;
    float reflMax = ((specMax - specMin)/numberOfRefl);
    const float reflMin = 0.0;
    
    float gainSpec = specMin + ((1.0 - intens)*(specMax-specMin));
    float gainRefl1 = 0.0;
    float gainRefl2 = 0.0;
    float gainRefl3 = 0.0;
    float gainRefl4 = 0.0;
    
    gainRefl1 = reflMin + (intens * (reflMax-reflMin));
    
    if (intens >= plus1 && quantity >= 2) {
        float reflMax2 = ((specMax - specMin)/16);
        gainRefl1 = gainRefl1 * gainIn - (reflMin + ((intens - plus1) * (reflMax2 - reflMin)));
        gainRefl2 = reflMin + ((intens - plus1) * (reflMax2 - reflMin));
        
        if (intens >= plus2 && quantity >= 3) {
            float reflMax3 = ((specMax - specMin)/24);
            gainRefl1 = gainRefl1 * gainIn - ((reflMin + ((intens - plus2) * (reflMax3 - reflMin))) * 0.5);
            gainRefl2 = (gainRefl2 * gainIn) - ((reflMin + ((intens - plus2) * (reflMax3 - reflMin))) * 0.5);
            gainRefl3 = reflMin + ((intens - plus2) * (reflMax3 - reflMin));
            
            if (intens >= plus3 && quantity >= 4) {
                float reflMax4 = ((specMax - specMin)/32);
                gainRefl1 = gainRefl1 * gainIn - ((reflMin + ((intens - plus3) * (reflMax4 - reflMin))) * 0.3333);
                gainRefl2 = (gainRefl2 * gainIn) - ((reflMin + ((intens - plus3) * (reflMax4 - reflMin))) * 0.3333);
                gainRefl3 = (gainRefl3 * gainIn) - ((reflMin + ((intens - plus3) * (reflMax4 - reflMin))) * 0.3333);
                gainRefl4 = reflMin + ((intens - plus3) * (reflMax4 - reflMin));
            }
        }
    }
    
    cout << "verification = " << gainRefl1 * 8 + gainRefl2 * 8 + gainRefl3 * 8 + gainRefl4 * 8 + gainSpec<< endl;
    
    //delay__________________________________________________________________________________________________________________________
    int delMax = 1 + intens * 11000;

    float del1 = delIn + (rand() % delMax + intens * 200)/1000.0;
    float del2 = delIn + (rand() % delMax + intens * 400)/1000.0;
    float del3 = delIn + (rand() % delMax + intens * 600)/1000.0;
    float del4 = delIn + (rand() % delMax + intens * 800)/1000.0;
    float del5 = delIn + (rand() % delMax + intens * 1000)/1000.0;
    float del6 = delIn + (rand() % delMax + intens * 1200)/1000.0;
    float del7 = delIn + (rand() % delMax + intens * 1400)/1000.0;
    float del8 = delIn + (rand() % delMax + intens * 1600)/1000.0;
    float del9 = delIn + (rand() % delMax + intens * 1800)/1000.0;
    float del10 = delIn + (rand() % delMax + intens * 2000)/1000.0;
    float del11 = delIn + (rand() % delMax + intens * 2200)/1000.0;
    float del12 = delIn + (rand() % delMax + intens * 2400)/1000.0;
    float del13 = delIn + (rand() % delMax + intens * 2600)/1000.0;
    float del14 = delIn + (rand() % delMax + intens * 2800)/1000.0;
    float del15 = delIn + (rand() % delMax + intens * 3000)/1000.0;
    float del16 = delIn + (rand() % delMax + intens * 3200)/1000.0;
    float del17 = delIn + (rand() % delMax + intens * 3400)/1000.0;
    float del18 = delIn + (rand() % delMax + intens * 3600)/1000.0;
    float del19 = delIn + (rand() % delMax + intens * 3800)/1000.0;
    float del20 = delIn + (rand() % delMax + intens * 4000)/1000.0;
    float del21 = delIn + (rand() % delMax + intens * 4200)/1000.0;
    float del22 = delIn + (rand() % delMax + intens * 4400)/1000.0;
    float del23 = delIn + (rand() % delMax + intens * 4600)/1000.0;
    float del24 = delIn + (rand() % delMax + intens * 4800)/1000.0;
    float del25 = delIn + (rand() % delMax + intens * 5000)/1000.0;
    float del26 = delIn + (rand() % delMax + intens * 5200)/1000.0;
    float del27 = delIn + (rand() % delMax + intens * 5400)/1000.0;
    float del28 = delIn + (rand() % delMax + intens * 5600)/1000.0;
    float del29 = delIn + (rand() % delMax + intens * 5800)/1000.0;
    float del30 = delIn + (rand() % delMax + intens * 6000)/1000.0;
    float del31 = delIn + (rand() % delMax + intens * 6200)/1000.0;
    float del32 = delIn + (rand() % delMax + intens * 6400)/1000.0;

    
    if (intens >= plus1 && quantity >= 2) {
        
        float del9 = (rand() % delMax + 2)/1000.0;
        float del10 = (rand() % delMax + 2)/1000.0;
        float del11 = (rand() % delMax + 2)/1000.0;
        float del12 = (rand() % delMax + 2)/1000.0;
        float del13 = (rand() % delMax + 2)/1000.0;
        float del14 = (rand() % delMax + 2)/1000.0;
        float del15 = (rand() % delMax + 2)/1000.0;
        float del16 = (rand() % delMax + 2)/1000.0;

        
        if (intens >= plus2 && quantity >= 3) {
            
            float del17 = (rand() % delMax + 2)/1000.0;
            float del18 = (rand() % delMax + 2)/1000.0;
            float del19 = (rand() % delMax + 2)/1000.0;
            float del20 = (rand() % delMax + 2)/1000.0;
            float del21 = (rand() % delMax + 2)/1000.0;
            float del22 = (rand() % delMax + 2)/1000.0;
            float del23 = (rand() % delMax + 2)/1000.0;
            float del24 = (rand() % delMax + 2)/1000.0;
            
            if (intens >= plus3 && quantity >= 4) {
                
                float del25 = (rand() % delMax + 2)/1000.0;
                float del26 = (rand() % delMax + 2)/1000.0;
                float del27 = (rand() % delMax + 2)/1000.0;
                float del28 = (rand() % delMax + 2)/1000.0;
                float del29 = (rand() % delMax + 2)/1000.0;
                float del30 = (rand() % delMax + 2)/1000.0;
                float del31 = (rand() % delMax + 2)/1000.0;
                float del32 = (rand() % delMax + 2)/1000.0;
            }
        }
    }
    
    //return values__________________________________________________________________________________________________________________
    listOfRefl.erase (listOfRefl.begin(),listOfRefl.end());     //clear vector
    
    if (quantity >=1) {
        listOfRefl.push_back(ScatteringReflectionSource(reflCoordSpec[0],reflCoordSpec[1],reflCoordSpec[2],gainSpec,delIn));
        listOfRefl.push_back(ScatteringReflectionSource(reflCoord1[0],reflCoord1[1],reflCoord1[2],(gainRefl1 * gainIn),del1));
        listOfRefl.push_back(ScatteringReflectionSource(reflCoord2[0],reflCoord2[1],reflCoord2[2],(gainRefl1 * gainIn),del2));
        listOfRefl.push_back(ScatteringReflectionSource(reflCoord3[0],reflCoord3[1],reflCoord3[2],(gainRefl1 * gainIn),del3));
        listOfRefl.push_back(ScatteringReflectionSource(reflCoord4[0],reflCoord4[1],reflCoord4[2],(gainRefl1 * gainIn),del4));
        listOfRefl.push_back(ScatteringReflectionSource(reflCoord5[0],reflCoord5[1],reflCoord5[2],(gainRefl1 * gainIn),del5));
        listOfRefl.push_back(ScatteringReflectionSource(reflCoord6[0],reflCoord6[1],reflCoord6[2],(gainRefl1 * gainIn),del6));
        listOfRefl.push_back(ScatteringReflectionSource(reflCoord7[0],reflCoord7[1],reflCoord7[2],(gainRefl1 * gainIn),del7));
        listOfRefl.push_back(ScatteringReflectionSource(reflCoord8[0],reflCoord8[1],reflCoord8[2],(gainRefl1 * gainIn),del8));
    }
    
    if (intens >= plus1 && quantity >= 2) {
        listOfRefl.push_back(ScatteringReflectionSource(reflCoord9[0],reflCoord9[1],reflCoord9[2],(gainRefl2 * gainIn),del9));
        listOfRefl.push_back(ScatteringReflectionSource(reflCoord10[0],reflCoord10[1],reflCoord10[2],(gainRefl2 * gainIn),del10));
        listOfRefl.push_back(ScatteringReflectionSource(reflCoord11[0],reflCoord11[1],reflCoord11[2],(gainRefl2 * gainIn),del11));
        listOfRefl.push_back(ScatteringReflectionSource(reflCoord12[0],reflCoord12[1],reflCoord12[2],(gainRefl2 * gainIn),del12));
        listOfRefl.push_back(ScatteringReflectionSource(reflCoord13[0],reflCoord13[1],reflCoord13[2],(gainRefl2 * gainIn),del13));
        listOfRefl.push_back(ScatteringReflectionSource(reflCoord14[0],reflCoord14[1],reflCoord14[2],(gainRefl2 * gainIn),del14));
        listOfRefl.push_back(ScatteringReflectionSource(reflCoord15[0],reflCoord15[1],reflCoord15[2],(gainRefl2 * gainIn),del15));
        listOfRefl.push_back(ScatteringReflectionSource(reflCoord16[0],reflCoord16[1],reflCoord16[2],(gainRefl2 * gainIn),del16));

        if (intens >= plus2 && quantity >= 3) {
            listOfRefl.push_back(ScatteringReflectionSource(reflCoord17[0],reflCoord17[1],reflCoord17[2],(gainRefl3 * gainIn),del17));
            listOfRefl.push_back(ScatteringReflectionSource(reflCoord18[0],reflCoord18[1],reflCoord18[2],(gainRefl3 * gainIn),del18));
            listOfRefl.push_back(ScatteringReflectionSource(reflCoord19[0],reflCoord19[1],reflCoord19[2],(gainRefl3 * gainIn),del19));
            listOfRefl.push_back(ScatteringReflectionSource(reflCoord20[0],reflCoord20[1],reflCoord20[2],(gainRefl3 * gainIn),del20));
            listOfRefl.push_back(ScatteringReflectionSource(reflCoord21[0],reflCoord21[1],reflCoord21[2],(gainRefl3 * gainIn),del21));
            listOfRefl.push_back(ScatteringReflectionSource(reflCoord22[0],reflCoord22[1],reflCoord22[2],(gainRefl3 * gainIn),del22));
            listOfRefl.push_back(ScatteringReflectionSource(reflCoord23[0],reflCoord23[1],reflCoord23[2],(gainRefl3 * gainIn),del23));
            listOfRefl.push_back(ScatteringReflectionSource(reflCoord24[0],reflCoord24[1],reflCoord24[2],(gainRefl3 * gainIn),del24));
            
            if (intens >= plus3 && quantity >= 4) {
                listOfRefl.push_back(ScatteringReflectionSource(reflCoord25[0],reflCoord25[1],reflCoord25[2],(gainRefl4 * gainIn),del25));
                listOfRefl.push_back(ScatteringReflectionSource(reflCoord26[0],reflCoord26[1],reflCoord26[2],(gainRefl4 * gainIn),del26));
                listOfRefl.push_back(ScatteringReflectionSource(reflCoord27[0],reflCoord27[1],reflCoord27[2],(gainRefl4 * gainIn),del27));
                listOfRefl.push_back(ScatteringReflectionSource(reflCoord28[0],reflCoord28[1],reflCoord28[2],(gainRefl4 * gainIn),del28));
                listOfRefl.push_back(ScatteringReflectionSource(reflCoord29[0],reflCoord29[1],reflCoord29[2],(gainRefl4 * gainIn),del29));
                listOfRefl.push_back(ScatteringReflectionSource(reflCoord30[0],reflCoord30[1],reflCoord30[2],(gainRefl4 * gainIn),del30));
                listOfRefl.push_back(ScatteringReflectionSource(reflCoord31[0],reflCoord31[1],reflCoord31[2],(gainRefl4 * gainIn),del31));
                listOfRefl.push_back(ScatteringReflectionSource(reflCoord32[0],reflCoord32[1],reflCoord32[2],(gainRefl4 * gainIn),del32));
            }
        }
    }
    return listOfRefl;
}

//wandering reflections===============================================================================================================

std::vector<ScatteringReflectionSource> ScatteringProcessing::wanderingMethod(float dist, float elev, float azim, float delIn, float gainIn, float intens, std::vector<ScatteringReflectionSource>& listOfRefl, short quantity) {
    
    float intensPos = (intens * 3 * 10); //max 30° modulation
    
    //coordinates_____________________________________________________________________________________________________________________
    float reflCoordSpec[3] = {dist, elev, azim};
    float reflCoord1[3] = {dist, elev + intensPos, azim - intensPos};
    float reflCoord2[3] = {dist, elev + intensPos, azim + intensPos};
    float reflCoord3[3] = {dist, elev - intensPos, azim + intensPos};
    float reflCoord4[3] = {dist, elev - intensPos, azim - intensPos};

    //level___________________________________________________________________________________________________________________________
    const float specMax = 1.0;
    const float specMin = 0.2;
    float numberOfRefl = 4;
    float reflMax = ((specMax - specMin)/numberOfRefl);
    const float reflMin = 0.0;
    
    float GainSpec = specMin + ((1.0 - intens)*(specMax-specMin));
    float GainRefl = reflMin + (intens * (reflMax-reflMin));
    
    std::cout << "verification = " << GainRefl * 4 + GainSpec<< endl;
    
    //delay___________________________________________________________________________________________________________________________
    int delMax = 1 + intens * 11000;
    
    float del1 = delIn + (rand() % delMax + 1)/1000.0;
    float del2 = delIn + (rand() % delMax + intens * 1000)/1000.0;
    float del3 = delIn + (rand() % delMax + intens * 2000)/1000.0;
    float del4 = delIn + (rand() % delMax + intens * 4000)/1000.0;
    
  

    //return values___________________________________________________________________________________________________________________
    listOfRefl.erase (listOfRefl.begin(),listOfRefl.end());     //vector definition

    listOfRefl.push_back(ScatteringReflectionSource(reflCoordSpec[0],reflCoordSpec[1],reflCoordSpec[2],GainSpec,delIn));
    listOfRefl.push_back(ScatteringReflectionSource(reflCoord1[0],reflCoord1[1],reflCoord1[2],(GainRefl * gainIn),del1));
    listOfRefl.push_back(ScatteringReflectionSource(reflCoord2[0],reflCoord2[1],reflCoord2[2],(GainRefl * gainIn),del2));
    listOfRefl.push_back(ScatteringReflectionSource(reflCoord3[0],reflCoord3[1],reflCoord3[2],(GainRefl * gainIn),del3));
    listOfRefl.push_back(ScatteringReflectionSource(reflCoord4[0],reflCoord4[1],reflCoord4[2],(GainRefl * gainIn),del4));
    
    return listOfRefl;
}
