#ifndef FLOODEDSOIL_H
#define FLOODEDSOIL_H

#include "SoilState.h"
#include <string> // Include string header

// Forward declare CropField
class CropField;

class FloodedSoil : public SoilState {
public:
    void rain(CropField* crop) override; // Ensure CropField is forward declared
    std::string getName() const override;    // Use std::string
    int harvestCrops(CropField* crop) override;
};

#endif // FLOODEDSOIL_H
