

<?php 
class point{
	private $x;
	private $y;

	public function __construct($x,$y){
		$this->x=$x;
		$this->y=$y;
	}

	public function setX($x){
		$this->x=$x;
	}

	public function getX(){
		return $this->x;
	}

	public function setY($x){
		$this->x=$x;
	}

	public function getY(){
		return $this->x;
	}

	public static function compare($p1,$p2){
 		return $p1 == $p2;
	}

}



$p1 = new point(10,20);
$p2 = new point(10,20);
$p3 = new point(10,20);

$p4 = $p3;

if(Point::compare($p1, $p2)){
 echo 'p1 and p2 are equal <br/>';
}
else{
 echo 'p1 and p2 are not equal <br/>';
}

if($p1 === $p3){
 echo 'p1 and p3 are identical</br>';
}else{
 echo 'p1 and p3 are not identical</br>';
}

if($p4 === $p3){
 echo 'p4 and p3 are identical</br>';
}else{
 echo 'p4 and p3 are not identical</br>';
}
?>