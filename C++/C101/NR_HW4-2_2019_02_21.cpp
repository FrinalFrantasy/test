// Nathaniel Rhein
// Class: TT 3:00 PM
// Due date: 2019-02-21 (Thursday)
// Homework #: 4.2
// Source code: NR_HW4-2_2019-02-21.cpp
// Program calculates and displays the first 40 Fibonacci numbers in a 6-column pseudo-table.


/* Algorithm


  int Total=40, Tick=1, Fib1=1, Fib2=1, Fib3
    
  while (Total > 0)
      write setw(10)
      if (Tick==7) // Every 6 ticks, a newline is entered
	  Tick=1
      if (Tick % 3 == 1) // Ticks 1 & 4
	  write Fib1, " "
	  Fib3 = Fib1 + Fib2
      else if (Tick % 3 == 2) // Ticks 2 & 5
	  write Fib2, " "
	  Fib1 = Fib2 + Fib3
      else // Ticks 3 & 6
	  write Fib3, " "
	  Fib2 = Fib1 + Fib3
      Tick++
      Total--


*/


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  int Total=40, Tick=1, Fib1=1, Fib2=1, Fib3;
    
  while (Total > 0)
    {
      cout << setw(10);
      if (Tick==7) // Every 6 ticks, a newline is entered
	{
	  Tick=1;
	  cout << endl;
	}
      if (Tick % 3 == 1) // Ticks 1 & 4
	{
	  cout << Fib1 << " ";
	  Fib3 = Fib1 + Fib2;
	}
      else if (Tick % 3 == 2) // Ticks 2 & 5
	{
	  cout << Fib2 << " ";
	  Fib1 = Fib2 + Fib3;
	}
      else // Ticks 3 & 6
	{
	  cout << Fib3 << " ";
	  Fib2 = Fib1 + Fib3;
	}
      Tick++;
      Total--;
    }
  cout << "\n\n";
  
}


/* Example outputs


         1          1          2          3          5          8 
        13         21         34         55         89        144 
       233        377        610        987       1597       2584 
      4181       6765      10946      17711      28657      46368 
     75025     121393     196418     317811     514229     832040 
   1346269    2178309    3524578    5702887    9227465   14930352 
  24157817   39088169   63245986  102334155 


*/
