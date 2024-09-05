#ifndef FLOODEDSOIL_H
#define FLOODEDSOIL_H

#include "SoilState.h"

class FloodedSoil : public SoilState{
    public :
        void rain(CropField* cropfield) ;
        string getName() const override;
        void harvestCrops(CropField* cropfield);
};
#endif