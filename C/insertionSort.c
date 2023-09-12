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

#ifndef TEST
int main(int argc, char * argv[]) {
	int i[7] = {8, 6, 7, 5, 3, 0, 9};
	insertionSort(i, 7);

	for(int l = 0 ; l < 7; l++) {
		printf("%d", i[l]);	
	}
	return 0;	
}
#endif
