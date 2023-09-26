"use strict"

function swap(array, a, b) {
	const tmp = array[a];	
	array[a] = array[b];
	array[b] = tmp;
}

export function bubbleSort(array) {
	let sortedIndex = array.length;

	while(sortedIndex > 0) {
		let swapped = false;
		for(let i = 0, j = 1 ; j < sortedIndex ; i++, j++) {
			if(array[i] > array[j]) {
				swap(array, i, j);
				swapped = true;
			}
		}
		if(!swapped) break;
		sortedIndex--;
	}

	return array;
}

function main() {
	let toSort = [];
	for(const a of Deno.args) {
		toSort.push(a);
	}
	if(toSort.length == 0) return;
	console.log(bubbleSort(toSort));
}

main();
