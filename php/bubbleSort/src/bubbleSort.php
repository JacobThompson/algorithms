<?php

class bubbleSort {
	private static function swap(&$array, $a, $b) {
		$tmp = $array[$a];
		$array[$a] = $array[$b];
		$array[$b] = $tmp;
	}

	public static function bubbleSort(&$array) {
		$sortedIndex = sizeof($array);

		$swapped = false;

		while($sortedIndex > 0) {
			for($i = 0, $j = 1 ; $j < $sortedIndex ; $i++, $j++) {
				if($array[$i] > $array[$j]) {
					bubbleSort::swap($array, $i, $j);				
					$swapped = true;
				}	
			}
			if(!$swapped) break;
			$sortedIndex--;
		}

		return $array;
	}
}
