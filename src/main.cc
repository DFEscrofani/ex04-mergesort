/**
* CS V15 Data Structures and Algorithms
* CRN: 70342
* Assignment: Merge sort
*
* Statement of code ownership: I hereby state that I have written all of this
* code and I have not copied this code from any other person or source.
*
* @DaltonEscrofani
*/
#include <iostream>
#include "mergesort.h"

using edu::vcccd::vc::csv15::mergeSort;
using std::cout;
using std::endl;

int main (int argc, char *argv[]){
    int array [] = { 2, 4, 1, 6, 8, 5, 3, 7};
    cout << "Unsorted : ";

    for (int i = 0; i <= 7; i++){
        cout << array[i] << " ";
    }
    cout << endl;

    mergeSort(array, 8, 8);

    cout << "Sorted : ";
    for (int i = 0; i <= 7; i++){
        cout << array[i] << " ";
    }
};