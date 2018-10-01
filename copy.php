<?php
// Source file path
$file = "example.txt";
 
// Destination file path
$newfile = "backup/example.txt";
 
// Check the existence of file
if(file_exists($file)){
    // Attempt to copy file
    if(copy($file, $newfile)){
        echo "File copied successfully.";
    } else{
        echo "ERROR: File could not be copied.";
    }
} else{
    echo "ERROR: File does not exist.";
}
?>