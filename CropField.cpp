#include "CropField.h"
#include <iostream>

CropField::CropField(string cropType, int totalCapacity, SoilState* state)
    : cropType(cropType), cropCapacity(totalCapacity),cropAmount(0), soilState(state) {}


int CropField::getTotalCapacity() const 
{
    return cropCapacity;
}

std::string CropField::getCropType() const 
{
    return cropType;
}

std::string CropField::getSoilStateName() const 
{
    return soilState->getName();
}

void CropField::storeCrops(int amount) {
    if (cropAmount + amount <= cropCapacity) {
        cropAmount += amount;
    } else {
        throw std::runtime_error("Crop field capacity exceeded.");
    }
}

void CropField::removeCrops(int amount) {
    if (amount <= cropAmount) {
        cropAmount -= amount;
        if(cropAmount < 0) 
            cropAmount = 0 ; 
    } else {
        throw std::runtime_error("Field is empty.");
    }
}