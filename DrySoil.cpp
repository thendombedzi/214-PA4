#include "DrySoil.h"
#include "FruitFulSoil.h"
#include "CropField.h"
#include <iostream>
using namespace std;

string DrySoil::getName() const
{
   return "Dry";
}

void DrySoil::harvestCrops(CropField* cropfield) {
    int harvestedAmount = cropfield->getCurrentStoredCrops() * 1;
    cout << "Harvested " << harvestedAmount << " crops from Dry soil." << endl;
    cropfield->removeCrops(cropfield->getCurrentStoredCrops());
}

void DrySoil::rain(CropField* cropfield) {
   cout << "Rain has made the soil Fruitful!" <<endl;
    cropfield->setSoilState(new FruitFulSoil());
}