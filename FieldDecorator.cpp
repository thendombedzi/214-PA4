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
    return decoratedField->harvest();
}