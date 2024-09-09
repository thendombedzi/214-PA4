#include "CropField.h"
#include "SoilState.h"
#include "FruitFulSoil.h"
#include <iostream>
#include <algorithm>

CropField::CropField(const std::string& cropType, int totalCapacity, SoilState* state)
    : cropType(cropType), cropCapacity(totalCapacity),cropAmount(0), soilState(state) {
        if(!state){
            soilState = nullptr ;
        }
    }

SoilState* CropField::getSoilState(){
    return soilState ;
}
int CropField::harvest() {
    if (soilState) {
        int harvestedCrops = soilState->harvestCrops(this);
        cropAmount += harvestedCrops;
        return harvestedCrops;
    } else {
        throw std::runtime_error("Error: SoilState is null, cannot harvest.");
    }
}
int CropField::getTotalCapacity() const 
{
    return cropCapacity;
}
int CropField::getLeftOverCapacity() const {
    return cropCapacity - cropAmount ;
}

void CropField::increaseProduction() {
    if(soilState && soilState->getName() == "Dry"){
        cout << "Fertilizer applied : Transitioning from DrySoil to FruitfulSoil. " << endl ;
        SoilState* newSoilState = new FruitFulSoil();
        soilState = newSoilState;
    } else {
            std::cout << "Fertilizer cannot be applied. Soil is already in " << soilState->getName() << " state." << std::endl;
    }
}
int CropField::getCurrentStoredCrops() const {
    return cropAmount ;
}
  void CropField::applyFertilizer() {
        if (soilState->getName() == "Dry") {
            callTruck() ;
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

std::string CropField::getSoilStateName() const 
{
    return soilState->getName();
}

void CropField::storeCrops(int amount) {
    if (cropAmount + amount <= cropCapacity) {
        cropAmount += amount;
        if(cropAmount == cropCapacity){
            callTruck();
        }
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
    cout << "Truck purchasesd .\n";
}
void CropField::sellTruck(Truck* truck) {
        auto it = find(trucks.begin(), trucks.end(), truck);
        if (it != trucks.end()) {
            trucks.erase(it);
            std::cout << "Truck sold.\n";
        } else {
            std::cout << "Truck not found.\n";
        }
    }

void CropField::setSoilState(SoilState* soilstate)
{
   this->soilState = soilState ;
}


CropField::~CropField(){
    if(soilState != nullptr){
        delete soilState ;
    }
}


void CropField::callTruck() {
    static bool fertilizerApplied = false;
    if (soilState->getName() == "Dry" && !fertilizerApplied) {
        fertilizerApplied = true;
         // Prevent repeated fertilizer application
        startEngine();
        for (Truck* truck : trucks) {
            truck->update(this); // Notify all trucks
        }
    }
}
void CropField::startEngine()  {
    for (Truck* truck : trucks) {
        truck->startEngine();
    }
}