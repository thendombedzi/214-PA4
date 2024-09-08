#ifndef FARMUNIT_H
#define FARMUNIT_H

#include <string>

#include "Truck.h"
#include <iostream>
#include <vector>
class SoilState ;
using namespace std ;

class FarmUnit{
     protected :
          vector<Truck*> trucks ;
     public :
     virtual void addExtraBarn(int additionalCapacity) = 0 ;
     virtual void applyFertilizer() = 0 ;
     virtual void increaseProduction() = 0 ; // Enhance crop Yield applying fertilizer  
     virtual int getTotalCapacity() const = 0 ;
     virtual int getLeftOverCapacity() const = 0 ;
        virtual int getCurrentStoredCrops() const = 0 ;
        virtual void storeCrops(int amount) = 0 ;
        virtual void removeCrops(int amount) = 0 ;
        virtual int harvest() = 0 ;
        virtual void buyTruck(Truck* truck) = 0;
        virtual void sellTruck(Truck* truck) = 0;
        virtual void callTruck() = 0;
        virtual void startEngine() = 0 ;
        virtual string getSoilStateName() const = 0;
        virtual ~FarmUnit(){
          for (Truck* truck : trucks) {
            delete truck;
            }
          }
        virtual void setSoilState(SoilState* state) = 0;
        virtual SoilState* getSoilState() = 0;

         virtual void addUnit(FarmUnit* unit) {};
    virtual void removeUnit(FarmUnit* unit) {};
} ;

#endif