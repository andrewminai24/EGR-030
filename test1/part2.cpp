

/********************************************************************

EGR30 Midterm 1
Programming Section: Question 2
35 points

In this program, you are going to design the game of NIM.  This is a
simplified version of one of the first video games ever designed.

In the game of NIM, you start with a certain number of sticks in a pile 
that sits between two players. The number of sticks to start with is 
decided by the players before the game begins.  This is a two player 
game and on each turn, a player can take away 1, 2, or 3 sticks.  This 
updates the number of remaining sticks.  The next player does the same 
- taking 1, 2, or 3 sticks - again, updating the number of sticks that 
remain.  The game continues until one player takes away the final stick 
and is declared the winner!

So, to play this game, we need to perform the following tasks:
- Ask for player one's name and store it in a variable
- Ask for player two's name and store it in a variable
- Ask how many sticks they'd like to have in the main pile to start with
- Start game play by looping through until there are 0 sticks in the main pile.
Each time through the loop:
   - Ask the current player how many sticks they would like to take: 1, 2, or 3
   - validate that the number was allowed
   - update the total by subtracting the choice from the total (if there were 
     23 sticks remaining and the player takes away 2 - update the total to 21)
   - rotate to the next player

I have done a lot of the planning for you.  Read carefully and perform 
each task as asked.  Do not do anything more than what the tasks ask.

*********************************************************************/
#include <iostream>
using namespace std;

int main ()
{
  string name1, name2;


  int currentPlayer = 1;	// This is a flag that will track whose turn it is.
  // Later on in the code, this will get toggled to 2

  int sticksToTake;		// This will collect the number of sticks each player
  // takes on any given turn during game play.

  // TASK 1 (2 pts): Define a variable that will store the current total number 
  //         of sticks. This will get updated throughout the program. This
  //         will start with a positive number between 10 and 30 and
  //         will get lowered on each turn as sticks are taken.

  int NumOfSticks;

  // TASK 2 (3 pts): Write the correct code to ask for player 1's name and
  // store it into name1. Remember, their name may have a space, so collect 
  // the name appropriately.
  cout << "Player1 what is your name\n";
  getline(cin,name1);

  // TASK 2b (1 pt): Repeat Task 2a to ask for and collect player 2's name into name2.
  cout << "Player2 what is your name\n";
  getline(cin,name2);



  // TASK 3 (2 pts): Ask how many sticks the players would like to start 
  //         with and then collect the number from the user and store it 
  //         into the variable that you declared in TASK 1.
  cout << "How many sticks would you like to start with\n";
  cin >> NumOfSticks;



  // TASK 4 (6 pts) : Write an input validation loop that checks the total number
  //         of sticks.  If the total number entered is less than 10 or
  //         greater than 30, ask the user to enter the number again.
  //         Continue this until a valid number is entered.



  while(NumOfSticks < 10 || NumOfSticks > 30)
  {
    cout << "Sorry give another attempt" << endl;
    cin >> NumOfSticks;
  }
  /*
  do
    {
      error = 0;
      if (cin.fail ())
	{
	  cout << "Please enter the number again " << endl;
	  error = 1;
	  cin.clear ();
	  cin.ignore (80, '\n');
	}
    }
  while (error == 1);

*/


    // TASK 5 (2 pts): Start the while loop that will run the code below as long as
    //         the total number of sticks is greater than or equal to 1.
while (NumOfSticks >= 1)
  {
    // TASK 6 (3 pts): Display the total number of sticks remaining.
    cout << NumOfSticks << endl;

    // Ask the current player for the number of sticks they will take.
    if (currentPlayer == 1)
      cout << name1;
    else
      cout << name2;

    // Finish the question and collect the number in the variable sticksToTake.
    cout << ", please select the number of sticks to take (1, 2, or 3): ";
    cin >> sticksToTake;

    // Validate the input.
    while (sticksToTake < 1 || sticksToTake > 3)
      {
	cout << "Please enter the number of sticks to take again: ";
	cin >> sticksToTake;
      }

    // TASK 7 (2 pts): Write an if statement to check to see if  
    //         sticksToTake exceeds the total number of remaining sticks 
    //         (your variable from tasks 1, 3, etc.).
    if (sticksToTake > NumOfSticks)
      {
	cout << "Your entry exceeds the number of sticks that remain.\n";
	cout <<
	  "Your entry has been changed to the number of remaining sticks.";
  cin >> sticksToTake;
	// TASK 8 (2 pts): Set sticksToTake equal to the number of remaining sticks.
	sticksToTake = NumOfSticks;
      }

    // TASK 9 (3 pts): Update the total number of sticks (your variable) by 
    //          subtracting the number of sticks taken (sticksToTake) 
    //          from the total (your variable).
    NumOfSticks = NumOfSticks - sticksToTake;

    // TASK 10 (3 pts): see if the total number of sticks (your variable) is 0.
    if (NumOfSticks == 0)
      switch (currentPlayer)
	{
	case 1:
	  cout << name1;
	  cout << ", congratulations - you won!\n";
	  break;
	case 2:
	  cout << name2;
	  cout << ", congratulations - you won!\n";
	  break;
	}

    // TASK 11 (6 pts): Write code that does the following: If currentPlayer is 
    //          currently 1, update its value to 2. If currentPlayer is
    //          currently 2, update its value to 1. You can brute force 
    //          this with an if statement or write a clever statement 
    //          (including a mod) and do it in one line.
    if (currentPlayer == 1)
      {
	currentPlayer = 2;
      }
	else 
	{
	  currentPlayer = 1;
	}

      }


  }



