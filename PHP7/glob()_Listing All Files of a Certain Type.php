<?php
/* Search the directory and loop through
returned array containing the matched files */
foreach (glob("documents/*.txt") as $file) {
    echo basename($file) . " (size: " . filesize($file) . " bytes)" . "<br>";
}
