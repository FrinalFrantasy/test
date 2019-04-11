// Nathaniel Rhein
// Class: TT 3:00 PM
// Due date: 2019-02-21 (Thursday)
// Homework #: 4.3
// Source code: NR_HW4-3_2019-02-21.cpp
// User enters integers until their sum is more than 35. Program then tells the user the sum, as well as the last number entered.


#include <iostream>
using namespace std;

int main()
{
  int Number, Sum=0;
  cout << "\n";
  while (Sum<=35)
    {
    cout << "Please enter number: ";
    cin >> Number;
    Sum=Sum+Number;
    }
  cout << "\nLast number entered: " << Number;
  cout << "\nSum of all numbers: " << Sum << "\n\n";
}


/* Example outputs


Please enter number: 1
Please enter number: 2
Please enter number: 3
Please enter number: 4
Please enter number: 5
Please enter number: 6
Please enter number: 7
Please enter number: 8

Last number entered: 8
Sum of all numbers: 36



Please enter number: 10
Please enter number: 10
Please enter number: 10
Please enter number: 5
Please enter number: 0
Please enter number: 1

Last number entered: 1
Sum of all numbers: 36


*/
