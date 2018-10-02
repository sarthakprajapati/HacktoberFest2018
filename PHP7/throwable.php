<?php
//Error as Throwable
try {
    sarthak();
} catch (Throwable $t) {
    echo "Throwable: " . $t->getMessage() . "<br>";
}
//Exception as Throwable
try {
    throw new Exception("sarthak");
} catch (Throwable $t) {
    echo "Throwable: " . $t->getMessage() . "<br>";
}
//Error
try {
    sarthak();
} catch (Error $e) {
    echo "Error: " . $e->getMessage() . "<br>";
} catch (Exception $e) {
    echo "Exception: " . $e->getMessage() . "<br>";
}
//Exception
try {
    throw new Exception("sarthak");
} catch (Error $e) {
    echo "Error: " . $e->getMessage() . "<br>";
} catch (Exception $e) {
    echo "Exception: " . $e->getMessage() . "<br>";
}
//Type error
try {
    function add(int $a, int $b): int
    {
        return $a + $b;
    }

    echo add([], []);
} catch (TypeError $t) {
    echo "Type error: " . $t->getMessage() . "<br>";
}
