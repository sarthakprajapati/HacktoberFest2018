<?php

$x = [1 => "Sarthak", 2 => "Prajapati"];
var_dump($x); //We cannot directly show array like echo($x); it results into conversion type

echo("<br><br>" . $x[1]);

$y = ["Sarthak", "Prajapati", "Panjab", "University"];
echo("<br><br>" . $y[0] . "<br><br>");

//Array Functions

//array_change_key_case function changes the case of string of key.
$t = ["Sarthak" => "Prajapati", "Age" => 21, "Hobbies" => "Programming"];
print_r(array_change_key_case($t, CASE_UPPER));
echo("<br><br>");
print_r(array_change_key_case($t, CASE_LOWER));

//array_chunk function splits the array into specified numbers of ararys as specified in the functions
echo("<br><br>");
echo("previous indexes are not maintained i.e default value in preserve_key is FALSE");
$g = [
    "1" => "one",
    "2" => "two",
    "3" => "three",
    "4" => "four",
    "5" => "five",
    "6" => "six",
    "7" => "seven",
    "8" => "eight",
];
print_r(array_chunk($g, 2));

echo("<br><br>");
print_r(array_chunk($g, 2, true));

//array_column
echo("<br><br>");
$record = [
    [
        "id"    => 2001,
        "name"  => "Sarthak",
        "email" => "sarthakprajapati@live.in",
    ],
    [
        "id"    => 2002,
        "name"  => "Uday",
        "email" => "uday.shinghal@gmail.com",
    ],
    [
        "id"    => 2003,
        "name"  => "Gulafsha",
        "email" => "gulafsha6211@gmail.com",
    ],
];
print_r(array_column($record, "name", "id"));

//array_combine()
echo("<br><br>");
$num = [1, 2, 3, 4, 5];
$words = ["one", "two", "three", "four", "five"];
print_r(array_combine($num, $words));

//array_count_values()
echo("<br><br>");
print_r(array_count_values($num));
echo("<br><br>");

//array_diff
$a1 = [1, 2, 3, 4, 5, 6, 7];
$a2 = [3, 4, 5, 6, 7, 8, 9];
print_r(array_diff($a1, $a2));

//array_diff_assoc
$a1 = ["a" => "red", "b" => "green", "c" => "blue", "d" => "yellow"];
$a2 = ["e" => "red", "f" => "green", "g" => "blue"];

$result = array_diff_assoc($a1, $a2);
print_r($result);

//array_diff_key
echo("<br><br>");
$a1 = ["a" => "red", "b" => "green", "c" => "blue"];
$a2 = ["a" => "red", "c" => "blue", "d" => "pink"];

$result = array_diff_key($a1, $a2);
print_r($result);

//array_diff_uassoc()
echo("<br><br>");
function myfunction($a, $b)
{
    if ($a === $b) {
        return 0;
    }

    return ($a > $b) ? 1 : -1;
}

$a1 = ["a" => "red", "b" => "green", "c" => "blue"];
$a2 = ["d" => "red", "b" => "green", "e" => "blue"];

$result = array_diff_uassoc($a1, $a2, "myfunction");
print_r($result);

//array_diff_ukey
echo("<br><br>");
function myfunction1($a, $b)
{
    if ($a === $b) {
        return 0;
    }

    return ($a > $b) ? 1 : -1;
}

$a1 = ["a" => "red", "b" => "green", "c" => "blue"];
$a2 = ["a" => "black", "b" => "yellow", "d" => "brown"];
$a3 = ["e" => "purple", "f" => "white", "a" => "gold"];
$result = array_diff_ukey($a1, $a2, $a3, "myfunction1");
print_r($result);

//array_fill
echo("<br><br>");
$m = array_fill(0, 3, "A");
$n = array_fill(3, 11, "B");
print_r($m);
echo("<br>");
print_r($n);
echo("<br><br>");
//array filter
function test_one($var)
{
    if ($var == 1) {
        return (1);
    } else {
        return 0;
    }
}

$a1 = ["a", "b", 1, 2, 3, 4, 8, 9];
print_r(array_filter($a1, "test_one"));

//array_flip
echo("<br><br>");
$num = [1, 2, 3, 4, 5];
$words = ["one", "two", "three", "four", "five"];
print_r(array_flip(array_combine($num, $words)));
//array_intersect
echo("<br><br>");
$i = [1, 2, 3, 4, 5, 6];
$ii = [3, 5, 6];
print_r(array_intersect($i, $ii));
//array_intersect_assoc
echo("<br><br>");
$q = [1 => "one", 2 => "two", 3 => "three", 4 => "four"];
$w = [2 => "two", 3 => "three", 5 => "five"];
print_r(array_intersect_assoc($q, $w));
//array_intersect_key
echo("<br><br>");
print_r(array_intersect_key($q, $w));
//array_intersect_uassoc
echo("<br><br>");
print_r(array_intersect_uassoc($a1, $a2, "myfunction1"));
//array_key_exists()
echo("<br><br>");
$r = ["Volvo" => "XC90", "BMW" => "X5"];
if (array_key_exists("Volvo", $r)) {
    echo "Key exists!";
} else {
    echo "Key does not exist!";
}
//array_keys()
echo("<br><br>");
print_r(array_keys($r));
//array_map()
echo("<br><br>");
$yo = [3, 5, 6];
function p($var)
{
    return $var * $var;
}

print_r(array_map("p", $yo));
//array_merge()
echo("<br><br>");
print_r(array_merge($i, $ii));
//array_merge_recursive()
echo("<br><br>");
print_r(array_merge_recursive($i, $ii));
//array_multisort()
$kj = [1, 30, 15, 7, 25];
$kl = [4, 30, 20, 41, 66];
$numn = array_merge($kj, $kl);
array_multisort($numn, SORT_DESC, SORT_NUMERIC);
print_r($numn);

//array_pad
echo("<br><br>");
print_r(array_pad($kj, 1, "11"));

echo("<br><br>");
print_r(array_pop($kl));

//array_push()
echo("<br><br>");
array_push($kl, 5, 6);
print_r($kl);

//array_rand
$gh = ["red", "green", "blue", "yellow", "brown"];
$random_keys = array_rand($gh, 3);
echo $gh[$random_keys[0]] . "<br>";
echo $gh[$random_keys[1]] . "<br>";
echo $gh[$random_keys[2]] . "<br>";

function myfunction2($v1, $v2)
{
    return $v1 . "-" . $v2;
}

print_r(array_reduce($gh, "myfunction2"));

//array_replace()
echo("<br><br>");
$a12 = ["red", "green"];
$a23 = ["blue", "yellow"];
print_r(array_replace($a12, $a23));

//array_reverse()
echo("<br><br>");
print_r(array_reverse($r, true));
//array_search()
echo("<br><br>");
$at = ["a" => "red", "b" => "green", "c" => "blue"];
echo array_search("red", $at);
//array_shift()
$aq = ["a" => "red", "b" => "green", "c" => "blue"];
echo array_shift($aq);
print_r($aq);
//array_slice()
echo("<br><br>");
$az = ["red", "green", "blue", "yellow", "brown"];
print_r(array_slice($az, 2));
