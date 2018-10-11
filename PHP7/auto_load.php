<?php
function __autoload($className) {
 $className = str_replace('..', '', $className);
 require_once("$className.php");
}

$obj1 = new person1;
$obj2 = new person2;