#include <random>
#include <iostream>

int main()
{
    std::mt19937 rng;
    rng.seed(std::random_device()());
    std::uniform_int_distribution<std::mt19937::result_type> dist6(1,6); // distribution in range [1, 6]

    int Total = 0;
    int OneWins = 0;
    int TwoWins = 0;

    std::cout << "\nHow many times should the game be played?" ;
    std::cin >> Total;

    while (Total > 0)
      {
	if (dist6(rng)==6)
	  {
	    OneWins++;
	    Total--;
	  }
	else
	  {
	    if (dist6(rng)==6)
	      {
		TwoWins++;
		Total--;
	      }
	  }
      }
    std::cout << "\nOne wins: " << OneWins;
    std::cout << "\nTwo wins: " << TwoWins << std::endl;
	

      

	



    
    /*    int Flip = 0;
    int Turn = 1;
    while (Flip == 0)
		   {
		     if (Turn==1)
		       {
			 if (dist2(rng)==1)
			   {
			 std::cout << "\nOne: tails.";
			 Turn=2;
			   }
			 else
			   {
			 std::cout << "\nOne: HEADS!\n";
			 Flip=1;
			   }
		       }
		     else
		       {
			 if (dist2(rng)==1)
			   {
			     std::cout << "\nTwo: tails.";
			     Turn=1;
			   }
			 else
			   {
			     std::cout << "\nTwo: HEADS!\n";
			     Flip=1;
			   }
		   }
		   }
    */
}
