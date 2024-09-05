#ifndef FRUITFULSOIL_H
#define FRUITFULSOIL_H

#include "SoilState.h"

class FruitFulSoil : public SoilState{
    public :
        void rain() ;
        string getName();
        void harvestCrops();
};

#endif