#ifndef FIELDDECORATOR_H
#define FIELDDECORATOR_H

#include "FarmUnit.h"
#include "SoilState.h"
#include <iostream>
using namespace std ;

class FieldDecorator : public FarmUnit{
    protected :
        FarmUnit* decoratedField ; // wrap around
    public :
        FieldDecorator(FarmUnit* decoratedField);
        int getTotalCapacity() const override;
        int getCurrentStoredCrops() const override ;
        void storeCrops(int amount)override ;
        void removeCrops(int amount) override;
        int harvest() ;
        void applyFertilizer() override ;
        void addExtraBarn(int additionalCapacity) override;
        void buyTruck(Truck* truck) override;
        void sellTruck(Truck* truck) override;
        void callTruck() override;
        void startEngine() override;
        void setSoilState(SoilState* state)override ;
        SoilState* getSoilState() override ;
        string getSoilStateName() const override ;
        virtual ~FieldDecorator();
        // // virtual void increaseProduction() = 0 ;
        // // virtual int harvest() = 0 ;
        // virtual int getLeftOverCapacity() = 0 ;
};

#endif 