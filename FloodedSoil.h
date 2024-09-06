#ifndef FLOODEDSOIL_H
#define FLOODEDSOIL_H

#include "SoilState.h"
#include "FloodedSoil.h"

class FloodedSoil : public SoilState{
    public :
        void rain(CropField* cropfield) ;
        string getName() const override;
        int harvestCrops(CropField* cropfield);
};
#endif