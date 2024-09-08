#ifndef SOILSTATE_H
#define SOILSTATE_H


#include <string>
#include <iostream>
#include "CropField.h"
using namespace std ;

class CropField ;

class SoilState{
    public :
    virtual ~SoilState() = default;
    virtual void rain(CropField* crop) = 0 ;
    virtual string getName() const= 0 ;
    virtual int harvestCrops(CropField* crop) = 0 ;
};

#endif