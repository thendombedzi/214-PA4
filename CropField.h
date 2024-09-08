#ifndef CROPFIELD_H
#define CROPFIELD_H

#include "FarmUnit.h"
#include "Truck.h"
#include "SoilState.h"
#include "FruitFulSoil.h"

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
    public :
        CropField(string cropType, int totalCapacity, SoilState* state);
        ~CropField();

        int getTotalCapacity() const override ;
        string getCropType() const override ;
        int getCurrentStoredCrops()const override ;
        void storeCrops(int amount) override ;
        void removeCrops(int amount) override ;
        int harvest() override ;
        int getLeftOverCapacity() const override  ;
        void addExtraBarn(int additionalCapacity) override ;
        void applyFertilizer() override ;
        void increaseProduction() ;
        string getSoilStateName() const override ;
        void rain();
        void setSoilState(SoilState* soilState);
        void buyTruck(Truck* truck) override ;
        void sellTruck(Truck* truck) override ;
        void callTruck()override ;
        void startEngine() override ;
        SoilState* getSoilState() override ;

        
};

#endif