// Nathaniel Rhein
// Class: TT 3:00 PM
// Due date: 2019-01-31 (Thursday)
// Homework #: 2.4
// Source code: NR_HW2-4_2019-01-31.cpp
// This program asks for an annual salary, then calculates a new salary (and some other details) based on a 7.6% raise.


/* Algorithm

output "This program calculates the new salary and back pay for recipients of a 7.6% raise."
output "Please enter the employee's current salary: $"
input Salary
Rounder = Salary * 1.076 * 100 + 0.5
NewSalary = Rounder * .01 // This and the previous line round NewSalary to the nearest cent.
output "Retroactive pay: ", (NewSalary - Salary) * 0.5
output "New annual salary: ", NewSalary
output "New monthly salary: ", NewSalary / 12

*/


#include <iostream>
using namespace std;

int main()
{
  int Salary, Rounder;
  float NewSalary;
  cout << "\nThis program calculates the new salary and back pay for recipients of a 7.6% raise.";
  cout << "\nPlease enter the employee's current salary: $";
  cin >> Salary;
  Rounder = Salary*1.076*100+0.5;
  NewSalary = Rounder*.01; // This and the previous line round NewSalary to the nearest cent.
  cout << "\nRetroactive pay    = $" << (NewSalary-Salary)*0.5;
  cout << "\nNew annual salary  = $" << NewSalary;
  cout << "\nNew monthly salary = $" << NewSalary/12;
  cout << "\nGoodbye!\n\n";
}


/* Example outputs

This program calculates the new salary and back pay for recipients of a 7.6% raise.
Please enter the employee's current salary: $35000

Retroactive pay    = $1330
New annual salary  = $37660
New monthly salary = $3138.33
Goodbye!


This program calculates the new salary and back pay for recipients of a 7.6% raise.
Please enter the employee's current salary: $46500

Retroactive pay    = $1767
New annual salary  = $50034
New monthly salary = $4169.5
Goodbye!


This program calculates the new salary and back pay for recipients of a 7.6% raise.
Please enter the employee's current salary: $52450

Retroactive pay    = $1993.1
New annual salary  = $56436.2
New monthly salary = $4703.02
Goodbye!

*/
