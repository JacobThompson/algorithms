namespace lib;
using System;

public class InsertionSort {
	private static void Swap(double[] array, int a, int b) {
		double temp = array[a];
		array[a] = array[b];
		array[b] = temp;
	}

	public void Sort(double[] array) {
		int i = 1;
		while(i < array.Length) {
			int j = i;
			while(j > 0 && array[j-1] > array[j]) {
				Swap(array, j, j-1);	
				j--;
			}
			i++;
		}
	}
}

public class UserInterface{
	public static void Main() {
		InsertionSort IS = new InsertionSort();
		double[] a = {2, 1};
		IS.Sort(a);
		Console.Write(a);
	}
}
