#ifndef FARMAGGREGATE_H
#define FARMAGGREGATE_H

#include "FarmUnit.h"

class FarmAggregate
{
public:
  virtual  FarmTraversal* createIterator(string type) =0;

};

#endif