// Nathaniel Rhein Class: TT 3:00 PM Due date: 2019-04-02 (Tuesday)
// Homework #: 9 Source code: NR_HW9_2019-04-09.cpp
// 

#include <iostream>
#include <math.h>
using namespace std;

void Read_Loan_Info(float &Principal, float &Rate, int &Years, int &PaymentsPerYear);
float MonthlyPayment(float Principal, float Rate, int Years, int PaymentsPerYear);
void Show_Table(float Principal, float Rate, int Years, int PaymentsPerYear);

int main()
{
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

void Read_Loan_Info(float &Principal, float &Rate, int &Years, int &PaymentsPerYear)
{
  cout << "\nWhat is the principal? ==> ";
  cin >> Principal;
  cout << "What is the annual interest rate (%)? ==> ";
  cin >> Rate;
  Rate/=100; // Rate is converted from a percentage to a fraction.
  cout << "For how many years is the loan? ==> ";
  cin >> Years;
  cout << "How many payments per year? ==> ";
  cin >> PaymentsPerYear;
}

float MonthlyPayment(float Principal, float Rate, int Years, int PaymentsPerYear)
{
  float Interest_Rate=Rate/12, Term=Years*PaymentsPerYear;
  float Denominator=1-(pow(Interest_Rate+1,-1*Term));
  return Principal*(Interest_Rate/Denominator);
}

void Show_Table(float Principal, float Rate, int Years, int PaymentsPerYear)
{
  // Calculates monthly payment, and rounds to the nearest $.01
  int Rounder=MonthlyPayment(Principal,Rate,Years,PaymentsPerYear)*100+0.5;
  float RoundMonthlyPayment=Rounder*.01;

  // Converts Rate from decimal back to percentage, and rounds to the nearest .o1
  Rounder=Rate*10000+.05;
  Rate=Rounder*.01;
  
  cout << "\nPrincipal          " << "$" << Principal << ".00";
  cout << "\nInterest Rate      " << Rate;

  // Interest Rate is amended with trailing 0s, if necessary
  if (Rounder%100==0) cout << ".00";
  else
    if (Rounder%10==0) cout << ".0";

  cout << "%";  
  cout << "\nNo. of Years       " << Years;
  cout << "\nPayments per year  " << PaymentsPerYear;
  cout << "\nNo. of Payments    " << Years*PaymentsPerYear;
  cout << "\nMonthly Payment    " << "$" << RoundMonthlyPayment;
}

/* Example output


*/
