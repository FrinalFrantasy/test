// Nathaniel Rhein
// Class: TT 3:00 PM
// Due date: 2019-04-02 (Tuesday)
// Homework #: 8
// Source code: NR_HW8_2019-04-02.cpp
// This program takes two fractions and adds them together, simplifying (but not making proper) the result. The entire equation, including result, is then displayed in a visually pleasing format.

#include <iostream>
#include <iomanip>
using namespace std;

void EnterNumbers(int &Num1, int &Den1, int &Num2, int &Den2);
void FindSum(int Num1, int Den1, int Num2, int Den2, int &Num3, int &Den3);
void FindGCD(int &Num3, int &Den3);
void DisplayResult(int Num1, int Den1, int Num2, int Den2, int Num3, int Den3);

// Calls other functions, and gives user the option of exiting the program.
int main()
{
  int Num1,Den1,Num2,Den2,Num3,Den3;
  char Choice;
  do
    {
      cout << "\n\n";
      cout << "This porgram adds fractions. 'Y' continues, any other key exits program\n";
      cout << "=======================================================================\n";
      EnterNumbers(Num1,Den1,Num2,Den2);
      FindSum(Num1,Den1,Num2,Den2,Num3,Den3);
      FindGCD(Num3,Den3);
      DisplayResult(Num1,Den1,Num2,Den2,Num3,Den3);
      cout << "-----------------------------------------------------------------------\n";
      cout << "Continue? Y or N! ==> ";
      cin >> Choice;
    }
  while ((Choice=='Y') || (Choice=='y'));
  cout << "Goodbye!\n\n";
}

// Takes input for the two fractions to be added.
void EnterNumbers(int &Num1, int &Den1, int &Num2, int &Den2)
{
  cout << "Enter   numerator 1 ==> ";
  cin >> Num1;
  cout << "Enter denominator 1 ==> ";
  cin >> Den1;
  cout << endl;
  cout << "Enter   numerator 2 ==> ";
  cin >> Num2;
  cout << "Enter denominator 2 ==> ";
  cin >> Den2;
}

// Adds the two fractions together to find the result.
void FindSum(int Num1, int Den1, int Num2, int Den2, int &Num3, int &Den3)
{
  Num3 = (Num1*Den2) + (Den1*Num2);
  Den3 = (Den1*Den2);
}

// Simplifies the result by finding and dividing its numerator and denominator by their Greatest Common Divisor.
void FindGCD(int &Num3, int &Den3)
{
  int GCD=Num3;
  while ((Num3%GCD!=0) || (Den3%GCD!=0))
    {
      GCD--;
    }
  Num3/=GCD;
  Den3/=GCD;
}

// Displays the whole equation, including the simplified result.
void DisplayResult(int Num1, int Den1, int Num2, int Den2, int Num3, int Den3)
{
  cout << "\n";
  cout << setw(2) << Num1 << setw(8) << Num2 << setw (8) << Num3;
  cout << "\n---  +  ---  =  ---\n";
  cout << setw(2) << Den1 << setw(8) << Den2 << setw (8) << Den3;
  cout << "\n\n";
}


/* Example output

This porgram adds fractions. 'Y' continues, any other key exits program
=======================================================================
Enter   numerator 1 ==> 1
Enter denominator 1 ==> 2

Enter   numerator 2 ==> 3
Enter denominator 2 ==> 4

 1       3       5
---  +  ---  =  ---
 2       4       4

-----------------------------------------------------------------------
Continue? Y or N! ==> y


This porgram adds fractions. 'Y' continues, any other key exits program
=======================================================================
Enter   numerator 1 ==> 1
Enter denominator 1 ==> 3

Enter   numerator 2 ==> 1
Enter denominator 2 ==> 6

 1       1       1
---  +  ---  =  ---
 3       6       2

-----------------------------------------------------------------------
Continue? Y or N! ==> Y 


This porgram adds fractions. 'Y' continues, any other key exits program
=======================================================================
Enter   numerator 1 ==> 19
Enter denominator 1 ==> 4

Enter   numerator 2 ==> 17
Enter denominator 2 ==> 14

19      17     167
---  +  ---  =  ---
 4      14      28

-----------------------------------------------------------------------
Continue? Y or N! ==> n
Goodbye!

*/
