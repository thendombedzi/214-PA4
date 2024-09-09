#include "Barn.h"
#include <iostream>

Barn::Barn(int capacity) : BarnCapacity(capacity), storedAmount(0) {
    BarnCropType="unknown";
}


int Barn::getTotalCapacity() const {
    return BarnCapacity;
}

int Barn::getCurrentStoredCrops()const {
    return storedAmount;
}

void Barn::storeCrops( int amount) {
    cout<<storedAmount<<" and "<<amount<<endl;
    if (storedAmount + amount <= BarnCapacity) {
    
            storedAmount += amount;
    
    } else {
        cout<<"Barn capacity exceeded"<<endl;
    }
}

void Barn::removeCrops(int amount) {
    if (amount <= storedAmount) {
        storedAmount -= amount;
        if (storedAmount == 0) {
            BarnCropType = "Empty";
        }
    } else {
        cout<<"Not enough crops in the barn"<<endl;
    }

    
}

std::string Barn::getUnitDetails() const {
    return "Barn - Capacity: " + std::to_string(BarnCapacity) + ", Stored: " + std::to_string(storedAmount);
}
