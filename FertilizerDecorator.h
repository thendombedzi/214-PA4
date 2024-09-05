#ifndef FIELDECORATOR_H
#define FIELDDECORATOR_H

#include "FieldDecorator.h"
#include <iostream>
using namespace std ;

class FertilizerDecorator : public FieldDecorator{
    void applyFertilizer();
    int harvest();
};

#endif 