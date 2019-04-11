#include <random>
#include <iostream>
using namespace std;

int main()
{
  /*
  std::mt19937 rng;
  rng.seed(std::random_device()());
  std::uniform_int_distribution<std::mt19937::result_type> dist6(1,6); // distribution in range [1, 6]
  */
  
  int Iterations, Prize, Choice, SecondChoice, RevealedDoor, Win=0, Loss=0;
  cout << "\n How many iterations? ";
  cin >> Iterations;

  while (Iterations>0)
    {
      Iterations--;
      Prize=rand()%3+1;
      //      cout << "\nPRIZE: " << Prize;
      Choice=rand()%3+1;
      //      cout << "\n CHOICE: " << Choice;
      do
	{
	  RevealedDoor=rand()%3+1;
	}
      while ((RevealedDoor==Prize) || (RevealedDoor==Choice));
      //      cout << "\n  REVEAL: " << RevealedDoor;

      do
	{
	  SecondChoice=rand()%3+1;
	}
      while ((SecondChoice==Choice) || (SecondChoice==RevealedDoor));

      if (SecondChoice==Prize) Win++;
      else Loss++;
    }
  cout << "\n WINS: " << Win << "\n LOSS: " << Loss << endl;
}
