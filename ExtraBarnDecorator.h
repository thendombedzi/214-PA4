#ifndef EXTRABARNDECORATOR_H
#define EXTRABARNDECORATOR_H

#include "FieldDecorator.h"
#include <iostream>
using namespace std ;

class ExtraBarnDecorator : public FieldDecorator{
   private :
        int extraCapacity ;
    public :
        ExtraBarnDecorator(FarmUnit* decoratedField, int extraCapacity);
        int harvest() override ;
        int getTotalCapacity() const override ;
        int getLeftOverCapacity() const override;
};
#endif