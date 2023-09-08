"use strict"

function swap(arr, a, b) {
	const tmp = arr[a];
	arr[a] = arr[b];
	arr[b] = tmp;
	return arr;
}

export default function insertionSort(arr) {
	let i = 1;
	while(i < arr.length) {
		let j = i;
		while(j > 0 && arr[j-1] > arr[j]) {
			swap(arr, j, j-1);
			j--;
		}
		i++;
	}
	return arr;
}

function main() {
	let toSort = [];
	if(Deno.args.length == 0) {
		console.error("Please provide 1 or more arguments to sort");
		Deno.exit();
	}
	for(const a of Deno.args) {
		toSort.push(a);	
	}
	console.log(insertionSort(toSort));
}

main();
