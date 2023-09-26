import {bubbleSort} from "./bubbleSort.js";
import {assert, assertEquals} from "https://deno.land/std@0.201.0/assert/mod.ts";

Deno.test("Sorting [3, 2, 1]", () => {
	assertEquals(bubbleSort([3, 2, 1]), [1, 2, 3]);
});

Deno.test("Sorting [1, 2]", () => {
	assertEquals(bubbleSort([1, 2]), [1, 2]);
});

Deno.test("Sorting [2, 1]", () => {
	assertEquals(bubbleSort([2, 1]), [1, 2]);
});

Deno.test("Sorting [8, 6, 7, 5, 3, 0, 9]", () => {
	assertEquals(bubbleSort([8, 6, 7, 5, 3, 0, 9]), [0, 3, 5, 6, 7, 8, 9]);
});

Deno.test("Sorting [1004, 33919, 4913, 2, 3123, 444]", () => {
	assertEquals(bubbleSort([1004, 33919, 4913, 2, 3123, 444]), [2, 444, 1004, 3123, 4913, 33919]);
});

Deno.test("Sorting ['b', 'a', 'c', 'k']", () => {
	assertEquals(bubbleSort(['b', 'a', 'c', 'k']), ['a', 'b', 'c', 'k']);
});

Deno.test("Sorting ['quaker', 'shake', 'import', 'new', 'news', 'lettuce', 'apple', 'hamburger']", () => {
	assertEquals(bubbleSort(['quaker', 'shake', 'import', 'new', 'news', 'lettuce', 'apple', 'hamburger']), ['apple', 'hamburger', 'import', 'lettuce', 'new', 'news', 'quaker', 'shake']);
});

Deno.test("Sorting []", () => {
	assertEquals(bubbleSort([]), []);
});

Deno.test("Sorting [[]]", () => {
	assertEquals(bubbleSort([[]]), [[]]);
});

Deno.test("Sorting [[2], [1]]", () => {
	assertEquals(bubbleSort([[2], [1]]), [[1], [2]]);
});
