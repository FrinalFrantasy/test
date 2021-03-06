// Nathaniel Rhein
// Class: TT 3:00 PM
// Due date: 2019-03-28 (Thursday)
// Homework #: 7.2
// Source code: NR_HW7-2_2019-03-28.cpp
// User enters an integer in the range 1-100. The program outputs whether that integer is even or odd, and the sum of all integers from that one down to 1.


/* Algorithm

f main
  do
    {
      out "Enter a number between 1 and 100, please: "
      in Num
      if Num<1 or Num>100 break
      Eve = EvenCheck(Num)
      Tri = Triangular(Num)

      if Eve==1 out "This number is EVEN."
      else out "This number is ODD."

      out "The sum of all positive integers from 1 to "
      out Num " is " Tri << "."
    }
  while Num>=1 and Num<=100
  out "Goodbye!"


f EvenCheck
  if Num%2==0 Even=true
  else Even=false
  return Even

f Triangular
  Triangle=Num*(Num/2.0+.5)
  return Triangle;

*/


#include <iostream>
using namespace std;

int EvenCheck(int Num);
int Triangular(int Num);

int main()
{
  int Num, Eve, Tri;
  do
    {
      cout << "\nEnter a number between 1 and 100, please: ";
      cin >> Num;
      if ((Num<1) || (Num>100)) break;
      Eve=EvenCheck(Num);
      Tri=Triangular(Num);

      if (Eve==1) cout << "This number is EVEN.";
      else cout << "This number is ODD.";

      cout << "\nThe sum of all positive integers from 1 to ";
      cout << Num << " is " << Tri << ".\n";
    }
  while ((Num>=1) && (Num<=100));
  cout << "\nGoodbye!\n";
}

int EvenCheck(int Num)
{
  bool Even;
  if (Num%2==0) Even=true;
  else Even=false;
  return Even;
}

int Triangular(int Num)
{
  float Triangle;
  Triangle=Num*(Num/2.0+.5);
  return Triangle;
}


/* Example output

Enter a number between 1 and 100, please: 1
This number is ODD.
The sum of all positive integers from 1 to 1 is 1.

Enter a number between 1 and 100, please: 2
This number is EVEN.
The sum of all positive integers from 1 to 2 is 3.

Enter a number between 1 and 100, please: 17
This number is ODD.
The sum of all positive integers from 1 to 17 is 153.

Enter a number between 1 and 100, please: 100
This number is EVEN.
The sum of all positive integers from 1 to 100 is 5050.

Enter a number between 1 and 100, please: 101

Goodbye!

*/
