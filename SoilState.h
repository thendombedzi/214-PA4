#ifndef SOILSTATE_H
#define SOILSTATE_H


#include <string>
#include <iostream>
using namespace std ;

class SoilState{
    public :
    virtual ~SoilState() = default;
    virtual void rain(CropField* crop) = 0 ;
    virtual string getName() const= 0 ;
    virtual void harvestCrops(CropField* crop) = 0 ;
};

#endif