#ifndef BREADTHFIRSTTRAVERSAL_H
#define BREADTHFIRSTTRAVERSAL_H

#include "FarmTraversal.h"

class BreadthFirstTraversal
{
  private:
    FarmUnit* root;
    std::queue<FarmUnit*> farmQueue;
    FarmUnit* currentFarmPtr = nullptr;

  public:
   BreadthFirstIterator(FarmUnit* root);
     void firstFarm() override;
     void next() override;
     bool isDone() override;
     FarmUnit currentFarm() override;
};

#endif