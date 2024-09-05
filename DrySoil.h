#ifndef DRYSOIL_H
#define DRYSOIL_H

#include "SoilState.h"

class DrySoil : public SoilState{
    public :
        void rain(CropField* cropfield) override ;
        string getName()const override;
        void harvestCrops(CropField* cropfield)override;
};

#endif