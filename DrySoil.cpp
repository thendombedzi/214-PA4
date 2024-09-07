#include "DrySoil.h"
#include "FruitFulSoil.h"
#include "CropField.h"
#include <iostream>
using namespace std;

string DrySoil::getName() const
{
   return "Dry";
}

int DrySoil::harvestCrops(CropField* cropfield) {
    int harvestedAmount = cropfield->getCurrentStoredCrops() * 1;
    cropfield->removeCrops(cropfield->getCurrentStoredCrops());
    return harvestedAmount;
}

void DrySoil::rain(CropField* cropfield) {
   cout << "Rain has made the soil Fruitful!" <<endl;
    cropfield->setSoilState(new FruitFulSoil());
}