#include "DrySoil.h"
#include <iostream>
using namespace std;

string DrySoil::getName() const
{
   return "Dry";
}

void DrySoil::harvestCrops(CropField* cropfield) {
    int harvestedAmount = cropfield->getCurrentAmount() * 1;
    cout << "Harvested " << harvestedAmount << " crops from Dry soil." << endl;
    cropfield->removeCrops(cropfield->getCurrentAmount());
}

void DrySoil::rain(CropField* cropfield) {
   cout << "Rain has made the soil Fruitful!" <<endl;
    cropfield->setSoilState(new FruitfulSoil());
}