#ifndef FRUITFULSOIL_H
#define FRUITFULSOIL_H

#include "SoilState.h"
#include "FloodedSoil.h"
#include <string> // Include string header

// Forward declare CropFielda
class CropField;

class FruitFulSoil : public SoilState {
public:
    void rain(CropField* crop) override;   // Ensure CropField is forward declared
    std::string getName() const override; // Use std::string
    int harvestCrops(CropField* crop) override;
};

#endif // FRUITFULSOIL_H
