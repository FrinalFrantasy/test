// Nathaniel Rhein Class: TT 3:00 PM
// Due date: 2019-04-11
// Lab #: 10
// Source code: NR_LAB10.cp
// User picks a number from 1-3, then program randomly picks a number from 1-3. Program then outputs whether the two numbers are the same.

#include <iostream>
#include <random>
using namespace std;

int main()
{
  srand(time(NULL));
  int PlayerChoice;
  do
    {
      cout << "\nPlease pick a number from 1-3, or 0 to quit: ";
      cin >> PlayerChoice;
      int AIChoice=random()%3+1;
      if (PlayerChoice==AIChoice) cout << "The AI chose the same number!\n";
      else cout << "The AI chose a different number! (" << AIChoice << ")\n";
    }
  while (PlayerChoice!=0);
}
