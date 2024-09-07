#include "FruitFulSoil.h"
#include <iostream>
using namespace std;


string FruitFulSoil::getName() const
{
    return "Fruitful";
}

int FruitFulSoil::harvestCrops(CropField* cropfield) {
    int harvestedAmount = cropfield->getCurrentStoredCrops()*3;
  cropfield->removeCrops(cropfield->getCurrentStoredCrops());
  return harvestedAmount;
}

void FruitFulSoil::rain(CropField* cropfield) {
    std::cout << "More rain has Flooded the soil!" << std::endl;
    cropfield->setSoilState(new FloodedSoil());
}