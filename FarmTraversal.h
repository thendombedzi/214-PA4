#ifndef FARMTRAVERSAL_H
#define FARMTRAVERSAL_H

#include "FarmUnit.h"

class FarmTraversal
{
  public:
    virtual FarmUnit* firstFarm()= 0;
    virtual void next()=0;
    virtual bool isDone()=0;
    virtual FarmUnit* currentFarm()=0;
     virtual ~FarmTraversal() = default ;
};

#endif