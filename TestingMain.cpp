#include <iostream>
#include "Barn.h"
#include "CropField.h"
#include "SoilState.h"
#include "DrySoil.h"
#include "FruitFulSoil.h"
#include "FloodedSoil.h"
#include "ExtraBarnDecorator.h"
#include "FertilizerDecorator.h"
#include "Truck.h"
#include "FertilizerTruck.h"
#include "DeliveryTruck.h"


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
 // Increase productivity
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

    cout << " Testing observer : " << " ...... " << endl ;

     // Create initial SoilState objects
    SoilState* drySoil = new DrySoil();
    SoilState* fruitfulSoil = new FruitFulSoil();

    // Create a CropField with initial dry soil
    CropField* field1 = new CropField("Wheat", 1000, drySoil);

    // Add some trucks to the field1
    FertilizerTruck* fertilizerTruck = new FertilizerTruck();
    DeliveryTruck* deliveryTruck = new DeliveryTruck();

    field1->buyTruck(fertilizerTruck);
    field1->buyTruck(deliveryTruck);

    // Test storing crops
    std::cout << "\n--- Storing Crops ---" << std::endl;
    field1->storeCrops(800); // Should not trigger truck collection
    field1->storeCrops(200); // Should trigger DeliveryTruck for collection

    // Test calling trucks directly
    std::cout << "\n--- Calling Trucks ---" << std::endl;
    field1->callTruck();

    // Test applying fertilizer on DrySoil
    std::cout << "\n--- Applying Fertilizer on Dry Soil ---" << std::endl;
    field1->applyFertilizer();

    // Simulate rain to change soil state to FruitFulSoil
    std::cout << "\n--- Rain Event ---" << std::endl;
    field1->rain(); // Changes soil to fruitful

    // Test trying to apply fertilizer on fruitful soil
    std::cout << "\n--- Trying to Apply Fertilizer on Fruitful Soil ---" << std::endl;
    field1->applyFertilizer();

    // Test harvesting crops
    std::cout << "\n--- Harvesting Crops ---" << std::endl;
    int harvested = field1->harvest();
    std::cout << "Harvested: " << harvested << " crops." << std::endl;

    // Cleanup
    delete field1;
    delete drySoil;
    delete fruitfulSoil;

    return 0;
}
