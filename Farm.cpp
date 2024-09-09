#include "Farm.h"

FarmTraversal* Farm::createIterator(string type){
    if(type == "BreadthFirst")
    {
        return new BreadthFirstTraversal(unit);
    } 
    else if(type == "DepthFirst")
    {
        return new DepthFirstTraversal(unit);
    }
    else 
    {
        cout << "Invalid traversal type given: " << type << endl;
        return nullptr; 
    }
}


void Farm::addFarmUnit(FarmUnit* newUnit)
{
  if (newUnit == nullptr) {
       cout<<"ERROR: cannot add an empty farm unit"<<endl;
       return;
        }
        
        if (!unit) 
        {
            unit = newUnit;
        }
        farmUnits.push_back(newUnit);
    
}

Farm::~Farm() {
    // Ensure no dangling pointers
    for (FarmUnit* farmUnit : farmUnits) {
        if (farmUnit != nullptr) {
            delete farmUnit;
        }
    }
    farmUnits.clear(); // Clear the vector to avoid dangling pointers
    // rootUnit = nullptr; // Ensure that rootUnit is also cleared if it's part of the design
}

