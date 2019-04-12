// Nathaniel Rhein Class: TT 3:00 PM
// Due date: 2019-04-18
// Lab #: 11
// Source code: NR_LAB11.cp
// Program gives two options: finding the third angle of a triangle (the user supplying the first two),
// and asking the user a simple multiplication problem, then informing the user whether they get the
// problem right or not.

#include <iostream>
#include <random>
using namespace std;

float Angle(float Angle1, float Angle2);
void MathProblem();

int main()
{
  srand(time(NULL));
  char Choice;
  float Angle1, Angle2;

  do
    {
      cout << "\nChoose one";
      cout << "\n1: Find Third Angle of triangle";
      cout << "\n2: Do Math Problem";
      cout << "\n3: quit";
      cout << "\nEnter choice --> ";
      cin >> Choice;
      if (Choice=='1')
	{
	  cout << "\nEnter 1st angle ";
	  cin >> Angle1;
	  cout << "Enter 2nd angle ";
	  cin >> Angle2;
	  cout << "\nThe third angle is " << Angle(Angle1,Angle2);
	}
      else if (Choice=='2') MathProblem();
    }
  while (Choice!='3');
  cout << "\nGoodbye!\n";
}

float Angle(float Angle1, float Angle2)
{
  return 180-Angle1-Angle2;
}

void MathProblem()
{
  int Int1 = random()%10+1;
  int Int2 = random()%10+1;
  int Answer = Int1*Int2;
  int UserAnswer;
  cout << "\n" << Int1 << " * " << Int2 << " = ";
  cin >> UserAnswer;
  if (UserAnswer==Answer) cout << "Correct!\n";
  else cout << "Sorry, Wrong Answer, it is " << Answer << "\n";
}
