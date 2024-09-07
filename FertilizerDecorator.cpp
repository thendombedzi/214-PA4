#include "FertilizerDecorator.h"

void FertilizerDecorator::increaseProduction(){
    // Call the increaseProduction method on the decorated field
    decoratedField->increaseProduction();
    FieldDecorator::applyFertilizer();
    std::cout << "FertilizerDecorator: Further enhancing production." << std::endl;
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