// Nathaniel Rhein
// Class: TT 3:00 PM
// Due date: 2019-02-28 (Thursday)
// Homework #: 5.3
// Source code: NR_HW5-3_2019-02-28.cpp
// User enters positive integers. When a 0 is entered, the program calculates and displays the total number of even numbers entered (not including the terminating 0).


#include <iostream>
using namespace std;

int main()
{
  unsigned int Number=1;
  int Total=-1; // Total is initialized to -1 to account for the terminating 0.
  cout << endl;
  while (Number!=0)
       {
	 cout << "Please enter a positive integer (or 0 to quit): ";
	 cin >> Number;
	 if (Number%2==0)
	   {
	     Total++;
	   }
       }
  cout << "\nUser entered " << Total << " even numbers.";
  cout << "\nGoodbye!\n";
}


/* Example output



Please enter a positive integer (or 0 to quit): 3
Please enter a positive integer (or 0 to quit): 56
Please enter a positive integer (or 0 to quit): 4
Please enter a positive integer (or 0 to quit): 13
Please enter a positive integer (or 0 to quit): 779
Please enter a positive integer (or 0 to quit): 46
Please enter a positive integer (or 0 to quit): 0

User entered 3 even numbers.
Goodbye!



Please enter a positive integer (or 0 to quit): 0

User entered 0 even numbers.
Goodbye!



*/
