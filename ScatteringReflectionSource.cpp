//
//  ScatteringReflectionSource.cpp
//  Scattering_Algorithmus2
//
//  Created by Simon Zimmermann on 06.06.17.
//  Copyright © 2017 Simon Zimmermann. All rights reserved.
//

#include <stdio.h>
#include "ScatteringReflectionSource.h"

ScatteringReflectionSource::ScatteringReflectionSource(float di, float el, float az, float g, float del): dist(di), elev(el), azim(az), gain(g),delOut(del) {
}
ScatteringReflectionSource::ScatteringReflectionSource() {
}

ScatteringReflectionSource::~ScatteringReflectionSource() {
}

float ScatteringReflectionSource::getDist() {
    return dist;
}

float ScatteringReflectionSource::getElev() {
    return elev;
}

float ScatteringReflectionSource::getAzim() {
    return azim;
}

float ScatteringReflectionSource::getGain() {
    return gain;
}

float ScatteringReflectionSource::getDelOut() {
    return delOut;
}
