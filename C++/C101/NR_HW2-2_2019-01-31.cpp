// Nathaniel Rhein
// Class: TT 3:00 PM
// Due date: 2019-01-31 (Thursday)
// Homework #: 2.2
// Source code: NR_HW2-2_2019-01-31.cpp
// Program asks for a circle's radius, then calculates the circle's area and circumference.


#include <iostream>
using namespace std;

int main()
{
  float Radius;
  float PI = 3.14;
  cout << "\nThis program calculates the area and circumference of a circle.";
  cout << "\nPlease enter the circle's radius: ";
  cin >> Radius;
  cout << "The area of the circle is " << PI*Radius*Radius << ".";
  cout << "\nThe circumference of the circle is " << PI*Radius*2 << ".";
  cout << "\nGoodbye!\n\n";
}


/* Example outputs

This program calculates the area and circumference of a circle.
Please enter the circle's radius: 10
The area of the circle is 314.
The circumference of the circle is 62.8.
Goodbye!

*/
