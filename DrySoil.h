#ifndef DRYSOIL_H
#define DRYSOIL_H

#include "SoilState.h"
#include "CropField.h"

class DrySoil : public SoilState{
    public :
        void rain(CropField* cropfield) override ;
        string getName()const override;
        int harvestCrops(CropField* cropfield)override;
};

#endif