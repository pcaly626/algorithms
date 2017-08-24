/*

Author Paul T Clay

		bulk Macro to Calorie calculator
I am tired of trying to figure out how many calories I need and my macros
So here is a calculator to do it for me. All I need is to input my weight into
a file and it will output it onto a terminal.

*/

#include "BulkCounter.h"

using namespace std;

/*

	bulkFat calculates weight times .35

*/

double BulkCounter::bulkFat(double weight)
{
	return weight * .4;
}

/*

	bulkCarb returns weight times 2

*/

double BulkCounter::bulkCarbs(double weight)
{
	return weight * 2;
}


/*

	bulkProtien is one gram of protien for pound of body weight
	so it will return weight

*/


double BulkCounter::bulkProtien(double weight){return weight;}
