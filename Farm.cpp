#include "Farm.h"

FarmTraversal* Farm::createIterator(string type){
    if(type == "BreadthFirst"){
        return new BreadthFirstTraversal(this);
    } else if(type == )
}