#ifndef FLOODEDSOIL_H
#define FLOODEDSOIL_H

#include "SoilState.h"

class FloodedSoil : public SoilState{
    public :
        void rain() ;
        string getName();
        void harvestCrops();
};
#endif