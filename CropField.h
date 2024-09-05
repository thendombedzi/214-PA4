#ifndef CROPFIELD_H
#define CROPFIELD_H

#include "FarmUnit.h"
#include "Truck.h"
#include "SoilState.h"

#include <string>
#include <vector>
#include <iostream>
using namespace std ;

class CropField : public FarmUnit {
    private :
        string cropType ;
        int cropCapacity ;
        int cropAmount ;
        SoilState soilState ;
        vector<Truck> trucks ;
    public :
        int getTotalCapacity() override ;
        string getCropType() override ;
        string getSoilStateName() override ;
        int getCurrentStoredCrops() override ;
        void storeCrops(int amount) override ;
        void removeCrops(int amount) override ;
        void harvest() override ;
        void rain();
        void setSoilState(SoilState soilState);
};

#endif