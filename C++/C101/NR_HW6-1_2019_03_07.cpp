/******************************************************************
Name       : Nathaniel Rhein and Matt Holloway
Date       : due 2019-03-07 (Thursday)
Homework # : Homework #6 Problem #1
Source     : NR_HW6-1_2019-03-07.cpp
Action     : Menu is displayed allows user to calculate
               1. Miles per gallon,
               2. Total minutes and seconds,
	       3. Determine if number is a prime number or not,
             or
               4. Quit

Notes      : I had to comment out the system("cls") commands as they
             were not understood by my Linux computer. I also had to
             change "void main()" to "int main()" for it to compile.
********************************************************************/

#include <iostream>
#include <stdlib.h>      // this header file requires the .h
using namespace std;

void DisplayMenu(void);
void FindMilesPerGallon(void);
void ConvertTotalSeconds(void);
void IsPrimeNumber(void);

int main()
{
  int Choice;

  //  system("cls");	// this clears the output screen

  DisplayMenu();
  cin >> Choice;
  while (Choice != 4)
    {
      switch (Choice)
        {
	case 1: FindMilesPerGallon(); break;
	case 2: ConvertTotalSeconds(); break;
	case 3: IsPrimeNumber(); break;
        default: cout << "Sorry illegal choice, Please try again\n\n"; break;
        }
      DisplayMenu();
      cin >> Choice;
    }
}

/*********************  DisplayMenu  ************************************
Action  :  This just displays the menu to the screen
Parameters  : none
returns     : nothing
***********************************************************************/
void DisplayMenu()
{
  cout << "\n\nDo you want to:\n";
  cout << "   1) Find miles per gallon\n";
  cout << "   2) Convert total seconds to minutes and seconds\n";
  cout << "   3) Determine if number is a prime number or not\n";
  cout << "   4) QUIT\n\n";
  cout << "  CHOICE --> ";
}

/********************  FindMilesPerGallon  ******************************
Action  : Ask user to input number of miles traveled and number of
          gallons used then display the miles per gallon obtained.
Parameters : none
returns    : nothing
------------------------------------------------------------------------*/
void FindMilesPerGallon()
{
  float Miles, Gallons;

  //  system("cls");

  cout << "\nHow many miles were travelled? ";
  cin >> Miles;
  cout << "How many gallons of gas were used? ";
  cin >> Gallons;
  cout << "ANSWER: " << Miles/Gallons << " MPG";
}

/******************** ConvertTotalSeconds *********************
Action  : Ask user to input a given total number of seconds and then
          displays the corresponding number of minutes and seconds
Parameters : none
returns    : nothing
-------------------------------------------------------------------------*/
void ConvertTotalSeconds()
{
  int Seconds;

  //  system("cls");

  cout << "\nHow many seconds? ";
  cin >> Seconds;
  cout << Seconds/60 << " hours and " << Seconds%60 << " seconds";
}

/*********************** IsPrimeNumber()****************************
Action  : Ask user to input positive integer and will determine if number
          is a prime number or not.
Parameters  : none
Returns     : nothing
-------------------------------------------------------------------*/
void IsPrimeNumber()
{
  int Number; bool Prime=true;
  //  system("cls");
  cout << "\nWhat number would you like to test? ";
  cin >> Number;
  if (Number < 2) Prime = false;
  else if (Number == 2) Prime = true;
  else if (Number % 2 == 0) Prime = false;
  else
    {
      for (int N=3; N*N<=Number; N+=2)
	{
	  if (Number%N==0)
	    {
	      Prime = false;
	      break;
	    }
	}
    }      
  cout << "The number " << Number << " is ";
  if (Prime==true) cout << "PRIME.";
  else cout << "NOT PRIME.";
}


/* EXAMPLE OUTPUT

Do you want to:
   1) Find miles per gallon
   2) Convert total seconds to minutes and seconds
   3) Determine if number is a prime number or not
   4) QUIT

  CHOICE --> 1

How many miles were travelled? 50
How many gallons of gas were used? 5.5
ANSWER: 9.09091 MPG

Do you want to:
   1) Find miles per gallon
   2) Convert total seconds to minutes and seconds
   3) Determine if number is a prime number or not
   4) QUIT

  CHOICE --> 2

How many seconds? 1000
16 hours and 40 seconds

Do you want to:
   1) Find miles per gallon
   2) Convert total seconds to minutes and seconds
   3) Determine if number is a prime number or not
   4) QUIT

  CHOICE --> 3

What number would you like to test? 100
The number 100 is NOT PRIME.

Do you want to:
   1) Find miles per gallon
   2) Convert total seconds to minutes and seconds
   3) Determine if number is a prime number or not
   4) QUIT

  CHOICE --> 3       

What number would you like to test? 101
The number 101 is PRIME.

Do you want to:
   1) Find miles per gallon
   2) Convert total seconds to minutes and seconds
   3) Determine if number is a prime number or not
   4) QUIT

  CHOICE --> 4

*/
