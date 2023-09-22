<?php declare(strict_types=1);
use PHPUnit\Framework\TestCase;

require "insertionSort.php";

final class insertionSortTest extends TestCase {
	public function test() {
		$testA = [1];
		$correctA = [1];
		insertionSort::insertionSort($testA);
		$this->assertSame($testA, $correctA);

		$testB = [8, 6, 7, 5, 3, 0, 9];
		$correctB = [0, 3, 5, 6, 7, 8, 9];
		insertionSort::insertionSort($testB);
		$this->assertSame($testB, $correctB);

		$testC = ['Lucy', 'Tom', 'Jared', 'Bill'];
		$correctC = ['Bill', 'Jared', 'Lucy', 'Tom'];
		insertionSort::insertionSort($testC);
		$this->assertSame($testC, $correctC);

		$testD = [1004, 33919, 4913, 2, 3123, 444];	
		$correctD = [2, 444, 1004, 3123, 4913, 33919];
		insertionSort::insertionSort($testD);
		$this->assertSame($testD, $correctD);

		$testE = ['quaker', 'shake', 'import', 'new', 'news', 'lettuce', 'apple', 'hamburger'];	
		$correctE = ['apple', 'hamburger', 'import', 'lettuce', 'new', 'news', 'quaker', 'shake'];
		insertionSort::insertionSort($testE);
		$this->assertSame($testE, $correctE);

	}
}
