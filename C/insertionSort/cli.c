#include <stdio.h>
#include <stdlib.h>
#include "insertionSort.h"

void prettyPrintArray(int * array, int size) {
	printf("{");
	for(int i = 0 ; i < size ; i++) {
		if(i == size - 1) {
			printf("%d", array[i]);
		}
		else {
			printf("%d, ", array[i]);
		}
	}
	printf("}\n");
}

/*
 * Takes cli input and sorts the arguments.
 * NOTE: arguments must be integers!
 */
int main(int argc, char * argv[]) {
	int argLength = argc - 1;
	int input[argLength];

	for(int i = 1 ; i < argc ; i++) {
		input[i-1] = atoi(argv[i]);
	}
	
	insertionSort(input, argLength);	
	prettyPrintArray(input, argLength);
}
