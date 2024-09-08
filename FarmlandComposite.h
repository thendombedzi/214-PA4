#ifndef FARMLANDCOMPOSITE_H
#define FARMLANDCOMPOSITE_H

#include "FarmUnit.h"
#include <algorithm>

class FarmlandComposite : public FarmUnit 
{
private:
    std::vector<FarmUnit*> units;


public:
    ~FarmlandComposite();
    void addUnit(FarmUnit* unit) override;
    void removeUnit(FarmUnit* unit)override ;
    int getTotalCapacity() const ;
    std::string getSoilStateName() const ;

};

#endif