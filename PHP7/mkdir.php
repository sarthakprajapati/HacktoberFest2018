<?php
$dir = 'new';
if(!file_exists($dir)){
	if(mkdir($dir)){
		echo "Directory has been created";
	}
	else {
		echo "Directory cannot be created";
	}
}
else{
	echo "Directory already Exist";
}
?>