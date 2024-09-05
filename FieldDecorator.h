#ifndef FIELDECORATOR_H
#define FIELDDECORATOR_H

#include "FarmUnit.h"
#include <iostream>
using namespace std ;

class FieldDecorator : FarmUnit{
    protected :
        FarmUnit* decoratedField ; // wrap around
    public :
        FieldDecorator(FarmUnit decoratedField);
        int getTotalCapacity() = 0;
        int getCurrentStoredCrops() = 0;
        void storeCrops(int amount) = 0;
        void removeCrops(int amount) = 0;
        int harvest() = 0;
};

#endif 