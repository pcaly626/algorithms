#include<iostream>
#include<cstdlib>
#include "CalorieCounter.h"
#include "BulkCounter.h"
#include "CuttingCounter.h"

using namespace std;

int main()
{
    CalorieCounter c;
    BulkCounter b;
    CuttingCounter cut;

	double weight, carbs, protien, fat,
	       totalCalories;			// Count all the calories based on the  macronutrients
    int choice;

	ifstream fin;
	fin.open("weight.txt");

	//Error checking to see if the file is opened

	if(!fin)
	{

		cout << "Did not find the file!" << endl << endl;

		return 1; //Closes program
	}
		system("PAUSE>NUL");

	do{
    cout << "What are you trying to do:\n"
         << "1. Loose Weight\n"
         << "2. Maintain Weight\n"
         << "3. Gain Weight \n"
         << "Or 0 to exit\n";
    cin >> choice;

    switch(choice){
    case 1:

    c.getWeight(fin, weight);

    protien = cut.cuttingProtien(weight);

    carbs = cut.cuttingCarbs(weight);

    fat = cut.cuttingFat(weight);

        cout << fixed << setprecision(1)
         << "*******************************MACROS****************************************\n"
         << setw(26) << "PROTIEN" << setw(10) << "CARBS" << setw(10) << "FAT\n"
	     << setw(26) << protien << setw(10) << carbs << setw(10) << fat << "\n\n";

	totalCalories = c.dailyCalories(protien, carbs, fat);

	cout << setw(32) << "                  TOTAL CALORIES NEEDED: " << totalCalories << "\n\n";

        break;
    case 2:

    c.getWeight(fin, weight);

	protien = c.dailyProtien(weight);

	carbs = c.dailyCarbs(weight);

	fat = c.dailyFat(weight);
    cout << fixed << setprecision(1)
         << "*******************************MACROS****************************************\n"
         << setw(26) << "PROTIEN" << setw(10) << "CARBS" << setw(10) << "FAT\n"
	     << setw(26) << protien << setw(10) << carbs << setw(10) << fat << "\n\n";

	totalCalories = c.dailyCalories(protien, carbs, fat);

	cout << setw(32) << "                  TOTAL CALORIES NEEDED: " << totalCalories << "\n\n";

    break;

    case 3:

    c.getWeight(fin, weight);

    protien = b.bulkProtien(weight);

    carbs = b.bulkCarbs(weight);

    fat = b.bulkFat(weight);

        cout << fixed << setprecision(1)
         << "*******************************MACROS****************************************\n"
         << setw(26) << "PROTIEN" << setw(10) << "CARBS" << setw(10) << "FAT\n"
	     << setw(26) << protien << setw(10) << carbs << setw(10) << fat << "\n\n";

	totalCalories = c.dailyCalories(protien, carbs, fat);

	cout << setw(32) << "                  TOTAL CALORIES NEEDED: " << totalCalories << "\n\n";

    }
	}while(choice != 0);


	fin.close();
	return 0;

}
