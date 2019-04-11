// Nathaniel Rhein
// Class: TT 3:00 PM
// Due date: 2019-02-28 (Thursday)
// Homework #: 5.1
// Source code: NR_HW5-1_2019-02-28.cpp
// User enters characters, one at a time. The program records what types of characters are entered, and for each one, displays its ASCII code and the next two characters on the ASCII table. When the user enters a pound (#) symbol, the program displays the total number of characters entered, by type.


/* Algorithm


  char Char0, Char1, Char2
  int Uppers=0, Lowers=0, Numbers=0, Others=0

  write "Hello! This program gives information about characters - letters, numbers, and so on."
  write "Enter characters one at a time, and end by entering the pound (#) symbol."

  write "Please enter a character: "
  read Char0
  while (Char0 != '#')
       {
	 Char1 = Char 0 + 1
	 Char2 = Char 0 + 2
	 if ((Char0 >= 97) && (Char0 <= 122))
	   {
	     Lowers++
	   }
	 else if ((Char0 >= 65) && (Char0 <= 90))
	   {
	     Uppers++
	   }
 	 else if ((Char0 >= 48) && (Char0 <= 57))
	   {
	     Numbers++
	   }
	 else
	   {
	     Others++
	   }
	 write "Character entered ---------> ", Char0
	 write "ASCII value of character --> ", Char0*1
	 write "Next two ASCII characters -> ", Char1, " ", Char2
	 write "Please enter a character: "
	 read Char0
       }

  write "Total characters entered -> ", Uppers + Lowers + Numbers + Others
  write "    Uppercase letters ----> ", Uppers
  write "    Lowercase letters ----> ", Lowers
  write "    Numbers --------------> ", Numbers
  write "    Non-alphanumeric -----> ", Others


*/


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  char Char0, Char1, Char2;
  int Uppers=0, Lowers=0, Numbers=0, Others=0;

  cout << "\nHello! This program gives information about characters - letters, numbers, and so on.";
  cout << "\nEnter characters one at a time, and end by entering the pound (#) symbol.\n";

  cout << "Please enter a character: ";
  cin >> Char0;
  while (Char0 != '#')
       {
	 Char1=Char0+1;
	 Char2=Char0+2;
	 if ((Char0 >= 97) && (Char0 <= 122))
	   {
	     Lowers++;
	   }
	 else if ((Char0 >= 65) && (Char0 <= 90))
	   {
	     Uppers++;
	   }
 	 else if ((Char0 >= 48) && (Char0 <= 57))
	   {
	     Numbers++;
	   }
	 else
	   {
	     Others++;
	   }
	 cin.ignore(100, '\n'); // Only the first character is read.
	 cout << "\nCharacter entered ---------> " << Char0;
	 cout << "\nASCII value of character --> " << Char0*1;
	 cout << "\nNext two ASCII characters -> " << Char1 << " " << Char2;
	 cout << "\nPlease enter a character: ";
	 cin >> Char0;
       }

  cout << "\nTotal characters entered -> " << setw(3) << Uppers+Lowers+Numbers+Others;
  cout << "\n    Uppercase letters ----> " << setw(3) << Uppers;
  cout << "\n    Lowercase letters ----> " << setw(3) << Lowers;
  cout << "\n    Numbers --------------> " << setw(3) << Numbers;
  cout << "\n    Non-alphanumeric -----> " << setw(3) << Others << "\n\n";
}


/* Example output


Hello! This program gives information about characters - letters, numbers, and so on.
Enter characters one at a time, and end by entering the pound (#) symbol.
Please enter a character: a

Character entered ---------> a
ASCII value of character --> 97
Next two ASCII characters -> b c
Please enter a character: z

Character entered ---------> z
ASCII value of character --> 122
Next two ASCII characters -> { |
Please enter a character: !

Character entered ---------> !
ASCII value of character --> 33
Next two ASCII characters -> " #
Please enter a character: H

Character entered ---------> H
ASCII value of character --> 72
Next two ASCII characters -> I J
Please enter a character: /

Character entered ---------> /
ASCII value of character --> 47
Next two ASCII characters -> 0 1
Please enter a character: ?

Character entered ---------> ?
ASCII value of character --> 63
Next two ASCII characters -> @ A
Please enter a character: `

Character entered ---------> `
ASCII value of character --> 96
Next two ASCII characters -> a b
Please enter a character: ~

Character entered ---------> ~
ASCII value of character --> 126
Next two ASCII characters ->  �
Please enter a character: #

Total characters entered ->   8
    Uppercase letters ---->   1
    Lowercase letters ---->   2
    Numbers -------------->   0
    Non-alphanumeric ----->   5


*/
