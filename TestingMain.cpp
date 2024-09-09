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
#include "FarmlandComposite.h"
#include "Farm.h"
#include "DepthFirstTraversal.h"
#include "BreadthFirstTraversal.h"
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

cout<<endl;


 //create barns:
   Barn* barn2 = new Barn(50);
    //create farmland
    FarmlandComposite* farmland = new FarmlandComposite();
    CropField* field2=new  CropField("fruits",30,new FruitFulSoil());
   

    field2->storeCrops(25);
    barn2->storeCrops(40);

   std::cout << " stored crops in field: " << field2->getCurrentStoredCrops() << std::endl;
   std::cout << " stored crops in barn: " << barn2->getCurrentStoredCrops() << std::endl;

    farmland->addUnit(barn2);
    farmland->addUnit(field2);

    std::cout<<endl;
     std::cout << "Total capacity of FarmlandComposite: " << farmland->getTotalCapacity() << std::endl;
     std::cout << "stored crops: " << farmland->getCurrentStoredCrops() << std::endl;

   field2->removeCrops(20);
   barn2->removeCrops(10);
   std::cout << "partial stored crops in FarmlandComposite: " << farmland->getCurrentStoredCrops() << std::endl;

   std::cout << " stored crops in field: " << field2->getCurrentStoredCrops() << std::endl;
   std::cout << " stored crops in barn: " << barn2->getCurrentStoredCrops() << std::endl;

    // Store crops in Barn
     field2->storeCrops(10); 
     barn2->storeCrops(10);
       std::cout << " stored crops in field: " << field2->getCurrentStoredCrops() << std::endl;
   std::cout << " stored crops in barn: " << barn2->getCurrentStoredCrops() << std::endl;

     std::cout << "Current stored crops in FarmlandComposite: " << farmland->getCurrentStoredCrops() << std::endl;

    farmland->removeCrops(5); 
    std::cout << "final stored crops in FarmlandComposite: " << farmland->getCurrentStoredCrops() << std::endl;

   farmland->removeUnit(barn2);
   farmland->removeUnit(field);



//iterate though the farm :

// Create a Farm
    Farm farm;

    FarmUnit* barn = new Barn(500);
    // Add some FarmUnits to the Farm
     farm.addFarmUnit(new CropField("Wheat", 200, new DrySoil()));
     farm.addFarmUnit(barn);

    //Create DepthFirstTraversal iterator
    FarmTraversal *depthFirst = farm.createIterator("DepthFirst");
    cout << "Depth First Traversal:" << endl;
    for (depthFirst->firstFarm(); !depthFirst->isDone(); depthFirst->next()) {
      
            cout << "Visited: " << depthFirst->currentFarm()->getUnitDetails() << endl;
        
    }

    // Create BreadthFirstTraversal iterator
    FarmTraversal* breadthFirst = farm.createIterator("BreadthFirst");
    cout << "Breadth First Traversal:" << endl;
    for (FarmUnit* unit = breadthFirst->firstFarm(); !breadthFirst->isDone(); breadthFirst->next()) {
        if (unit != nullptr) {
            cout << "Visited: " << unit->getUnitDetails() << endl;
        }
    }
   
    // Clean up
    delete extraBarnDecoratedField;
    delete barn2;
    delete farmland;
    
    delete depthFirst;
    delete breadthFirst;
    
   
    CropField* field3 = new CropField("carrots", 100, new FloodedSoil());
    
    // Add some crops to the field
    field3->storeCrops(50);

    // Display initial state
    std::cout << "Initial State:" << std::endl;
    std::cout << "Soil State: " << field3->getSoilState()->getName() << std::endl;
    std::cout << "Current Crops: " << field3->getCurrentStoredCrops() << std::endl;
    std::cout << "Leftover Capacity: " << field3->getTotalCapacity() - field3->getCurrentStoredCrops() << std::endl;

    // Apply fertilizer using FertilizerDecorator
    FertilizerDecorator* fertilizerDecoratedField2 = new FertilizerDecorator(field3);
    // Increase productivity
    int harvestedCrop = fertilizerDecoratedField2->harvest(); // Harvest crops

    // Display state after applying fertilizer
    std::cout << "\nAfter Applying Fertilizer:" << std::endl;
    std::cout << "Soil State: " << fertilizerDecoratedField2->getSoilState()->getName() << std::endl;
    std::cout << "Current Crops: " << fertilizerDecoratedField2->getCurrentStoredCrops() << std::endl;
    std::cout << "Harvested Crops: " << harvestedCrop << std::endl;
    std::cout << "Leftover Capacity: " << fertilizerDecoratedField2->getLeftOverCapacity() << std::endl;

    // Add an extra barn using ExtraBarnDecorator
    ExtraBarnDecorator* extraBarnDecoratedField2 = new ExtraBarnDecorator(fertilizerDecoratedField2, 50);

    // Display state after adding extra barn
    std::cout << "\nAfter Adding Extra Barn:" << std::endl;
    std::cout << "Soil State: " << extraBarnDecoratedField2->getSoilState()->getName() << std::endl;
    std::cout << "Current Crops: " << extraBarnDecoratedField2->getCurrentStoredCrops() << std::endl;
    std::cout << "Harvested Crops: " << extraBarnDecoratedField2->harvest() << std::endl;
    std::cout << "Leftover Capacity: " << extraBarnDecoratedField2->getLeftOverCapacity() << std::endl;

cout<<endl;
   
   delete extraBarnDecoratedField2;

   CropField* cropField4 = new CropField("Corn", 100, new DrySoil());

    
    cropField4->storeCrops(90); 
    SoilState* soil2=new DrySoil();
    soil2->harvestCrops(cropField4);
    soil2->rain(cropField4);
    cropField4->storeCrops(90); 

    DeliveryTruck* truck = new DeliveryTruck();
    truck->startEngine();

    truck->update(cropField4);
    cropField4->removeCrops(20); 
    truck->update(cropField4);

    // Clean up
    delete soil2;
    delete cropField4; 
    delete truck;

   std::cout<<endl;
   //for fruitfulsoil:
     CropField* cropField5 = new CropField("apples", 100, new FruitFulSoil());

    SoilState* soil=new FruitFulSoil();
    soil->harvestCrops(cropField5);
    soil->rain(cropField5);
    cropField5->storeCrops(90); 
      soil->harvestCrops(cropField5);
    soil->rain(cropField5);

    FertilizerTruck* truck1 = new FertilizerTruck();
    truck1->startEngine();

    truck1->update(cropField5);
    cropField5->removeCrops(20); 
    truck1->update(cropField5);

    
    delete truck1;
    delete soil;
    delete cropField5; 
    

    return 0;
}

