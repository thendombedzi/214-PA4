#ifndef FARMUNIT_H
#define FARMUNIT_H

#include <string>
using namespace std ;

class FarmUni{
     public :
        virtual int getTotalCapacity() = 0 ;
        virtual string getCropType() = 0 ;
        virtual string getSoilStateName() = 0 ; 
        virtual int getCurrentStoredCrops() = 0 ;
        virtual void storeCrops(int amount) = 0 ;
        virtual void removeCrops(int amount) = 0 ;
} ;

#endif