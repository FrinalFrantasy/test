// Nathaniel Rhein
// Class: TT 3:00 PM
// Due date: 2019-01-31 (Thursday)
// Homework #: 2.3
// Source code: NR_HW2-3_2019-01-31.cpp
// Program asks for a quantity of days, then calculates how many years are in that quantity.


#include <iostream>
using namespace std;

int main()
{
  int Days;
  cout << "\nThis program calculates how many years are in a given quantity of days.";
  cout << "\nPlease enter the total quantity of days: ";
  cin >> Days;
  cout << Days/365 << " years and " << Days%365 << " days.";
  cout << "\nGoodbye!\n\n";
}


/* Example outputs

This program calculates how many years are in a given number of days.
Please enter the total number of days: 364
0 years and 364 days.
Goodbye!

This program calculates how many years are in a given number of days.
Please enter the total number of days: 366
1 years and 1 days.
Goodbye!

This program calculates how many years are in a given number of days.
Please enter the total number of days: 36500
100 years and 0 days.
Goodbye!

*/
