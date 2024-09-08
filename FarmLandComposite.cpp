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



