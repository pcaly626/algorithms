/*

Author Paul T Clay

		cutting Macro to Calorie calculator
I am tired of trying to figure out how many calories I need and my macros
So here is a calculator to do it for me. All I need is to input my weight into
a file and it will output it onto a terminal.

*/

#include "CuttingCounter.h"

using namespace std;

/*

	cuttingFat calculates weight times .35

*/

double CuttingCounter::cuttingFat(double weight)
{
	return weight * .2;
}

/*

	cuttingCarb returns weight

*/

double CuttingCounter::cuttingCarbs(double weight)
{
	return weight;
}


/*

	CuttingProtien is 1.2 of protien for pound of body weight


*/


double CuttingCounter::cuttingProtien(double weight){return weight * 1.2;}
