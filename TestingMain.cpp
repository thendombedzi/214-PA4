#include <iostream>
#include "Barn.h"
#include "CropField.h"
#include "SoilState.h"
#include "DrySoil.h"
#include "FruitfulSoil.h"
#include "FloodedSoil.h"
#include "ExtraBarnDecorator.h"
#include "FertilizerDecorator.h"


int main() {
    // Create initial crop field with DrySoil
    CropField* field = new CropField("Veg", 100, new DrySoil());
    
    // Add some crops to the field
    field->storeCrops(50);

    // Display initial state
    std::cout << "Initial State:" << std::endl;
    std::cout << "Soil State: " << field->getSoilState()->getName() << std::endl;
    std::cout << "Current Crops: " << field->getCurrentStoredCrops() << std::endl;
    std::cout << "Leftover Capacity: " << field->getTotalCapacity() - field->getCurrentStoredCrops() << std::endl;

    // Apply fertilizer using FertilizerDecorator
    FertilizerDecorator* fertilizerDecoratedField = new FertilizerDecorator(field);
    fertilizerDecoratedField->increaseProduction(); // Increase productivity
    int harvestedCrops = fertilizerDecoratedField->harvest(); // Harvest crops

    // Display state after applying fertilizer
    std::cout << "\nAfter Applying Fertilizer:" << std::endl;
    std::cout << "Soil State: " << fertilizerDecoratedField->getSoilState()->getName() << std::endl;
    std::cout << "Current Crops: " << fertilizerDecoratedField->getCurrentStoredCrops() << std::endl;
    std::cout << "Harvested Crops: " << harvestedCrops << std::endl;
    std::cout << "Leftover Capacity: " << fertilizerDecoratedField->getLeftOverCapacity() << std::endl;

    // Add an extra barn using ExtraBarnDecorator
    ExtraBarnDecorator* extraBarnDecoratedField = new ExtraBarnDecorator(fertilizerDecoratedField, 50);

    // Display state after adding extra barn
    std::cout << "\nAfter Adding Extra Barn:" << std::endl;
    std::cout << "Soil State: " << extraBarnDecoratedField->getSoilState()->getName() << std::endl;
    std::cout << "Current Crops: " << extraBarnDecoratedField->getCurrentStoredCrops() << std::endl;
    std::cout << "Harvested Crops: " << extraBarnDecoratedField->harvest() << std::endl;
    std::cout << "Leftover Capacity: " << extraBarnDecoratedField->getLeftOverCapacity() << std::endl;

    // Clean up
    delete extraBarnDecoratedField;
    return 0;
}