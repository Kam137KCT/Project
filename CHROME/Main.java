import java.util.Scanner;

public class Main {
	public void func() {
		Scanner Input = new Scanner(System.in);
		System.out.println("Enter INR: ");
		double N = Input.nextInt(); // Problem In Inputing Decimal Values.
		System.out.println("NPR: " + N * 1.61);
		System.out.println("Enter NPR: ");
		double I = Input.nextInt(); // Problem In Inputing Decimal Values.
		System.out.println("INR: " + I / 1.61);
	}
	public static void main(String[] args) {
		Main Obj = new Main();
		Obj.func();
	}
}

