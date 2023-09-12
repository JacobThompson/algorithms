#include <assert.h>
#include "insertionSort.h"

#ifndef TEST
#define TEST
#endif

//Returns 1 on array lengths not equal
//Returns -1 if array values are not equal
//Returns 0 if arrays are identical.
int compare_arrays(int * arr1, int sizearr1, int * arr2, int sizearr2) {
	if(sizearr1 != sizearr2) {
		return 1;
	}

	for(int i = 0 ; i < sizearr1 ; i++) {
		if(arr1[i] != arr2[i]) return -1;
	}

	return 0;
}

int main() {
	int testA[2] = {1, 2};
	int correctA[2] = {1, 2};
	insertionSort(testA, 2);

	int testB[2] = {2, 1};
	int correctB[2]  = {1, 2};
	insertionSort(testB, 2);

	int testC[7] = {8, 6, 7, 5, 3, 0, 9};
	int correctC[7] = {0, 3, 5, 6, 7, 8, 9};
	insertionSort(testC, 7);

	assert(compare_arrays(testA, 2, correctA, 2) == 0);
	assert(compare_arrays(testB, 2, correctB, 2) == 0);
	assert(compare_arrays(testC, 2, correctC, 2) == 0);
	
}
