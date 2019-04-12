// Nathaniel Rhein
// Class: TT 3:00 PM
// Due date: 2019-04-02 (Tuesday)
// Homework #: 9 Source code: NR_HW9_2019-04-09.cpp
// A loan payment calculator. The use enters the loan's principal, yearly rate, total
// number of years, and payments per year. Program returns all of this, as well as
// the total number of payments and monthly payment amount.

#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

void Read_Loan_Info(float &Principal, float &Rate, int &Years, int &PaymentsPerYear);
float MonthlyPayment(float Principal, float Rate, int Years, int PaymentsPerYear);
void Show_Table(float Principal, float Rate, int Years, int PaymentsPerYear);

int main()
{
  // Sets float output to non-scientific notation, and precisely two decimal places.
  cout << setiosflags(ios::fixed | ios::showpoint) << setprecision(2);

  float Principal, Rate;
  int Years, PaymentsPerYear;
  char Choice;

  do
    {
      cout << "\nThis is a loan payment calculator.";
      Read_Loan_Info(Principal,Rate,Years,PaymentsPerYear);
      Show_Table(Principal,Rate,Years,PaymentsPerYear);
      cout << "\n\nContinue? (Y/N) ==> ";
      cin >> Choice;
    }
  while ((Choice=='Y') || (Choice=='y'));

  cout << "Goodbye!\n\n";
}

// Reads and records all the necessary information about the loan.
void Read_Loan_Info(float &Principal, float &Rate, int &Years, int &PaymentsPerYear)
{
  cout << "\nWhat is the principal? ==> $";
  cin >> Principal;
  cout << "What is the annual interest rate? ==> %";
  cin >> Rate;
  cout << "For how many years is the loan? ==> ";
  cin >> Years;
  cout << "How many payments per year? ==> ";
  cin >> PaymentsPerYear;
}

// Calculates the loan's monthly payment based on all previously entered data.
float MonthlyPayment(float Principal, float Rate, int Years, int PaymentsPerYear)
{
  // Rate is divided by 1200 instead of 12 to account for the fact that it was entered as a percentage.
  float Interest_Rate=Rate/1200, Term=Years*PaymentsPerYear;
  float Denominator=1-(pow(Interest_Rate+1,-1*Term));
  return Principal*(Interest_Rate/Denominator);
}

// Displays all loan information - that which the user entered, and that which is
// calculated in MonthlyPayment().
void Show_Table(float Principal, float Rate, int Years, int PaymentsPerYear)
{
  cout << "\nPrincipal          " << "$" << Principal;
  cout << "\nInterest Rate      " << Rate << "%";  
  cout << "\nNo. of Years       " << Years;
  cout << "\nPayments per year  " << PaymentsPerYear;
  cout << "\nNo. of Payments    " << Years*PaymentsPerYear;
  cout << "\nMonthly Payment    " << "$" << MonthlyPayment(Principal,Rate,Years,PaymentsPerYear);
}

/* Example output

This is a loan payment calculator.
What is the principal? ==> $11000
What is the annual interest rate? ==> %10
For how many years is the loan? ==> 4
How many payments per year? ==> 12

Principal          $11000.00
Interest Rate      10.00%
No. of Years       4
Payments per year  12
No. of Payments    48
Monthly Payment    $278.99

Continue? (Y/N) ==> y

This is a loan payment calculator.
What is the principal? ==> $15500
What is the annual interest rate? ==> %5.7
For how many years is the loan? ==> 5
How many payments per year? ==> 12

Principal          $15500.00
Interest Rate      5.70%
No. of Years       5
Payments per year  12
No. of Payments    60
Monthly Payment    $297.50

Continue? (Y/N) ==> y

This is a loan payment calculator.
What is the principal? ==> $115000
What is the annual interest rate? ==> %7.75
For how many years is the loan? ==> 30
How many payments per year? ==> 12

Principal          $115000.00
Interest Rate      7.75%
No. of Years       30
Payments per year  12
No. of Payments    360
Monthly Payment    $823.88

Continue? (Y/N) ==> n
Goodbye!

*/
