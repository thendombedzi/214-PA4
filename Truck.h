#ifndef TRUCK_H
#define TRUCK_H

#include "FarmUnit.h";

class Truck{
    public :
        virtual void update(FarmUnit farmUnit) = 0 ;
        virtual void startEngine() = 0;
};


#endif