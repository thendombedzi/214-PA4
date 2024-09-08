#ifndef DEPTHFIRSTTRAVERSAL_H
#define DEPTHFIRSTTRAVERSAL_H

#include "FarmTraversal.h"
#include "FarmUnit.h"
#include <iostream>
#include <stack>
using namespace std ;

class DepthFirstTraversal : public FarmTraversal
{
  private:
    FarmUnit* root;
    stack<FarmUnit*> farmStack;
    FarmUnit* currentFarmPtr;

  public:
   DepthFirstTraversal(FarmUnit* root);
     FarmUnit* firstFarm() override;
     void next() override;
     bool isDone() override;
     FarmUnit* currentFarm() override;
     ~DepthFirstTraversal() ;
};

#endif