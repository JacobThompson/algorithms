<?php

class insertionSort {
	private static function swap(&$array, $a, $b) {
		$tmp = $array[$a];
		$array[$a] = $array[$b];
		$array[$b] = $tmp;
	}

	public static function insertionSort(&$array) {
		$i = 1;	
		while($i < count($array)) {
			$j = $i;	
			while($j > 0 && $array[$j-1] > $array[$j]) {
				self::swap($array, $j, $j-1);
				$j--;
			}
			$i++;
		}
	}
}
