#ifndef FERTILIZERTRUCK_H
#define FERTILIZERTRUCK_H
#include "Truck.h"


class FertilizerTruck : public Truck {
    private :
        bool inUse ;
    public :    
        void startEngine() override ;
        void callTruck() ;
        void update(FarmUnit* farmUnit);
};

#endif