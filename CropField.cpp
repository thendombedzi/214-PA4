#include "CropField.h"
#include <iostream>

CropField::CropField(string cropType, int totalCapacity)
    : cropType(cropType), totalCapacity(totalCapacity),currentAmount(0), soilState(state) {}


int CropField::getTotalCapacity() const 
{
    return totalCapacity;
}

std::string CropField::getCropType() const 
{
    return cropType;
}

std::string CropField::getSoilStateName() const 
{
    return soilState;
}

void CropField::storecrops(int amount) {
    if (currentAmount + amount <= totalCapacity) {
        currentAmount += amount;
    } else {
        throw std::runtime_error("Crop field capacity exceeded.");
    }
}

void CropField::removeCrops(int amount) {
    if (amount <= currentAmount) {
        currentAmount -= amount;
    } else {
        throw std::runtime_error("Field is empty.");
    }
}