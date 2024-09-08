#ifndef DELIVERYTRUCK_H
#define DELIVERYTRUCK_H
#include "Truck.h"
#include "CropField.h"


class DeliveryTruck : public Truck {
    private :
        bool inUse ;
    public :    
        void startEngine() override ;
        void update(FarmUnit* farmUnit) override ;
        void collectCrops(CropField* field);
};

#endif