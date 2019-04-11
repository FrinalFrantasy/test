// Nathaniel Rhein
// Class: TT 3:00 PM
// Due date: 2019-02-07 (Thursday)
// Homework #: 3.3
// Source code: NR_HW3-3_2019-02-07.cpp
// User enters two integers from -180 to 180. Program tells them the result of multiplying the two numbers together, and the result of dividing the first number by the second.


#include <iostream>
using namespace std;

int main()
{
  int NumOne, NumTwo;
  cout << "\nEnter an integer between -180 and 180: ";
  cin >> NumOne;
  if (NumOne >= -180 && NumOne <= 180)
    {
      cout << "Enter another integer between -180 and 180: ";
      cin >> NumTwo;
      if (NumTwo >= -180 && NumOne <= 180)
	{
	  cout << "\n    " << NumOne << "        " << NumOne/NumTwo << " R " << NumOne % NumTwo;
	  cout << "\nx    " << NumTwo << "        ______";
	  cout << "\n  -----    " << NumOne << "|" << NumTwo;
	  cout << "\n   " << NumOne*NumTwo << "\n";
	}
    }
  cout << "\nGoodbye!\n";
}


/* Example outputs


Enter an integer between -180 and 180: 125
Enter another integer between -180 and 180: 34

    125        3 R 23
x    34        ______
  -----    125|34
   4250


Enter an integer between -180 and 180: 157
Enter another integer between -180 and 180: 16

    157        9 R 13
x    16        ______
  -----    157|16
   2512

Goodbye!


*/
