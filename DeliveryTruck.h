#ifndef DELIVERYTRUCK_H
#define DELIVERYTRUCK_H
#include "Truck.h"


class DeliveryTruck : public Truck {
    private :
        bool inUse ;
    public :    
        void startEngine() override ;
        void callTruck() ;
        void update(FarmUnit* farmUnit);
};

#endif