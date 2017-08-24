/*

   Find the most common number in an array

*/

#include<iostream>

using namespace std;

int main(){

const int SIZE = 10;

    int array[SIZE] = {1,2,3,3,1,3,1, 1, 1,1};
    int popular = array[0];
    int tempCount = 0, count =0, tempPop;

    for(int i = 0; i < SIZE; i++){

        for(int j = 0; j < SIZE; j++){
            tempPop = array[i];
            if(tempPop == array[j])
                tempCount++;
        }
        if(count < tempCount){
            popular = array[i];
            count = tempCount;
        }
    }

    cout << popular;

}
