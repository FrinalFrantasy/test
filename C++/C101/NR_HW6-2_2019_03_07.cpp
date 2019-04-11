// Nathaniel Rhein
// Class: TT 3:00 PM
// Due date: 2019-03-07 (Thursday)
// Homework #: 6.2
// Source code: NR_HW6-2_2019-03-07.cpp
// Program calculates the result of starting with $0.01 on Day 1, then doubling that amount until Day 30 (reaching well over five million dollars).


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  double Dollars=.01;

  cout << "Day" << setw(20) << "Amount\n";
  cout << "---" << setw(20) << "------\n";
  for (int Day=1; Day <= 30; Day++)
    {
      cout << setw(3) << Day << setw(14) << "$" << Dollars << "\n";
      Dollars*=2;
    }
  
}


/* Example output

Day             Amount
---             ------
  1             $0.01
  2             $0.02
  3             $0.04
  4             $0.08
  5             $0.16
  6             $0.32
  7             $0.64
  8             $1.28
  9             $2.56
 10             $5.12
 11             $10.24
 12             $20.48
 13             $40.96
 14             $81.92
 15             $163.84
 16             $327.68
 17             $655.36
 18             $1310.72
 19             $2621.44
 20             $5242.88
 21             $10485.8
 22             $20971.5
 23             $41943
 24             $83886.1
 25             $167772
 26             $335544
 27             $671089
 28             $1.34218e+06
 29             $2.68435e+06
 30             $5.36871e+06

*/
