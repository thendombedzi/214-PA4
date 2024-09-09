#include "DepthFirstTraversal.h"
#include <iostream>


 DepthFirstTraversal::DepthFirstTraversal(FarmUnit* root) : root(root), currentFarmPtr(nullptr) {}

FarmUnit* DepthFirstTraversal::firstFarm()
{
   while (!farmStack.empty())
   { farmStack.pop();}

    if (root)
    { farmStack.push(root);}

        if (!isDone()) 
        {
            currentFarmPtr = farmStack.top();
        } 
        else {
            currentFarmPtr = nullptr;
        }

        return currentFarmPtr;
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

DepthFirstTraversal::~DepthFirstTraversal(){
    if(root != nullptr){
        delete root ;
    }
    if(currentFarmPtr != nullptr){
        delete currentFarmPtr ;
    }
}