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
#include <cstdint>

namespace edu { namespace vcccd { namespace vc { namespace csv15 {

    template<class T>
    void merge(T array[], size_t i, size_t j, size_t k) {

        size_t mergeSize = k - i + 1;
        size_t mergeIndex = 0;
        size_t* temp = new size_t [mergeSize];

        size_t leftStart = i;
        size_t rightStart = j + 1;

        while (leftStart <= j && rightStart <= k){
            if (array[leftStart] <= array[rightStart]) {
                temp[mergeIndex] = array[leftStart];
                leftStart++;
            } else {
                temp[mergeIndex] = array[rightStart];
                rightStart++;
            }
            mergeIndex++;
        }

        while (leftStart <= j) {
            temp[mergeIndex] = array[leftStart];
            leftStart++;
            mergeIndex++;
        }
        while (rightStart <= j) {
            temp[mergeIndex] = array[rightStart];
            rightStart++;
            mergeIndex++;
        }

        for (mergeIndex = 0; mergeIndex < mergeSize; mergeIndex++) {
            array[i + mergeIndex] = temp[mergeIndex];
        }
    }

    template<class T>
    void mergeSort (T array[], size_t i, size_t k){
        size_t j = 0;

        if(i < k){
            j = (i + k) / 2;
            mergeSort(array, i, j);
            mergeSort(array, j + 1, k);

            merge(array, i, j, k);
        }
    }
}}}}