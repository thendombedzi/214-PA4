#include "FertilizerTruck.h"

void FertilizerTruck::startEngine(){
    cout << "Fertilizer truck engine starting ... "<< endl ;

    // Logic to deliver the fertilizer 
}
void FertilizerTruck::callTruck(){
    cout << "Fertilizer Truck called ... " ;
    startEngine();
}
void FertilizerTruck::update(FarmUnit* farmUnit){
    if(farmUnit->getSoilStateName() == "Dry"){
        callTruck();
    }
}