#include "DeliveryTruck.h"
// void startEngine() override ;
//         void callTruck() ;
//         void update(FarmUnit* farmUnit);

 void DeliveryTruck::update(FarmUnit* farmUnit){
    int current = farmUnit->getCurrentStoredCrops() ;
    int capacity = farmUnit->getTotalCapacity();
    if(current >= capacity){
        callTruck();
        farmUnit->addUnit
    }
 }

 void DeliveryTruck::startEngine(){
    cout << "Engine starting an trucks operation starting ." << endl;

 }

 void DeliveryTruck::callTruck(){
    cout << " Delivery Truck called ...... , " ;
    startEngine();
    
 }