// Learning C++ Programming Langugage.
#include <iostream> // Library which allows us to perform input and output.
#include <string>  // Library wihich allows us to work with strings.
#include <cmath> // Library which allows to work with maths.
#include <fstream> // Library which allows to work with files.
using namespace std;

class main { // Object Oriented Programming
  public:
    void name(string first, string last) {
      cout << first + last << endl;
    }
};

void function() {
  cout << "Kamumaki Kanjo";
}

int myNumber(int x, int y) { // Function which returns the value. 
  return x + y;
}

string func(string x, string y) {
  return x + y;
}

int main() {
  main Obj;
  Obj.name("Hello", "World!");
  function();
	cout << myNumber(1, 1);
  cout << func("Hello", "World");
  // Data types
  int X = 1; // Integer variable
  string N = "Hello World"; // String variable
  bool T = true; // Boolean variable
  bool F = false;
  char C = 'B'; // Character variable
  double Y = 123.4343545; // Double variable

  std::cout << X << endl; // Output of the variable 
  std::cout << N << endl;
  cout << T << endl;
  cout << F << "\n";
  cout << C << endl;
  cout << Y << "\n";

  // Concatenation
  string First_Name = "Badal";
  string Last_Name = "Thapa";
  string Full_Name = First_Name + Last_Name;
  std::cout << Full_Name << endl;

  /* + Addition, - Subtraction, * Multiplication, / Division, % Modulus, ++ Increment, -- Decrement */

  int First; // User inputs 
  cout << "Enter first number: " << endl;
  cin >> First;
  int Second;
  cout << "Enter second number: " <<  endl;
  cin >> Second;
  int Sum = First + Second;
  cout << "Sum is: " << Sum;

  string Name;
  cout << "Enter full name: ";
  getline (cin, Name);
  cout << Name << endl;

  // If, Elif and Else condition.
  int Number_1 = 13;
  int Number_2;
  cout << "Enter number" << "\n";
  cin >> Number_2;
  if (Number_1 == Number_2) {
  	std::cout << "Have a good day." << endl;
  } else if (Number_1 != Number_2) {
  	std::cout << "Have a good evening" << endl;
  } else {
  	std::cout << "Fuck You." << endl;
  }
  
  // Switch condition
  // Some keywords like :- break, default;
  int Day;
  cout << "Enter a day: ";
  cin >> Day;
  switch (Day) {
  	case 1:
  		cout << "It is sunday." << "\n";
  		break;
  	case 2:
  		cout << "It is Monday." << "\n";
  		break;
  	case 3:
  		cout << "It is Tuesday." << "\n";
  		break;
  	case 4:
  		cout << "It is Wednesday." << "\n";
  		break;
  	case 5:
  		cout << "It is Thursday." << "\n";
  		break;
  	case 6:
  		cout << "It is Friday." << "\n";
  		break;
  	case 7: 
  		cout <<  "It is Saturday." << "\n";
  		break;
  }

  // While Do and For Loops condition
  int i = 1;
  while (i < 8) { // While Loop
  	cout << i << endl;
  	i++;
  }

  do { // Do Loop
  	cout << i << endl;
  	i++;
  }
  while (i < 9);

  for (a=1; a<=10; a++) { // For Loop
  	/*
  	if (a == 5) {
		break; or continue;
  	}
  	*/
  	cout << a << endl;
  }

  // Array condition
  string Array[5] = {"Badal", "Khagi", "Yamu", " Purnima", "Divya", "Kamumaki"};
  for (i=0; i<5; i++) {
  	cout << array[i] << endl;
  }

  /* ofstream: creates and writes to files, ifsream: reades from files.
  fstream library: combination of ifstream and fstream. */
  // Object/data types :- ostream - creates and writes files and istream - read files
  ostream My_File("File.txt");
  My_File << "Hello World";
  MyFile.close();

  /* Learning OOP: 
    class, access specifier, attribute and methods */

  return 0;
}
