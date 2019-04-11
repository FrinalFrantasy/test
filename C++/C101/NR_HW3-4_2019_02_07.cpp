// Nathaniel Rhein
// Class: TT 3:00 PM
// Due date: 2019-02-07 (Thursday)
// Homework #: 3.4
// Source code: NR_HW3-4_2019-02-07.cpp
// User enters a number of shirts they would like to buy. Program tells them how much each shirt will cost, how much total tax they'll pay, and what the total bill is.


/* Algorithm

int Rounder
PricePerShirt = 15.75
output: "How many shirts would you like to buy? "
input: NumShirts

  if (NumShirts >= 11)
      PricePerShirt = 8.0
  else if (NumShirts >= 4)
      PricePerShirt = 12.5
  
  CostBeforeTax = PricePerShirt*NumShirts
  Rounder = CostBeforeTax*100+.5
  CostBeforeTax = Rounder*.01
  
  TotalTax = CostBeforeTax*.06
  Rounder = TotalTax*100+.5
  TotalTax = Rounder*.01

  TotalCost = CostBeforeTax+TotalTax
  Rounder = TotalCost*100+.5
  TotalCost = Rounder*.01
 
output: Price per shirt:      $, PricePerShirt
output: Total cost (pre-tax): $, CostBeforeTax
output: Sales tax (6%):       $, TotalTax
output: Total cost:           $, TotalCost

*/


#include <iostream>
using namespace std;

int main()
{
  unsigned int NumShirts;
  float PricePerShirt = 15.75;
  float TotalTax, CostBeforeTax, TotalCost;
  int Rounder;
  cout << "\nHow many shirts would you like to buy? ";
  cin >> NumShirts;
  if (NumShirts >= 11)
    {
      PricePerShirt = 8.0;
    }
  else if (NumShirts >= 4)
    {
      PricePerShirt = 12.5;
    }
  
  CostBeforeTax = PricePerShirt*NumShirts;
  Rounder = CostBeforeTax*100+.5;
  CostBeforeTax = Rounder*.01;
  
  TotalTax = CostBeforeTax*.06;
  Rounder = TotalTax*100+.5;
  TotalTax = Rounder*.01;

  TotalCost = CostBeforeTax+TotalTax;
  Rounder = TotalCost*100+.5;
  TotalCost = Rounder*.01;
 
cout << "\nPrice per shirt:      $" << PricePerShirt;
cout << "\nTotal cost (pre-tax): $" << CostBeforeTax;
cout << "\nSales tax (6%):       $" << TotalTax;
cout << "\nTotal cost:           $" << TotalCost;
cout << "\n\n";
 
}


/* Example outputs


How many shirts would you like to buy? 0

Price per shirt:      $15.75
Total cost (pre-tax): $0
Sales tax (6%):       $0
Total cost:           $0


How many shirts would you like to buy? 4

Price per shirt:      $12.5
Total cost (pre-tax): $50
Sales tax (6%):       $3
Total cost:           $53


How many shirts would you like to buy? 9

Price per shirt:      $12.5
Total cost (pre-tax): $112.5
Sales tax (6%):       $6.75
Total cost:           $119.25


How many shirts would you like to buy? 100

Price per shirt:      $8
Total cost (pre-tax): $800
Sales tax (6%):       $48
Total cost:           $848


*/
