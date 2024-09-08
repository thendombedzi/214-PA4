#include "DeliveryTruck.h"

 void DeliveryTruck::update(FarmUnit* farmUnit) {
        CropField* field = dynamic_cast<CropField*>(farmUnit);
        if (field) {
            collectCrops(field);
        }
}
 void DeliveryTruck::startEngine(){
    cout << "Engine starting an trucks operation starting ." << endl;
 }

void DeliveryTruck::collectCrops(CropField* field) {
        std::cout << "DeliveryTruck: Collecting crops from the field.\n";

        // Calculate the threshold as 80% of the field’s total capacity
        const double THRESHOLD_PERCENTAGE = 0.80; // 80%
        int threshold = static_cast<int>(field->getTotalCapacity() * THRESHOLD_PERCENTAGE);

        // Check if the crop amount is above the threshold
        if (field->getTotalCapacity() - field->getLeftOverCapacity() >= threshold) {
            // Simulate collecting crops
            int cropsToCollect = field->getTotalCapacity() - field->getLeftOverCapacity();

            try {
                field->removeCrops(cropsToCollect); // Remove crops from the field
                std::cout << "DeliveryTruck: Collected " << cropsToCollect << " crops from the field.\n";
            } catch (const std::runtime_error& e) {
                std::cerr << "Error while collecting crops: " << e.what() << std::endl;
            }
        } else {
            std::cout << "DeliveryTruck: No need to collect crops. Storage is below the threshold.\n";
        }
    }