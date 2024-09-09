#include "FarmlandComposite.h"


void FarmlandComposite::addUnit(FarmUnit* unit) 
{
    units.push_back(unit);
}

void FarmlandComposite::removeUnit(FarmUnit* unit) 
{
    auto it = std::find(units.begin(), units.end(), unit);
    if (it != units.end()) {
        units.erase(it);
    }
}

int FarmlandComposite::getTotalCapacity() const 
{
    int total = 0;
    for (const auto& unit : units) {
        total += unit->getTotalCapacity();
    }
    return total;
}


std::string FarmlandComposite::getSoilStateName() const 
{
    if (!units.empty()) {
        return units[0]->getSoilStateName();
    }
    return "No soilState found";
}

FarmlandComposite::~FarmlandComposite() 
{
    for (auto unit : units) {
        
        delete unit;
    }
}

void FarmlandComposite::storeCrops(int amount) {
    for (auto& unit : units) {
        unit->storeCrops(amount);
        // You may want to handle amount distributed or handle overflow
    }
}

void FarmlandComposite::removeCrops(int amount) {
    for (auto& unit : units) {
        unit->removeCrops(amount);
        // You may want to handle amount distributed or handle underflow
    }
}


int FarmlandComposite::getCurrentStoredCrops() const {
    int totalStoredCrops = 0;
    for (const auto& unit : units) {
        totalStoredCrops += unit->getCurrentStoredCrops();
    }
    return totalStoredCrops;
}



