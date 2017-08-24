#ifndef CALORIECOUNTER_H_INCLUDED
#define CALORIECOUNTER_H_INCLUDED

#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

class CalorieCounter
{
private:
    double carbs, protien, fat, totalCalories;
    ifstream fin;

public:
    double dailyCalories( double, double, double);
    void getWeight(ifstream&, double&);
    double dailyFat(double);
    double dailyCarbs(double);
    double dailyProtien(double);

};



#endif // CALORIECOUNTER_H_INCLUDED
