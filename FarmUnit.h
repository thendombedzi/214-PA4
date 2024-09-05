#ifndef FARMUNIT_H
#define FARMUNIT_H

#include <string>
#include "Truck.h"
using namespace std ;

class FarmUnit{
     public :
        virtual int getTotalCapacity() = 0 ;
        virtual string getCropType() = 0 ;
        virtual string getSoilStateName() = 0 ; 
        virtual int getCurrentStoredCrops() = 0 ;
        virtual void storeCrops(int amount) = 0 ;
        virtual void removeCrops(int amount) = 0 ;
        virtual void harvest() ;
        virtual void addObserver(Truck truck);
        virtual void removeObserver(Truck truck);
        virtual void notifyObservers();
        virtual void buyTruck(Truck truck);
        virtual void sellTruck(Truck truck);
} ;

#endif