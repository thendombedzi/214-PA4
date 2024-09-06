#include "FloodedSoil.h"
#include <iostream>
using namespace std;

string FloodedSoil::getName() const
{
    return "Flooded";
}

int FloodedSoil:: harvestCrops(CropField* cropfield)
{
  cout << "Cannot harvest crops on FloodedSoil." << endl;
}

void FloodedSoil::rain(CropField* cropfield) {
  cout << "The soil is already Flooded. No change." <<endl;
}