#ifndef FARM_H
#define FARM_H

#include <vector>
#include <string>
#include "FarmUnit.h"
#include "FarmAggregate.h"
#include "FarmTraversal.h"
#include "BreadthFirstTraversal.h"
#include "DepthFirstTraversal.h"
#include <iostream>
using namespace std;

class Farm : public FarmAggregate {
    private:
        vector<FarmUnit*> farmUnits;
        FarmUnit* unit;
    public :
    Farm():unit(nullptr){}
        FarmTraversal* createIterator(string type);
        void addFarmUnit(FarmUnit* newUnit);
        ~Farm();
};



#endif