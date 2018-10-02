<?php
// Define a function to output files in a directory
function outputFiles($path)
{
    // Check directory exists or not
    if (file_exists($path) && is_dir($path)) {
        // Search the files in this directory
        $files = glob($path . "/*");
        if (count($files) > 0) {
            // Loop through retuned array
            foreach ($files as $file) {
                if (is_file("$file")) {
                    // Display only filename
                    echo basename($file) . "<br>";
                } else {
                    if (is_dir("$file")) {
                        // Recursively call the function if directories found
                        outputFiles("$file");
                    }
                }
            }
        } else {
            echo "ERROR: No such file found in the directory.";
        }
    } else {
        echo "ERROR: The directory does not exist.";
    }
}

// Call the function
outputFiles("mydir");
