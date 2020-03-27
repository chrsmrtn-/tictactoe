//Preprocessor Directives
#include <iostream.h>				//needed for cout statements
#include <stdlib.h>					//needed for atoi and system statements
#include <ctype.h>					//needed for isdigit function
#include <conio.h>					//needed for _getche statements

bool PlayerMove(unsigned int wBoard[])
{
	char cPMove[2] = {'N','\0'};			//array that will hold the move selection made by the user
	char cPause;							//dummy variable used to pause game
	unsigned int wPMove;					//will hold the converted move choice and save it to the array for totals, wincheck, and draw check
	bool bError = false;					//will hold a true value if input error occured

	
	cout << "\nPlease enter the number that represents the position you wish to move." << endl;		//prompts user for input
	cPMove[0] = _getche();						//gets input from user and saves it to the array location

	if(isdigit(cPMove[0]) && cPMove[0] < '9')	//makes sure that the user entered a number greater than 0 and less than 9
	{
		wPMove = atoi(cPMove);					//converts move to a unsigned integer, to refer to the location in the array
		if(wBoard[wPMove] == 0)	
				wBoard[wPMove] = 10;
		else
		{
			//will inform user, that the space was already taken
			cout << "\nSpace already taken.  Press any key to begin re-entering input." << endl;
			cPause = _getch();		//pauses program
			bError = true;			//returns to main, to mark that an input error has occured
		}
			
	}
	else
	{
		//will inform user, that the input is invalid.
		cout << "\n\a\aYour input is invalid, it must be greater than 0, but less than 9.\nPress any key to begin re-entering input." << endl;
		cPause = _getch();			//pauses program
		bError = true;				//returns to main, to mark that an input error has occured
	}

	return bError;					//will return a false value to mark that no error has occured
	

}