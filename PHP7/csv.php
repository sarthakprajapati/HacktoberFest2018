<?php
$data = array(array('Symbol','Company','Price'),
array('GOOG','Google Inc.','800'),array('AAPL','Apple Inc.','500'),
array('AMZN','Amazon.com','250'),
array('YHOO','Yahoo! Inc.','250'),
array('FB','Facebook','30'),);

$file = fopen("file.csv",'w');

foreach ($data as $rec) {
	fputcsv($file, $rec);
}
fclose($file);

 ?>