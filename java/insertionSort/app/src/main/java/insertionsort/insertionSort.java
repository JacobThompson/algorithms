package javaAlgorithms;

import java.util.Arrays;


class insertionSort {
	public static void swap(int[] array, int a, int b) {
		int tmp = array[a];
		array[a] = array[b];
		array[b] = tmp;
	}

	public static void insertionSortInt(int[] array) {
		int i = 1;
		while(i < array.length) {
			int j = i;
			while(j > 0 && array[j-1] > array[j]) {
				swap(array, j, j-1);
				j--;
			}
			i++;
		}
	}

	public static void main(String[] args) {
		int[] a = {3, 2, 1, 0};
		insertionSortInt(a);
		System.out.println(Arrays.toString(a));
	}
}
