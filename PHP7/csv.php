<?php
$data = [
    ['Symbol', 'Company', 'Price'],
    ['GOOG', 'Google Inc.', '800'],
    ['AAPL', 'Apple Inc.', '500'],
    ['AMZN', 'Amazon.com', '250'],
    ['YHOO', 'Yahoo! Inc.', '250'],
    ['FB', 'Facebook', '30'],
];

$file = fopen("file.csv", 'w');

foreach ($data as $rec) {
    fputcsv($file, $rec);
}
fclose($file);
