#ifndef BULKCOUNTER_H_INCLUDED
#define BULKCOUNTER_H_INCLUDED
#include "CalorieCounter.h"

using namespace std;

class BulkCounter
{
private:
    double carbs, protien, fat;


public:

    double bulkFat(double);
    double bulkCarbs(double);
    double bulkProtien(double);
};

#endif // BULKCOUNTER_H_INCLUDED
