#include "ExtraBarnDecorator.h"

ExtraBarnDecorator::ExtraBarnDecorator(FarmUnit* decoratedField): FieldDecorator(decoratedField){} ;

int ExtraBarnDecorator::getTotalCapacity() const {
    return decoratedField->getTotalCapacity() + extraCapacity ; 
}

int ExtraBarnDecorator::getLeftOverCapacity() const {
    return getTotalCapacity() - decoratedField->getTotalCapacity() ;
}

void ExtraBarnDecorator::addExtraBarn(int additionalCapacity) {
    FieldDecorator::addExtraBarn(additionalCapacity);
    std::cout << "Extra barn functionality added.\n";
}

