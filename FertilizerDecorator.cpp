#include "FertilizerDecorator.h"

void FertilizerDecorator::increaseProduction() {
        std::cout << "Applying fertilizer to increase productivity!" << std::endl;

        FruitFulSoil* soil = new FruitFulSoil();
        decoratedField->setSoilState(soil);
    }

    FertilizerDecorator::~FertilizerDecorator() {
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

