#ifndef CUTTINGCOUNTER_H_INCLUDED
#define CUTTINGCOUNTER_H_INCLUDED
#include "CalorieCounter.h"

using namespace std;

class CuttingCounter{

    private:
     double protien, fat, carbs;

    public:
    double cuttingProtien(double);
    double cuttingFat(double);
    double cuttingCarbs(double);

};


#endif // CUTTINGCOUNTER_H_INCLUDED
