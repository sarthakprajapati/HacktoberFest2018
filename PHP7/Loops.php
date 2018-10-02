<html>
<head> <title>Day 3 Conditional Loops</title>
	</head>
<body>
	<?php
  #For Loop in PHP5
  echo("<h3>For loop in php5 from 0 to 10 </h3>");
  for ($i = 0; $i <= 10; $i++) {
      echo($i . "<br>");
  }

  #While Loop in PHP5
  $x = 0;
  echo("<h3>While Loop in Php5</h3>");
  while ($x < 10) {
      echo($x . "<br>");
      $x += 1;
  }

  #Do-While Loop in PHP5
  $x = 0;
  echo("<h3> Do-While Loop in Php5</h3>");
  do {
      echo($x . "<br>");
      $x += 1;
  } while ($x < 10);

  #Foreach Loop in PHP5
  echo("<h3>Foreach Loop in Php5</h3>");
  $arr = [10, 20, 30, 40, 50, 60];
  foreach ($arr as $val) {
      echo($val . "<br>");
  }
  ?>

</body>
</html>
