#ifndef EXTRABARNDECORATOR_H
#define EXTRABARNDECORATOR_H

#include "FieldDecorator.h"
#include <iostream>
using namespace std ;

class ExtraBarnDecorator : public FieldDecorator{
   private :
        int additionalCapacity ;
    public :
        int getTotalCapacity() override ;
};
#endif