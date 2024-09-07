#ifndef BREADTHFIRSTTRAVERSAL_H
#define BREADTHFIRSTTRAVERSAL_H

#include "FarmTraversal.h"
#include "FarmUnit.h"
#include <queue>
using namespace std ;

class BreadthFirstTraversal : public FarmTraversal
{
  private:
    FarmUnit* root;
    std::queue<FarmUnit*> farmQueue;
    FarmUnit* currentFarmPtr = nullptr;

  public:
   BreadthFirstTraversal(FarmUnit* root);
     FarmUnit* firstFarm() override;
     void next() override;
     bool isDone() override;
     FarmUnit* currentFarm() override;
};

#endif