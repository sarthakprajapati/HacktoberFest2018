<?php
$csv_file = 'file.csv';
$fh = fopen($csv_file, 'r') or die("Error occurred when open the file " . $csv_file);
$data = [];
while ($rec = fgetcsv($fh)) {
    $data[] = $rec;
}
fclose($fh);
var_dump($data);
