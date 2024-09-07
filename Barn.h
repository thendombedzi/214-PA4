#ifndef BARN_H
#define BARN_H

#include "FarmUnit.h"

#include <string>
#include <iostream>
using namespace std ;

class Barn : public FarmUnit{
    private :
        int BarnCapacity ;
        int storedAmount ;
        string BarnCropType ;
    public :
        Barn(int capacity);
        int getTotalCapacity() const override ;
        int getCurrentStoredCrops() const override ;
        void storeCrops(int amount) override ;
        void removeCrops(int amount) override ;
}; 

#endif