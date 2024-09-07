#include "FieldDecorator.h"

FieldDecorator::FieldDecorator(FarmUnit* decoratedField){
    decoratedField = decoratedField ;
}


int FieldDecorator::getTotalCapacity() const{
    return decoratedField->getTotalCapacity();
}
int FieldDecorator::getCurrentStoredCrops() const {
    return decoratedField->getCurrentStoredCrops() ;
}
void FieldDecorator::storeCrops(int amount){
    decoratedField->storeCrops(amount);
}
void FieldDecorator::removeCrops(int amount){
    decoratedField->removeCrops(amount);
}
int FieldDecorator::harvest() {
    decoratedField->harvest();
}
int FieldDecorator::getLeftOverCapacity() const {
    return decoratedField->getLeftOverCapacity();
}
void FieldDecorator::increaseProduction(){
    decoratedField->increaseProduction();
    cout << "FertilizerDecorator : Further enhancing production ." << endl ;
}
void FieldDecorator::applyFertilizer() {
        decoratedField->applyFertilizer();
    }

void FieldDecorator::addExtraBarn(int additionalCapacity) {
    decoratedField->addExtraBarn(additionalCapacity);
}