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
        SoilState* soilState ;
        vector<Truck> trucks ;
    public :
        CropField(string cropType, int totalCapacity);
        ~CropField();

        int getTotalCapacity() const override ;
        string getCropType() const override ;
        int getCurrentStoredCrops()const override ;
        void storeCrops(int amount) override ;
        void removeCrops(int amount) override ;
        int harvest() override ;
        
        string getSoilStateName() const  ;
        void rain();
        void setSoilState(SoilState* soilState);
        
};

#endif