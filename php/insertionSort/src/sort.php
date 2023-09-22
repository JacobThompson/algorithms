<?php
require "insertionSort.php";

if(count($argv) <=1) {
	echo "Provide at least one argument to be sorted";
	exit;
}

array_shift($argv);
insertionSort::insertionSort($argv);

foreach($argv as $item) {
	echo $item . " ";
}

echo "\n";
