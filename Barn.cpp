#include "Barn.h"
#include <iostream>

Barn::Barn(int capacity) : BarnCapacity(capacity), storedAmount(0), BarnCropType("Empty") {}


int Barn::getTotalCapacity() const {
    return BarnCapacity;
}

int Barn::getCurrentStoredCrops() {
    return storedAmount;
}

void Barn::storeCrops( int amount) {
    if (storedAmount + amount <= BarnCapacity) {
        if (storedAmount == 0 ) {
            storedAmount += amount;
        
        } 
    } else {
        throw std::runtime_error("Barn capacity exceeded");
    }
}

void Barn::removeCrops(int amount) {
    if (amount <= storedAmount) {
        storedAmount -= amount;
        if (storedAmount == 0) {
            BarnCropType = "Empty";
        }
    } else {
        throw std::runtime_error("Not enough crops in the barn");
    }
}