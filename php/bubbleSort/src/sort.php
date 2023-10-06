<?php
require "bubbleSort.php";

if(count($argv) <=1) {
	echo "Provide at least one argument to be sorted";
	exit;
}

array_shift($argv);
bubbleSort::bubbleSort($argv);

foreach($argv as $item) {
	echo $item . " ";
}

echo "\n";
