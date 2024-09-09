#include "FertilizerDecorator.h"

void FertilizerDecorator::increaseProduction(){
    if (dynamic_cast<DrySoil*>(decoratedField->getSoilState())) {
        std::cout << "Applying fertilizer to increase productivity!" << std::endl;
        delete decoratedField->getSoilState() ;
        decoratedField->setSoilState(new FruitFulSoil());
    }
}

    // Override the harvest method
int FertilizerDecorator::harvest() {
    // Call the harvest method on the decorated field
    int harvestedCrops = decoratedField->harvest();
    std::cout << "FertilizerDecorator: Enhanced harvest of " << harvestedCrops << " crops." << std::endl;
    return harvestedCrops;
}

int FertilizerDecorator::getLeftOverCapacity() const {
    return decoratedField->getLeftOverCapacity();
}

FertilizerDecorator::~FertilizerDecorator(){
    
}