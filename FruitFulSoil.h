#ifndef FRUITFULSOIL_H
#define FRUITFULSOIL_H

#include "CropField.h"
#include "SoilState.h"
#include "FloodedSoil.h"

class FruitFulSoil : public SoilState{
    public :
        void rain(CropField* crop) ;
        string getName() const override;
        int harvestCrops(CropField* crop);
};

#endif