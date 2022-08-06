import java.util.Scanner;

public class Learn_Main {
	String N = "Hello World";
	
	static void Function() { // Funciton in java
		System.out.println("Hello World");
	}
   public static void main(String[] args) {
   	Function();

   	Scanner input = new Scanner(System.in); // Using import form java to get Scanner module to get input from user 
   	System.out.println("Enter a name:")
   	String Name = input.next();

   	int  x = 13; // Integer which stores whole numbers
   	Stirng N = "Badal"; // String which stores whole list of characters
   	float F = 1.23; // Float which stores decimal numbers;
   	long L = 1243433.44544; // Long which sotres long numbers and list of characters
   	boolean A = true; // Boolean which sotres values which are Ture or False
   	char C = 'A'; // Character which stores singel char like 'A', 'B', 'C'
		final int c = 12334; // It is a variable which stores const variable
   	System.out.println("Kamumaki Kanjo"); // Command which prints the value store in a variable or prints the number or strings

		// Logical operaotrs && (And), || (Or) !(Not)

		int numbers = {1, 2, 3, 4, 5, 6, 7} // It is a list or array where we can store list of objects.
		// Multi-Dimensional Arrays
		int[2][3] = matirx = new int[2][3]; // Long
		matirx[0][0] = 10;

		int [2][3] = matirx { // Shortcut
			{1, 2, 3},
			{4, 5, 6}
		};
		if (x == 13) { // Using if, elif and else condintion using also can be used for logical operaions.
			System.out.println("Hello World");
		} else if (N == "Badal") {
			Sysem.out.println("Kamumaki Kanjo")
		} else {
			System.out.println("It is not executable")
		}

		String Ninja = "Badal Thapa";
		String Assasian = "Kamumaki Kanjo";

		if Ninja == "Badal Thapa" && Assasian == "Kamumaki Kanjo" {
			System.out.println("Hello World");
			continue; // It is use to continue a loop or statement it is true
		}
		elif Ninja != "Badal Thapa" {
			System.out.println("It is wrong")
			break; // It is use to break a loop or statement
		}

		switch (x) = { // It is switch statement which switches to execute different parts of code.
			case 1:
				System.out.println("Hello World");
			case 2:
				System.out.println("Kamumaki Kanjo");
		}

   	final int i = 1; // Using while loop condition to loop a block of code until and special condition is reached.
   	while i <= 5 {
   		i += 1;
   		System.out.println(i);
   	}

		for (int i=5; i < 10; i++) { // Using for loop condintion to loop through a block of code. 
			System.out.println(i);
		}

      Main obj = new Main();
      System.out.println(obj.N);
   }
}
