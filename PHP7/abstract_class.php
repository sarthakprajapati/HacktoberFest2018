<?php 
abstract class abs{
	abstract public function name($name);
	abstract public function lastname($lastname);
	// Abstract classes can have properties
  protected $age;
 
  // Abstract classes can have non abstract methods
  public function age($age)
  {
    echo "Age : $age";
	}
}
class person extends abs{
	public function name($name){
		echo "First Name : $name <br>";
	}
	public function lastname($lastname){
		echo "Last Name : $lastname <br>";
	}
}
$obj = new person;
$obj->name("Sarthak");
$obj->lastname("Prajapati");
$obj->age('20');
?>
