#ifndef FIELDECORATOR_H
#define FIELDDECORATOR_H

#include "FieldDecorator.h"
#include "FarmUnit.h"
#include "DrySoil.h"
#include <iostream>
using namespace std ;

class FertilizerDecorator : public FieldDecorator{
    public :
    FertilizerDecorator(FarmUnit* decoratedField) : FieldDecorator(decoratedField){};
    void increaseProduction() override;
    int harvest()override ;
    int getLeftOverCapacity() const override ;
    // void increaseProduction() override ;
    // int harvest() override ;
};

#endif 