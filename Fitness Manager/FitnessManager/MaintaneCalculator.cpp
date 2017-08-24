/*

Author Paul T Clay

		Daily Macro to Calorie calculator
I am tired of trying to figure out how many calories I need and my macros
So here is a calculator to do it for me. All I need is to input my weight into
a file and it will output it onto a terminal.

*/

#include "CalorieCounter.h"

using namespace std;


/*

    dailyCalories takes the macronutirents calorie equivalent and adds together
    Protien is 1:4
    Carbs are 1:4
    fat is 1:9

*/

double CalorieCounter::dailyCalories( double protien, double carbs, double fat)
{
	protien *= 4;
	carbs *= 4;
	fat *= 9;

	return protien + carbs + fat;
}

/*

	getWeight just gets the weight from the file

*/

void CalorieCounter::getWeight( ifstream& fin, double& weight)
{
	fin >> weight;
}

/*

	dailyFat calculates weight times .35

*/

double CalorieCounter::dailyFat(double weight)
{
	return weight * .35;
}

/*

	dailyCarb returns weight times 1.6

*/

double CalorieCounter::dailyCarbs(double weight)
{
	return weight * 1.6;
}


/*

	dailyProtien is one gram of protien for pound of body weight
	so it will return weight

*/


double CalorieCounter::dailyProtien(double weight){return weight;}
