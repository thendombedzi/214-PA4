#ifndef FIELDECORATOR_H
#define FIELDDECORATOR_H

#include "FarmUnit.h"
#include <iostream>
using namespace std ;

class FieldDecorator : FarmUnit{
    protected :
        FarmUnit* decoratedField ; // wrap around
    public :
        FieldDecorator(FarmUnit* decoratedField);
        int getTotalCapacity() const ;
        int getCurrentStoredCrops() const;
        void storeCrops(int amount) ;
        void removeCrops(int amount) ;
        int harvest() ;
};

#endif 