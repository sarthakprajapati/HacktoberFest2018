<?php
$myfile = fopen("text.txt", "a+") or die ("Unable to open file");
$txt = " My name is Sarthak Prajapati";
fwrite($myfile, $txt);
fclose($myfile);
