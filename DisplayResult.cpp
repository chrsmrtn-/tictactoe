//Preprocessor Directives
#include <iostream.h>			//needed for cout statements

//Function Prototypes
void Statistics(int, int, int);				//function needed to display the statistics


bool DisplayResult(unsigned int wWin, bool bDraw)
//will display the result of the WinCheck or DrawCheck, 

//-returns false if anyone has won or drawn, thus stopping the game
//-returns the original i if nothing happened
{
	static int nNumXWins = 0;				//will hold the total number of wins for the user
	static int nNumOWins = 0;				//will hold the total number of wins for the computer
	static int nNumDraw = 0;				//will hold the total number of draws

	//for x wins since the numerical value of the X character is 10
	if(wWin == 10)
	{
		cout << "Player X wins!!!\n" << endl;
		nNumXWins++;											//increments the X Win totals
		Statistics(nNumXWins, nNumOWins, nNumDraw);				//function to display statistics
		return false;
	}

	//for o wins since the numerical value of the O character is 100
	else if(wWin == 100)
	{
		cout << "Computer wins!!!\n" << endl;
		nNumOWins++;											//increments the O Win totals
		Statistics(nNumXWins, nNumOWins, nNumDraw);				//function to display statistics
		return false;
	}
	
	//checks the bDraw if the DrawCheck function returned a true(which means there was a draw
	if(bDraw == true)
	{
		cout << "Draw Game!!\n" << endl;
		nNumDraw++;												//increments the Draw totals
		Statistics(nNumXWins, nNumOWins, nNumDraw);				//function to display statistics
		return false;
	}

	return true;			//if nothing won or drawed then it will return true to continue the game loop
}



void Statistics(int nNumXWins, int nNumOWins, int nNumDraw)
//this function will display the statistics for each win for X, O, or Draw totals
{
		cout << "\t\t        Player X has won " << nNumXWins << " times." << endl;
		cout << "\t\t        Player O has won " << nNumOWins << " times." << endl;
		cout << "\t\t        The game was a draw " << nNumDraw << " times." << endl;

}