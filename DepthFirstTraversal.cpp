#include "DepthFirstTraversal.h"
#include <iostream>


 DepthFirstTraversal::DepthFirstTraversal(FarmUnit* root) : root(root) {}

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
    farmStack.pop();
}

bool DepthFirstTraversal::isDone()
{
    return farmStack.empty();
}

FarmUnit* DepthFirstTraversal::currentFarm()
{
    if(isDone()) return nullptr ;
    return farmStack.top() ;
}