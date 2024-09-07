#include "CropField.h"
#include <iostream>

CropField::CropField(string cropType, int totalCapacity, SoilState* state)
    : cropType(cropType), cropCapacity(totalCapacity),cropAmount(0), soilState(state) {}

int CropField::harvest(){
    int harvestedCrops = soilState->harvestCrops(this);
    cropAmount += harvestedCrops;
    return harvestedCrops ;
}
int CropField::getTotalCapacity() const 
{
    return cropCapacity;
}
int CropField::getLeftOverCapacity() const {
    return cropCapacity - cropAmount ;
}

void CropField::increaseProduction() {
    if(soilState->getName() == "Dry"){
        cout << "Fertilizer applied : Transitioning from DrySoil to FruitfulSoil. " << endl ;
        delete soilState ;
        soilState = new FruitFulSoil();
    } else {
            std::cout << "Fertilizer cannot be applied. Soil is already in " << soilState->getName() << " state." << std::endl;
    }
}

  void CropField::applyFertilizer() {
        if (soilState->getName() == "Dry") {
            setSoilState(new FruitFulSoil());
            increaseProduction();
        } else {
            std::cout << "Fertilizer has no effect on non-dry soil.\n";
        }
    }

void CropField::addExtraBarn(int additionalCapacity) {
        cropCapacity += additionalCapacity;
        std::cout << "Added extra barn. New capacity: " << cropCapacity << "\n";
    }

void CropField::rain(){
    soilState->rain(this);
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
void CropField::buyTruck(Truck* truck){
    trucks.push_back(truck);
}
void CropField::sellTruck(Truck* truck){
    // trucks.remove(truck)
    // try using a different data structure 
}
void CropField::notifyObservers(){
    for(Truck* truck1 : trucks){
        truck1->update(this);
    }
}

CropField::~CropField(){
    delete soilState ;
}