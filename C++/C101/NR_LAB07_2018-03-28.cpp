// Nathaniel Rhein
// Class: TT 3:00 PM
// Due date: 2019-03-28 (Thursday)
// Lab #: 7
// Source code: NR_LAB07_2019-03-28.cpp
// 

#include <iostream>
using namespace std;

int LargestIntFinder (int TestInt1, int TestInt2, int TestInt3);
void FindLargestInt (int &TestInt1, int TestInt2, int TestInt3);

int main()
{
  int Int1, Int2, Int3;
  char Answer;
  do
    {
      cout << "\nWould you like to calculate the greatest of three integers?";
      cout << "\n(Enter 'N' to stop program, or anything else to continue) --> ";
      cin >> Answer;
      if ((Answer!='N') && (Answer!='n'))
	{
	  cout << "\nEnter 1st integer --> ";
	  cin >> Int1;
	  cout << "Enter 2nd integer --> ";
	  cin >> Int2;
	  cout << "Enter 3rd integer --> ";
	  cin >> Int3;
	  cout << "\nWhich function would you like to use?";
	  cout << "\n(Enter '1' for the int function, or '2' for the void function) --> ";
	      cin >> Answer;
	      if (Answer=='1')
		{
		  cout << "\nThe largest int is " << LargestIntFinder(Int1,Int2,Int3) << ".\n";
		  Answer=0;
		}
	      else
		{
		  FindLargestInt(Int1,Int2,Int3);
		  cout << "\nThe largest int is " << Int1 << ".\n";
		  Answer=0;
		}
	}
    }
  while ((Answer!='N') && (Answer!='n'));
  cout << "\nGoodbye!\n";
}

  
int LargestIntFinder (int TestInt1, int TestInt2, int TestInt3)
{
  if (TestInt3>TestInt2) TestInt2=TestInt3;
  if (TestInt2>TestInt1) TestInt1=TestInt2;
  return TestInt1;
}
void FindLargestInt (int &TestInt1, int TestInt2, int TestInt3)
{
  if (TestInt3>TestInt2) TestInt2=TestInt3;
  if (TestInt2>TestInt1) TestInt1=TestInt2;  
}
 
/* Example output


*/
