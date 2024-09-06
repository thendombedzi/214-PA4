#ifndef FRUITFULSOIL_H
#define FRUITFULSOIL_H

#include "CropField.h"
#include "SoilState.h"

class FruitFulSoil : public SoilState{
    public :
        void rain(CropField* crop) ;
        string getName() const override;
        void harvestCrops(CropField* crop);
};

#endif