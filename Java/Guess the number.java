import java.util.*;
public class Guess_The_Number {
	
	public static void main(String[] args) {
		
		
		int random=(int)(Math.random()*101);
		
		Scanner entrada= new Scanner(System.in);
		
		int numero=-1;
		
		int intentos=0;
		
		while (numero != random) {
		System.out.println("Please, choose a number");
		numero=entrada.nextInt();
		
		if (random<numero) {
			System.out.println("The random number is lower, try again");
		}
		else if (random>numero) {
			System.out.println("The random number is higher, try again");
		}
		intentos++;
	}
		System.out.println("Correct! You've won after " + intentos + " attempts");

}
}
