// Nathaniel Rhein
// Class: TT 3:00 PM
// Due date: 2019-02-07 (Thursday)
// Homework #: 3.2
// Source code: NR_HW3-2_2019-02-07.cpp
// User enters a year. Program determines whether or not that year is a leap year.


#include <iostream>
using namespace std;

int main()
{
  int Year;
  cout << "\nThis program calculates whether a given year is a leap year.";
  cout << "\nEnter year: ";
  cin >> Year;
  if (Year % 4 != 0)
    {
      cout << "Not a leap year.";
    }
  else
    {
      if (Year % 100 != 0)
	{
	  cout << "Leap year!";
	}
      else
	if (Year % 400 == 0)
	  {
	    cout << "Leap year!";
	  }
	else
	  {
	    cout << "Regular year.";
	  }
    }
  cout << "\nGoodbye!\n\n";
}


/* Example outputs


This program calculates whether a given year is a leap year.
Enter year: 1988
Leap year!
Goodbye!


This program calculates whether a given year is a leap year.
Enter year: 2000    
Leap year!
Goodbye!


This program calculates whether a given year is a leap year.
Enter year: 2001
Not a leap year.
Goodbye!


This program calculates whether a given year is a leap year.
Enter year: 2100
Regular year.
Goodbye!


*/
