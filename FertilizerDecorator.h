#ifndef FERTILIZERDECORATOR_H
#define FERTILIZERDECORATOR_H

#include "FieldDecorator.h"
#include "FarmUnit.h"
#include "DrySoil.h"
#include "FruitFulSoil.h"
#include <iostream>
using namespace std ;

class FertilizerDecorator : public FieldDecorator{
    public :
    FertilizerDecorator(FarmUnit* decoratedField) : FieldDecorator(decoratedField){};
    void increaseProduction() override;
    int harvest()override ;
    int getLeftOverCapacity() const override ;
    ~FertilizerDecorator();
    // void increaseProduction() override ;
    // int harvest() override ;
};

#endif 