#ifndef FARM_H
#define FARM_H

#include <vector>
#include <string>
#include "FarmUnit.h"
#include "FarmAggregate.h"
#include "FarmTraversal.h"
#include "BreadthFirstTraversal.h"

class Farm : public FarmAggregate {
    private:
        vector<FarmUnit*> farmUnits ;
    public :
        FarmTraversal* createIterator(string type){
            if(type == "BreadthFirst"){
                return new BreadthFirstTraversal();
            } else if(type == )
        }
}



#endif