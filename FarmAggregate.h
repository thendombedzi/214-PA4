#ifndef FARMAGGREGATE_H
#define FARMAGGREGATE_H

#include "FarmUnit.h"
#include ""

class FarmAggregate
{
public:
  virtual  FarmTraversal* createIterator(string type) =0;
  virtual ~FarmAggregate() = default;
};

#endif