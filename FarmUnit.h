#ifndef FARMUNIT_H
#define FARMUNIT_H

#include <string>
#include "Truck.h"
#include <iostream>
using namespace std ;

class FarmUnit{
     public :
     virtual void addExtraBarn(int additionalCapacity) = 0 ;
          virtual void applyFertilizer() = 0 ;
          virtual void increaseProduction() = 0 ; // Enhance crop Yield applying fertilizer  
          virtual int getTotalCapacity() const = 0 ;
          virtual int getLeftOverCapacity() const = 0 ;
        virtual string getCropType() const = 0 ; 
        virtual int getCurrentStoredCrops() const = 0 ;
        virtual void storeCrops(int amount) = 0 ;
        virtual void removeCrops(int amount) = 0 ;
        virtual int harvest() = 0 ;
        virtual void addObserver(Truck truck) = 0;
        virtual void removeObserver(Truck truck) = 0;
        virtual void notifyObservers() = 0;
        virtual void buyTruck(Truck truck) = 0;
        virtual void sellTruck(Truck truck)= 0;
        virtual string getSoilStateName() const = 0;
        virtual ~FarmUnit() = default ;

         virtual void addUnit(FarmUnit* unit) {};
    virtual void removeUnit(FarmUnit* unit) {};
} ;

#endif