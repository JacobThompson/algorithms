CC=gcc

build: insertionSort.c insertionSort.h cli.c
	$(CC) insertionSort.c insertionSort.h cli.c -o insertionSort

test: insertionSort.c insertionSort.h insertionSort.test.c
	$(CC) insertionSort.c insertionSort.h insertionSort.test.c -o insertionSortTests

clean:
	rm insertionSort insertionSortTests
