//
//   COPYRIGHT (C) lml112@uakron.edu>, 2023  All rights reserved.
//   Luis Larralde
//   Purpose: This is myCode and is based upon what we study for Comp Sci
//
#include <cassert>
#include <iosfwd>
#include <iostream>
#include <iomanip>
#include <limits>  // numeric_limits<std::streamsize> for validations

// these are declarations - prefer this or std:: prefix
using std::cout;
using std::cin;
using std::endl;
using std::setw;
using std::left;
using std::right;

// ******************************************
// PLACE ALL OF TASK1'S stuff HERE, below
// ******************************************
//D
#include <cmath> //defines a collection math functions
#include <algorithm> //defines a collection of algorithm functions designed to be used on ranges of elements.
#include <string> //Used for string manipulation.
#include <array> //Used for defining and working with static arrays with a fixed size
#include <cctype> //used for char manipulations (ispunct(), etc..)

using std::string;
using std::setprecision;
using std::fixed;
using std::showpoint;
//using std::set;
using std::numeric_limits;
using std::streamsize;
//E

static int uChoose = 0;

int
mainMenu();

void
variables();

void
consoleInput();

void
consoleOutput();

void
operations();

void
decisions();

void
iterations();

void
validations();

void
misc();

struct Test_myCode
{
  void
  default_beg()
  {
    uChoose = mainMenu();
    assert(!(std::cin.fail()));
    std::cout << " Main menu passed " << std::endl;
  }
  void
  whatAction()
  {
    switch (uChoose)
    {
      case (1):
        variables();
        break;
      case (2):
        consoleInput();
        break;
      case (3):
        consoleOutput();
        break;
      case (4):
        operations();
        break;
      case (5):
        decisions();
        break;
      case (6):
        iterations();
        break;
      case (7):
        validations();
        break;
      case (8):
        misc();
        break;
      default:
        cout << "no case";
    }
  }

  // The test runner for this test class.
  void
  run()
  {
    default_beg();
    whatAction();
  }

};


int
main()
{
  Test_myCode test;
  while (true)
  {
    test.run();
  }

}


int
mainMenu()
{
  // heading, input section
  cout << endl;
  cout << setw(68) << "__________________________________________________________________ " << endl;
  cout << setw(68) << "|------------------------------------------------------------------|" << endl;
  cout << setw(68) << "|                Luis Larralde - The Programming Wizard            |" << endl;
  cout << setw(68) << "|                   Coded Potions and Spells                       |" << endl;
  cout << setw(68) << "|__________________________________________________________________|" << endl;
  cout << left << setw(2) << "|" << setw(21) << " " << setw(43) << "   MAIN MENU"
       << right << setw(2) << "|" << endl;
  cout << left << setw(2) << "|" << setw(21) << " " << setw(43) << "1) Variables"
       << right << setw(2) << "|" << endl;
  cout << left << setw(2) << "|" << setw(21) << " " << setw(43) << "2) Console Input "
       << right << setw(2) << "|" << endl;
  cout << left << setw(2) << "|" << setw(21) << " " << setw(43) << "3) Console Output"
       << right << setw(2) << "|" << endl;
  cout << left << setw(2) << "|" << setw(21) << " " << setw(43) << "4) Operations"
       << right << setw(2) << "|" << endl;
  cout << left << setw(2) << "|" << setw(21) << " " << setw(43) << "5) Decisions "
       << right << setw(2) << "|" << endl;
  cout << left << setw(2) << "|" << setw(21) << " " << setw(43) << "6) Iterations    "
       << right << setw(2) << "|" << endl;
  cout << left << setw(2) << "|" << setw(21) << " " << setw(43) << "7) Validations"
       << right << setw(2) << "|" << endl;
  cout << left << setw(2) << "|" << setw(21) << " " << setw(43) << "8) Miscellaneous"
       << right << setw(2) << "|" << endl;
  cout << left << setw(2) << "|" << setw(21) << " " << setw(43) << "Ctrl-c to Quit"
       << right << setw(2) << "|" << endl;
  cout << setw(68) << "|__________________________________________________________________|" << endl;
  cout << endl;
  int userChoice = 0;
  // take and validate the user entry

  cout << "Enter the code that you wish to generate, or quit to exit: "; // output stream a message
  cin >> userChoice;
  return userChoice;
}
// PLACE CODE HERE FOR EACH TASK
// TASK 1 CODE
void
variables()
{
  // A  ( looks like we did the first one for you :) )
  int var1;
  float var2;
  char var3;
  // B
  char var4 = ' ';
  int var5 = 0;
  float var6 = 0.00f;

  printf("Integer value is %d \n", var1);
  printf("Integer value is %f \n", var2);
  printf("Integer value is %c \n", var3);
  // B
  printf("Character value is %c \n", var4);
  printf("Integer value is %d \n", var5);
  printf("Float value is %f \n", var6);
  // C
  printf("Before: Integer value is %d \n", var5);
  var5 = 99;
  printf("After: Integer value is %d \n", var5);
  // C
  // D above
  // E above

  cout << "end of variables" << endl;
  cin.get();
}
// TASK 2 CODE (code inside of the braces of the task)
void
consoleInput()
{
  // A
  char var4 = 'L';
  int var5 = 36;
  float var6 = 19.87;

  printf("Input a character for var4\n");
  cin >> var4;
  printf("Input an integer for var5\n");
  cin >> var5;
  printf("Input a float for var6\n");
  cin >> var6;
  cin.ignore();

  printf("Character value is %c \n", var4);
  printf("Integer value is %d \n", var5);
  printf("Float value is %f \n", var6);
  printf("\n");

  // B
  char var7 = 'M';
  string var8 = "string";
  float var9 = 1.1;

  printf("Input a character var7\n");
  cin.get(var7);
  cin.ignore();
  printf("Input a string for var8\n");
  getline(cin, var8);
  printf("Input a float for var9\n");
  cin >> var9;
  cin.ignore();

  printf("Character value is %c \n", var7);
  printf("String value is %s \n", var8.c_str());
  printf("Float value is %f \n", var9);
  printf("\n");

  // C
  string var10;

  printf("Try to type a string longer than 10 characters\n");
  getline(cin, var10);
  var10.resize(10);
  printf("String value is %s \n", var10.c_str());
  printf("\n");

  // D
  int var11;
  int var12;

  printf("Input two separate integers \n");
  cin >> var11 >> var12;
  printf("var11= %d, and var12= %d \n", var11, var12);
  printf("\n");

  // E
  string var13;
  short int var14;

  printf("Type \"howdy there\"\n");
  getline(cin, var13);  //Used getline() instead of extraction operator to be able to read spaces from a string input
  cin.ignore(numeric_limits<streamsize>::max(), '\n'); //clears buffer of extraneous characters

  printf("Type an integer\n");
  cin >> var14;
  printf("var14 = %d\n",var14);

  cout << "end of console input" << endl;
  cin.get();
}
// TASK 3 CODE (code inside of the braces of the task)
void
consoleOutput()
{
  // A
  char var4 = 'L';
  int var5 = 36;
  float var6 = 19.87;

  cout << "Variable contains the character: " << var4 << endl;
  cout << "Variable contains the int: " << var5 << endl;
  cout << "Variable contains the float: " << var6 << endl;

  // B
  float var15 = 1.2;
  float var16 = 3.4;
  float var17 = 5.6;

  int var18 = var15 * var16 * var17;

  cout << "The product of the three variables is: " << var15 * var16 * var17 << endl;

  // C
  cout << setprecision(7) << fixed << showpoint << var15 << endl;
  cout << setprecision(7) << fixed << showpoint << var16 << endl;
  cout << setprecision(7) << fixed << showpoint << var17 << endl;

  //D, E, F
  cout << setprecision(7) << fixed << showpoint << setw(15) << right << "Heading 1:" << setw(15) << right << "Heading 2:" << setw(15) << right << "Heading 3:" << endl;
  cout << setprecision(7) << fixed << showpoint << setw(15) << right << var15 << setw(15) << right << var16 << setw(15) << right << var17 << endl;
  cout << setprecision(7) << fixed << showpoint << std::setfill('0') <<setw(15) << right << var15 << setw(15) << right << var16 << setw(15) << right << var17 << endl;
  cout << std::setfill(' ');

  cout << "end of console output" << endl;
  cin.get();
}
// TASK 4 CODE (code inside of the braces of the task)
void
operations()
{
  // A
  float var19 = 45.77f;
  float var20 = 66.54f;
  float var21 = (var19 / var20) * 100;

  cout << "Percentage: " << setprecision(2) << fixed << showpoint << var21 << "%" << endl;

  // B
  int var22 = 4;
  int var23 = 7;
  float var24;

  var24 = var22 / static_cast<float>(var23);

  cout << "Final Result: " << showpoint << fixed << setprecision(2) << var24 << endl;

  // C
  long double var25;

  var25 = 200000 - (10000 + 50000 + 5000 + 2500);

  cout << "Net income equation: " << "$" << var25 << endl;

  // D
  int var26;
  cout << "Input an integer ";
  cin >> var26;

  string range = ( var26 > 0 && var26 < 999) ? "Within Range" : "Not within range";
  cout << "The integer: " << var26 << ", is " << range << endl;

  cout << "end of operations" << endl;
  cin.get();
}
// TASK 5 CODE (code inside of the braces of the task)
void
decisions()
{
  // A
  float var19 = 45.77f;
  float var20 = 66.54f;
  float var21 = (var19 / var20) * 100;

  cout << "Percentage: " << setprecision(2) << fixed << showpoint << var21 << "%" << endl;

  //code decision construct reused from CSLab02
  if (var21 >= 93.00)
    {
        cout << "the letter grade is A" << endl;
    }
    else
    {
        if (var21 >= 90.00)
        {
            cout << "the letter grade is A-" << endl;
        }
        else
        {
            if (var21 >= 87.00)
            {
                cout << "the letter grade is B+" << endl;
            }
            else
            {
                if (var21 >= 83.00)
                {
                    cout << "the letter grade is B" << endl;
                }
                else
                {
                    if (var21 >= 80.00)
                    {
                        cout << "the letter grade is B-" << endl;
                    }
                    else
                    {
                        if (var21 >= 77.00)
                        {
                            cout << "the letter grade is C+" << endl;
                        }
                        else
                        {
                            if (var21 >= 73.00)
                            {
                                cout << "the letter grade is C" << endl;
                            }
                            else
                            {
                                if (var21 >= 70.00)
                                {
                                    cout << "the letter grade is C-" << endl;
                                }
                                else
                                {
                                    if (var21 >= 67.00)
                                    {
                                        cout << "the letter grade is D+" << endl;
                                    }
                                    else
                                    {
                                        if (var21 >= 63.00)
                                        {
                                            cout << "the letter grade is D" << endl;
                                        }
                                        else
                                        {
                                            if (var21 >= 60.00)
                                            {
                                                cout << "the letter grade is D-" << endl;
                                            }
                                            else
                                            {
                                                cout << "the letter grade is F" << endl;

                                            }

                                        }

                                    }

                                }

                            }

                        }

                    }

                }

            }

        }

    }
  // B
  bool var27 = false;

  if (var27)
  {
      cout << "the strategy calls for the university to buy more ice cream" << endl;
  }
  else
  {
      cout << "the strategy saves expenditures for the university" << endl;
  }
  // C
  int var28 = 2;

  if (var28 > (5 + 7))
  {
      cout << var28 << endl;
  }
  else
  {
      cout << 5 + 7 << endl;
  }

  // D
  short int var29 = 654;
  bool var30 = false;

  if ((var30) && (var29 > 650))
  {
      cout << "the test is true" << endl;
  }
  else
  {
      cout << "the test is false" << endl;
  }

  cout << "end of decisions" << endl;
  cin.get();
}
// TASK 6 CODE (code inside of the braces of the task)
void
iterations()
{
  float var19 = 45.77f;
  float var20 = 66.54f;
  float var21 = (var19 / var20) * 100;
  for (int i = 0; i < 10; i++)
  {
    cout << "Enter total possible: " << endl;
    cin >> var19;

    while ((cin.fail()) || ((var19 < 1) || (var19 > 100)))
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid Entry!" << endl;
        cout << "Enter a number: ";
        cin >> var19;
    }

    cout << "Enter total earned: " << endl;
    cin >> var20;

    while ((cin.fail()) || ((var20 > var19) || (var20 < 1)))
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid Entry!" << endl;
        cout << "Enter a number within total points possible: ";
        cin >> var20;
    }
    var21 = (var20 / var19) * 100;

    cout << "Percentage: " << setprecision(2) << fixed << showpoint << var21 << "%" << endl;
    //code decision construct reused from CSLab02
    if (var21 >= 93.00)
    {
        cout << "the letter grade is A" << endl;
    }
    else
    {
        if (var21 >= 90.00)
        {
            cout << "the letter grade is A-" << endl;
        }
        else
        {
            if (var21 >= 87.00)
            {
                cout << "the letter grade is B+" << endl;
            }
            else
            {
                if (var21 >= 83.00)
                {
                    cout << "the letter grade is B" << endl;
                }
                else
                {
                    if (var21 >= 80.00)
                    {
                        cout << "the letter grade is B-" << endl;
                    }
                    else
                    {
                        if (var21 >= 77.00)
                        {
                            cout << "the letter grade is C+" << endl;
                        }
                        else
                        {
                            if (var21 >= 73.00)
                            {
                                cout << "the letter grade is C" << endl;
                            }
                            else
                            {
                                if (var21 >= 70.00)
                                {
                                    cout << "the letter grade is C-" << endl;
                                }
                                else
                                {
                                    if (var21 >= 67.00)
                                    {
                                        cout << "the letter grade is D+" << endl;
                                    }
                                    else
                                    {
                                        if (var21 >= 63.00)
                                        {
                                            cout << "the letter grade is D" << endl;
                                        }
                                        else
                                        {
                                            if (var21 >= 60.00)
                                            {
                                                cout << "the letter grade is D-" << endl;
                                            }
                                            else
                                            {
                                                cout << "the letter grade is F" << endl;

                                            }

                                        }

                                    }

                                }

                            }

                        }

                    }

                }

            }

        }

    }

    cout << endl;

  }
  // B
  char var31 = ' ';
  char var32 = NULL;
  do
  {

    cout << "punctution mark to compare: " << endl;
    cin >> var31;

    if (ispunct(var31))
    {
        if (var31 > var32)
        {
            cout << "the value was higher" << endl;
        }
        else if (var31 < var32)
        {
            cout << "the value was lower" << endl;
        }

    }

    var32 = var31;

  }
  while (var31 != 'z');

  // C
  int var33 = 100;

  while ( var33 > 0)
  {
      cout << var33 << endl;
      var33--;
  }

  // D
  int var34 = 0;

  for (int i = 15; i < 128; i += 16)
  {
      for (var34; var34 <= i; var34++)
      {
          cout << static_cast<char>(var34);
      }

      cout << endl;
  }


  cout << "end of iterations" << endl;
  cin.get();
}
// TASK 7 CODE (code inside of the braces of the task)
void
validations()
{
  char var35 = ' ';
  cout << "input a letter: " << endl;
  cin >> var35;

  if ((static_cast<int>(var35) >= 65 && static_cast<int>(var35) <= 90) || (static_cast<int>(var35) >= 97 && static_cast<int>(var35) <= 122))
  {
      cout << (static_cast<int>(var35)) << endl;
  }
  else
  {
      cout << "invalid" << endl;
  }

  cout << "end of validations" << endl;
  cin.get();
}
// TASK 8 CODE (code inside of the braces of the task)

void
misc()
{
  //  A.	Try this code:
/*
  if (myVar = 0) // using an assignment operator ("=") instead of the equality operator ("==")
  {
    std::cout << “My var is zero everyone!”;
  }
  // Add a comment to explain what is going on, and why?

  // B.	Try to improve this code (rewrite it):

  // every if statement will be evaluated regardless.
  if (myVar > 0)
  {
    std::cout << “Greater!”;
  }
  if (myVar < 0)
  {
    std::cout << “Lesser!”;
  }
  if (myVar == 0)
  {
    std::cout << “Same!”;
  }

  //changed to if-else-if. If one of the conditions is true, the others are bypassed.
  //Also, the last condition was removed and replaced with an "else" statement.
  //With the logic of this decision construct, if the first two conditions are false
  //(neither greater than or less than) then all that remains is that myVar is equal to 0.

  if (myVar > 0)
  {
    std::cout << “Greater!”;
  }
  else if (myVar < 0) // changed to "else if"
  {
    std::cout << “Lesser!”;
  }
  else
  {
    std::cout << “Same!”;
  }


*/
  // PART C
  int number = 56;

  cout << number++ << endl; //uses number THEN increments number. Print out 56, then increments to 57.
  cout << ++number << endl; //increments number BEFORE using it. increments from 57 to 58 then prints.

  cout << "end of miscellaneous" << endl;
  cin.get();
}


