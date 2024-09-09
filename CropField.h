#ifndef CROPFIELD_H
#define CROPFIELD_H

#include "FarmUnit.h"
#include "Truck.h"

class SoilState ;

#include <string>

class CropField : public FarmUnit {
private:
    std::string cropType;
    int cropCapacity;
    int cropAmount;
    SoilState* soilState;

public:
    // Constructor and Destructor
    CropField(const std::string& cropType, int totalCapacity, SoilState* state);
    ~CropField();

    // Methods overridden from FarmUnit
    int getTotalCapacity() const override;
    int getCurrentStoredCrops() const override;
    void storeCrops(int amount) override;
    void removeCrops(int amount) override;
    int harvest() override;
    int getLeftOverCapacity() const override;
    void addExtraBarn(int additionalCapacity) override;
    void applyFertilizer() override;
    std::string getSoilStateName() const override;
    SoilState* getSoilState() override;

    // Additional Methods
    void increaseProduction();
    void rain();
    void setSoilState(SoilState* soilState);
    void buyTruck(Truck* truck) override;
    void sellTruck(Truck* truck) override;
    void callTruck() override;
    void startEngine() override;
     string getUnitDetails() const override;
     
};


#endif // CROPFIELD_H
