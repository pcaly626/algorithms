/*

    Find pairs in an integer array whose sum is equal to 10

*/

#include<iostream>

using namespace std;

int main(){

const int SIZE = 10;

int array[SIZE] = {1,2,3,7,3,1,5,5,0,10};
int num1, num2;

for(int i = 0; i < SIZE; i++){

    for(int j = 1; j < SIZE - 1; j++){

        num1 = array[i];
        num2 = array[j];

        if(num1 + num2 == 10){

            cout << i << " and " << j << " equals 10" << endl;

        }

    }

}


}
