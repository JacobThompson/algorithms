#include <stdio.h>
#include <assert.h>

void swap(int * array, int a, int b) {
	int temp = array[a];
	array[a] = array[b];
	array[b] = temp;
}

void insertionSort(int * array, int arrayLength) {
	int i = 1;		
	while(i < arrayLength) {
		int j = i;
		while(j > 0 && array[j-1] > array[j]) {
			swap(array, j, j-1);
			j--;
		}
		i++;
	}
}

