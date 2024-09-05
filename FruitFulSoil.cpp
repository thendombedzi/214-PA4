#include "FruitFulSoil.h"
#include <iostream>
using namespace std;


string getName() const
{
    return "Fruitful";
}

void FruitfulSoil::harvestCrops(CropField* cropfield) {
    int harvestedAmount = crop->getCurrentAmount()*3;
    cout << "Harvested " << harvestedAmount << " crops from Fruitful soil." <<endl;
    cropfield->removeCrops(cropfield->getCurrentAmount());
}

void FruitfulSoil::rain(CropField* cropfield) {
    std::cout << "More rain has Flooded the soil!" << std::endl;
    cropfield->setSoilState(new FloodedSoil());
}