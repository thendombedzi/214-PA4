#ifndef TRUCK_H
#define TRUCK_H

#include <iostream>

// Forward declaration of FarmUnit class
class FarmUnit;

class Truck{
    public :
        virtual void update(FarmUnit* farmUnit) = 0 ;
        virtual void startEngine() = 0;
        virtual ~Truck() = default ;
};

#endif