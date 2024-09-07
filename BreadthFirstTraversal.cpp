#include "BreadthFirstTraversal.h"
#include <iostream>

BreadthFirstIterator(FarmUnit* root) : root(root) {}

FarmUnit* BreadthFirstTraversal::firstFarm()
{
   while (!farmQueue.empty()) farmQueue.pop();
        if (root) farmQueue.push(root);
        if (!isDone()) {
            currentFarmPtr = farmQueue.front();
        }
}

void BreadthFirstTraversal::next()
{
    if (isDone()) return;


}

bool BreadthFirstTraversal::isDone()
{
    return farmQueue.empty();
}

FarmUnit* BreadthFirstTraversal::currentFarm()
{
     if (currentFarmPtr) {
            return *currentFarmPtr;
        }
    else cout<<"no current farm found"<<endl;
    
}

