#ifndef DEPTHFIRSTTRAVERSAL_H
#define DEPTHFIRSTTRAVERSAL_H

#include "FarmTraversal.h"

class DepththFirstTraversal
{
  private:
    FarmUnit* root;
    std::stack<FarmUnit*> farmStack;
    FarmUnit* currentFarmPtr = nullptr;

  public:
   DepthFirstIterator(FarmUnit* root);
     void firstFarm() override;
     void next() override;
     bool isDone() override;
     FarmUnit currentFarm() override;
};

#endif