#include "FruitFulSoil.h"
#include <iostream>
using namespace std;


string FruitFulSoil::getName() const
{
    return "Fruitful";
}

int FruitFulSoil::harvestCrops(CropField* cropfield) {
    int harvestedAmount = cropfield->getCurrentStoredCrops()*3;
    cout << "Harvested " << harvestedAmount << " crops from Fruitful soil." <<endl;
    cropfield->removeCrops(cropfield->getCurrentStoredCrops());
}

void FruitFulSoil::rain(CropField* cropfield) {
    std::cout << "More rain has Flooded the soil!" << std::endl;
    cropfield->setSoilState(new FloodedSoil());
}