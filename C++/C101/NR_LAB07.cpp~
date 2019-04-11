// Nathaniel Rhein
// Class: TT 3:00 PM
// Due date: 2019-03-28 (Thursday)
// Homework #: 7.1
// Source code: NR_HW7-1_2019-03-28.cpp
// User enters a quantity of seconds, and the program returns how many hours, minutes, and seconds it equals.


#include <iostream>
#include <iomanip>
using namespace std;

void TimeCalc(int Seconds);

int main()
{
  int Seconds;
  do
    {
      cout << "\nEnter Total Seconds --> ";
      cin >> Seconds;
      if (Seconds==0) break;
      TimeCalc(Seconds);
    }
  while (Seconds!=0);
  cout << "Goodbye!\n";
}

void TimeCalc(int Seconds)
{
  cout << setfill('0') << Seconds/3600 << ":" << setw(2);
  cout << (Seconds%3600)/60 << ":" << setw(2) << Seconds%60; 
}

/* Example output

Enter Total Seconds --> 1
0:00:01
Enter Total Seconds --> 123
0:02:03
Enter Total Seconds --> 123456
34:17:36
Enter Total Seconds --> 3605
1:00:05
Enter Total Seconds --> 0
Goodbye!

*/
