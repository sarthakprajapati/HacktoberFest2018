<?php
$name = ' mY name "iS" Sarthak PrAjApAtI';
print_r("Add backlashes in <h3>[addslashes]</h3>" . addslashes($name));
print_r("<br> Add backslashes at specified character <h3>[addcslashes]</h3>" . addcslashes($name, "P"));
print_r("<br> Convert a string of ASCII to hexadecimal codes is <h3>[bin2hex]</h3> " . bin2hex($name));
print_r("<br> Remove whited spaces or other characters from the right end of the strig <h3>[chop]</h3>" . chop($name,
        "name"));
print_r("<br> Returns a characters from specified ASCII value <h3>[chr]</h3>" . chr(107));
print_r("<br> Splits a string into a smaller parts <h3>[chunk_split]</h3>" . chunk_split($name, 1, "."));
print_r("<br> count character information used in string <h3>[count_chars]</h3>" . count_chars($name));
print_r("<br> Splits a string into a smaller parts <h3>[chunk_split]</h3>" . chunk_split($name, 1, "."));
print_r("<br>Calculates a 32-bit CRC for a string <h3>[crc32]</h3>" . crc32($name));
print_r("<br> One-way string hashing <h3>[crypt]</h3>" . crypt($name));
print_r("<br> Breaks string into array <h3>[explode]</h3>" . explode(" ", $name));
print_r(explode(" ", $name));
print_r("<br> Converts a string of Hexadecimal values to ASCII Characters <h3>[hex2bin]</h3>" . hex2bin("206d59206e616d652022695322205361727468616b205072416a4170417449"));
print_r("<br><br> Length of the string" . strlen($name));
