#include "ExtraBarnDecorator.h"

ExtraBarnDecorator::ExtraBarnDecorator(FarmUnit* decoratedField, int extraCapacity): FieldDecorator(decoratedField), extraCapacity(extraCapacity){} ;

int ExtraBarnDecorator::getTotalCapacity() const {
    return decoratedField->getTotalCapacity() + extraCapacity ; 
}

int ExtraBarnDecorator::getLeftOverCapacity() const {
    return getTotalCapacity() - decoratedField->getCurrentStoredCrops() ;
}

int ExtraBarnDecorator::harvest(){
    return decoratedField->harvest();
}

void ExtraBarnDecorator::increaseProduction(){
   cout << "Production increased " << endl ;
}

