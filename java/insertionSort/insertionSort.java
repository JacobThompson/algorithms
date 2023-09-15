import java.util.Arrays;

class insertionSort {
	public static int[] swap(int[] array, int a, int b) {
		int tmp = array[a];
		array[a] = array[b];
		array[b] = tmp;
		return array;
	}

	public static int[] insertionSortInt(int[] array) {
		int i = 1;
		while(i < array.length) {
			int j = i;
			while(j > 0 && array[j-1] > array[j]) {
				array = swap(array, j, j-1);
			}
			i++;
		}
		return array;
	}

	public static void main(String[] args) {
		int[] a = {2, 1};
		int[] aSorted = insertionSortInt(a);
		System.out.println(Arrays.toString(aSorted));
	}
}
