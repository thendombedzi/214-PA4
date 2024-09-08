#ifndef TRUCK_H
#define TRUCK_H

#include "FarmUnit.h"
#include <iostream>

class FarmUnit ;

class Truck{
    public :
        virtual void update(FarmUnit* farmUnit) = 0 ;
        virtual void startEngine() = 0;
        virtual ~Truck() = default ;
};


#endif