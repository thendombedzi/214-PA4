#ifndef FARMUNIT_H
#define FARMUNIT_H

#include <string>
#include "Truck.h"
#include <iostream>
using namespace std ;

class FarmUnit{
     public :
        virtual int getTotalCapacity() = 0 ;
        virtual string getCropType() = 0 ;
        virtual string getSoilStateName() = 0 ; 
        virtual int getCurrentStoredCrops() = 0 ;
        virtual void storeCrops(int amount) = 0 ;
        virtual void removeCrops(int amount) = 0 ;
        virtual int harvest() = 0 ;
        virtual void addObserver(Truck truck) = 0;
        virtual void removeObserver(Truck truck) = 0;
        virtual void notifyObservers() = 0;
        virtual void buyTruck(Truck truck) = 0;
        virtual void sellTruck(Truck truck)= 0;
} ;

#endif