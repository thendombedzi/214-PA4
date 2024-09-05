#ifndef FARMLAND_H
#define FARMLAND_H

#include "FarmUnit.h"

class FarmComposite : public FarmUnit {
private:
    std::vector<FarmUnit*> units;


public:
    ~Farmland();
    void addFarmUnit(FarmUnit* unit) override;
    void removeFarmUnit(FarmUnit* unit) override;
    int getTotalCapacity() const override;
    std::string getCropType() const override;
    std::string getSoilStateName() const override

};

#endif