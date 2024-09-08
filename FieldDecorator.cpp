#include "FieldDecorator.h"

FieldDecorator::FieldDecorator(FarmUnit* decoratedField){
    this->decoratedField = decoratedField ;
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

void FieldDecorator::applyFertilizer() {
    decoratedField->applyFertilizer();
}

string FieldDecorator::getSoilStateName() const{
   return  decoratedField->getSoilStateName();
}
void FieldDecorator::setSoilState(SoilState* state) {
    decoratedField->setSoilState(state);
}
SoilState* FieldDecorator::getSoilState(){
    return decoratedField->getSoilState();
}
void FieldDecorator::addExtraBarn(int additionalCapacity) {
    decoratedField->addExtraBarn(additionalCapacity);
}
FieldDecorator::~FieldDecorator(){
    delete decoratedField ;
}