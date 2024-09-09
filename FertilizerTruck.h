#ifndef FERTILIZERTRUCK_H
#define FERTILIZERTRUCK_H
#include "Truck.h"

#include "CropField.h"

class FertilizerTruck : public Truck {
    public :    
        void startEngine() override ;
        void update(FarmUnit* farmUnit) override ;
        void deliverFertilizer(CropField* field);
};

#endif