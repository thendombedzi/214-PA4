#include "BreadthFirstTraversal.h"
#include <iostream>

BreadthFirstTraversal::BreadthFirstTraversal(FarmUnit* root) : root(root) {}

FarmUnit* BreadthFirstTraversal::firstFarm()
{
   while (!farmQueue.empty()) farmQueue.pop();
        if (root) farmQueue.push(root);
        if (!isDone()) {
            currentFarmPtr = farmQueue.front();
        }
    if(currentFarmPtr) { return currentFarmPtr;}
    else{
        return nullptr ;
    }
}

void BreadthFirstTraversal::next()
{
    if (isDone()) return;
    farmQueue.pop();
}

bool BreadthFirstTraversal::isDone()
{
    return farmQueue.empty();
}

FarmUnit* BreadthFirstTraversal::currentFarm()
{
    if(isDone()) return nullptr ;
    return farmQueue.front() ;
}

