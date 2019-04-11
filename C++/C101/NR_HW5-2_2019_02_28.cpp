// Nathaniel Rhein
// Class: TT 3:00 PM
// Due date: 2019-02-28 (Thursday)
// Homework #: 5.2
// Source code: NR_HW5-2_2019-02-28.cpp
// User enters two integers and an operand (+ - * / %), and the program returns the result of the resulting mathematical operation. After each operation, the program asks whether the user would like to perform another one.


/* Algorithm


  YesNo=y // YesNo is initialized to 'y' on the assumption that at least one operation will be performed
  write nINTEGER CALCULATOR 1.0
  while (YesNo==y OR YesNo==Y)
    {
      write "NEW OPERATION"
      write "First integer      : "
      read Num1
      write "Second integer     : "
      read Num2
      write "Operand (+ - * / %): "
      read Opr
      write "                     ";
      write Num1, " ", Opr, " ", Num2, " = " // Displays most of the equation
      switch (Opr) // Calculates and displays the result of the operation
	{
	case '+': write Num1+Num2; break
	case '-': write Num1-Num2; break
	case '*': write Num1*Num2; break
	case '/': write Num1/Num2; break
	case '%': write Num1%Num2; break
	default: write "ERROR: INVALID OPERAND"; break
	}
      write "Would you like to perform another operation? Y/N: "
      read YesNo
    }  
  write "nGoodbye!"


*/


#include <iostream>
using namespace std;

int main()
{
  int Num1, Num2;
  char Opr, YesNo='y'; // YesNo is initialized to 'y' on the assumption that at least one operation will be performed
  cout << "\nINTEGER CALCULATOR 1.0\n";
  while ( (YesNo=='y') || (YesNo=='Y') )
    {
      cout << "\nNEW OPERATION\n";
      cout << "First integer      : ";
      cin >> Num1;
      cout << "Second integer     : ";
      cin >> Num2;
      cout << "Operand (+ - * / %): ";
      cin >> Opr;
      cout << "                     ";
      cout << Num1 << " " << Opr << " " << Num2 << " = "; // Displays most of the equation
      switch (Opr) // Calculates and displays the result of the operation
	{
	case '+': cout << Num1+Num2; break;
	case '-': cout << Num1-Num2; break;
	case '*': cout << Num1*Num2; break;
	case '/': cout << Num1/Num2; break;
	case '%': cout << Num1%Num2; break;
	default: cout << "ERROR: INVALID OPERAND"; break;
	}
      cout << "\n\nWould you like to perform another operation? Y/N: ";
      cin >> YesNo;
    }  
  cout << "\nGoodbye!\n";
}


/* Example output


INTEGER CALCULATOR 1.0

NEW OPERATION
First integer      : 1
Second integer     : 2
Operand (+ - * / %): +
                     1 + 2 = 3

Would you like to perform another operation? Y/N: y

NEW OPERATION
First integer      : 10
Second integer     : 11
Operand (+ - * / %): *
                     10 * 11 = 110

Would you like to perform another operation? Y/N: Y

NEW OPERATION
First integer      : 9
Second integer     : 9
Operand (+ - * / %): 9
                     9 9 9 = ERROR: INVALID OPERAND

Would you like to perform another operation? Y/N: y

NEW OPERATION
First integer      : 9
Second integer     : 5
Operand (+ - * / %): /
                     9 / 5 = 1

Would you like to perform another operation? Y/N: n

Goodbye!


*/
