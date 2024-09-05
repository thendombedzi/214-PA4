#ifndef SOILSTATE_H
#define SOILSTATE_H


#include <string>
#include <iostream>
using namespace std ;

class SoilState{
    public :
    virtual void rain() = 0 ;
    virtual string getName() = 0 ;
    virtual void harvestCrops() = 0 ;
};

#endif