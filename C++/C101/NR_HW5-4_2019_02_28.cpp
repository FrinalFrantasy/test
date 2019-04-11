// Nathaniel Rhein
// Class: TT 3:00 PM
// Due date: 2019-02-28 (Thursday)
// Homework #: 5.4
// Source code: NR_HW5-4_2019-02-28.cpp
// The user enters positive integers. The program notifies the user if an integer is both odd and a multiple of 3; program also displays the last digit of such numbers. The program exits when the user enters a '0'.


#include <iostream>
using namespace std;

int main()
{
  unsigned int Number=1;
  cout << endl;
  while (Number!=0)
    {
      cout << "Please enter a positive integer: ";
      cin >> Number;
      if ( (Number%2==1) && (Number%3==0) )
	{
	  cout << "This number is odd, is divisible by 3, and its final digit is " << Number%10 << endl;
	}
      else
	{
	  cout << "This number does not work." << endl;
	}
      cout << endl;
    }
}


/* Example output


Please enter a number: 1
This number does not work.

Please enter a number: 2
This number does not work.

Please enter a number: 3
This number is odd, is divisible by 3, and its final digit is 3

Please enter a number: 6
This number does not work.

Please enter a number: 9
This number is odd, is divisible by 3, and its final digit is 9

Please enter a number: 15
This number is odd, is divisible by 3, and its final digit is 5

Please enter a number: 0
This number does not work.


*/
