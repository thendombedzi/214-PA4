#include "FertilizerTruck.h"

void FertilizerTruck::startEngine(){
    cout << "Fertilizer truck engine starting ... "<< endl ;

    // Logic to deliver the fertilizer 
}
void FertilizerTruck::update(FarmUnit* farmUnit) {
    CropField* field = dynamic_cast<CropField*>(farmUnit);
    if (field) {
        deliverFertilizer(field);
    }
}
void FertilizerTruck::deliverFertilizer(CropField* field) {
    std::cout << "FertilizerTruck: Delivering fertilizer to the field.\n";
    // Here you can add more specific logic related to the delivery of fertilizer
    // For instance, you can check soil conditions or update the field's soil state
    // Simulate delivering fertilizer by potentially changing soil state
    if (field->getSoilStateName() == "Dry") {
        field->applyFertilizer();  // Assuming this method applies fertilizer and updates soil state
        std::cout << "FertilizerTruck: Fertilizer applied.\n";
    } else {
        std::cout << "FertilizerTruck: Soil is not dry. No fertilizer needed.\n";
    }
}
