#include "DepthFirstTraversal.h"
#include <iostream>


 DepthFirstIterator(FarmUnit* root) : root(root) {}


void DepthFirstTraversal::firstFarm()
{
   while (!farmStack.empty()) farmStack.pop();
        if (root) farmStack.push(root);
        if (!isDone()) {
            currentFarmPtr = farmStack.top();
        } 
}

void DepthFirstTraversal::next()
{
    if (isDone()) return;



}

bool DepthFirstTraversal::isDone()
{
    return farmStack.empty();
}

FarmUnit DepthFirstTraversal::currentFarm()
{
     if (currentFarmPtr) {
            return *currentFarmPtr;
        }
    else cout<<"no current farm found"<<endl;
    
}