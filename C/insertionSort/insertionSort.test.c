#define TEST
#include <assert.h>
#include "insertionSort.h"
#include "stdio.h"


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
	assert(compare_arrays(testA, 2, correctA, 2) == 0);

	int testB[2] = {2, 1};
	int correctB[2]  = {1, 2};
	insertionSort(testB, 2);
	assert(compare_arrays(testB, 2, correctB, 2) == 0);

	int testC[7] = {8, 6, 7, 5, 3, 0, 9};
	int correctC[7] = {0, 3, 5, 6, 7, 8, 9};
	insertionSort(testC, 7);
	assert(compare_arrays(testC, 2, correctC, 2) == 0);

	int testD[9] = {4093, 3012, 3333, 1930, 0, 310, 100, 2, 100000};
	int correctD[9] = {0, 2, 100, 310, 1930, 3012, 3333, 4093, 100000};
	insertionSort(testD, 9);
	assert(compare_arrays(testD, 9, correctD, 9) == 0);

	int testE[10] = {8000, 1000, 7000, 6000, 5000, 4000, 3000, 1000, 2000, 50};
	int correctE[10] = {50, 1000, 1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000};
	insertionSort(testE, 10);
	assert(compare_arrays(testE, 10, correctE, 10) == 0);

	int testF[5] = {-1, -2, -3, -4, -5};
	int correctF[5] = {-5, -4, -3, -2, -1};
	insertionSort(testF, 5);
	assert(compare_arrays(testF, 5, correctF, 5) == 0);

	int testG[5] = {0, 0, 0, 0, 0};
	int correctG[5] = {0, 0, 0, 0, 0};
	insertionSort(testG, 5);
	assert(compare_arrays(testG, 5, correctG, 5) == 0);

	int testH[5] = {8, 8, 8, 7, 8};
	int correctH[5] = {7, 8, 8, 8, 8};
	insertionSort(testH, 5);
	assert(compare_arrays(testH, 5, correctH, 5) == 0);

	int testI[1] = {0};
	int correctI[1] = {0};
	insertionSort(testI, 1);
	assert(compare_arrays(testI, 1, correctI, 1) == 0);

	int testJ[10] = {-6, 3, 3, 40, -40, 10, 23, 40, 11, 9};
	int correctJ[10] = {-40, -6, 3, 3, 9, 10, 11, 23, 40, 40};
	insertionSort(testJ, 10);
	assert(compare_arrays(testJ, 10, correctJ, 10) == 0);

	printf("10 tests passed.\n");
}
