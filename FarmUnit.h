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
     virtual void addExtraBarn(int additionalCapacity) {};
     virtual void applyFertilizer() {} ;
     virtual void increaseProduction() {} ; // Enhance crop Yield applying fertilizer  
     virtual int getTotalCapacity() const = 0 ;
     virtual int getLeftOverCapacity() const {return 0;} ;
        virtual int getCurrentStoredCrops() const=0 ;
        virtual void storeCrops(int amount)=0 ;
        virtual void removeCrops(int amount)=0;
        virtual int harvest() {return 0;} ;
        virtual void buyTruck(Truck* truck) {};
        virtual void sellTruck(Truck* truck) {};
        virtual void callTruck() {};
        virtual void startEngine() {} ;
        virtual string getSoilStateName() const {return "";};
        virtual ~FarmUnit(){
          for (Truck* truck : trucks) {
            delete truck;
            }
          }
        virtual void setSoilState(SoilState* state) {};
        virtual SoilState* getSoilState() {return nullptr;};

         virtual void addUnit(FarmUnit* unit) {};
    virtual void removeUnit(FarmUnit* unit) {};
    virtual std::string getUnitDetails() const {return "";};
    
} ;

#endif