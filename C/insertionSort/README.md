# Insertion Sort implementation in C.

This is an implementation of insertion sort in c. It depends on GCC and Make to compile.

This build supports the following gcc version and environment: gcc (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0

There is 2 modes it can be run with, testing mode, and command line interface mode.

To build in CLI mode run the following command within the insertionSort folder:

```
make
```

And then to sort command line arguments, run the following:

```
./insertionSort {arguments to sort}
```

Example: 

```
./insertionSort 8 6 7 5 3 0 9
```

Result:

```
{0, 3, 5, 6, 7, 8, 9}
```

Please note that only integers are supported at this time. Input of non integers will result in undefined behavior!

To build a test binary and run tests, run the following commands within the insertionSort folder:

```
make test
./insertionSortTests
```

To clean up, run:

```
make clean
```
