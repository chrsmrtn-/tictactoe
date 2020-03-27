//Preprocessor Directives
#include <conio.h>					//needed for _getche statements
#include <stdio.h>					//needed for printf statements
#include "TicTac.h"					//needed for CanWin and CanBlock functions

void ComputerMove(unsigned int wCTot[], unsigned int wRTot[], unsigned int wDTot[], unsigned int wBoard[])
{
	unsigned int wCMove = 0;		//will hold the computer's move

	wCMove = CanWin(wCTot, wRTot, wDTot, wBoard);		//function to see if the computer has the chance to win, and takes it

	
	if(wCMove == 100)
		wCMove = CanBlock(wCTot, wRTot, wDTot, wBoard);	//function to see if the computer has the chance to block, and takes it

	if(wCMove == 100)
		wCMove = Stratagy(wCTot, wRTot, wDTot, wBoard);	//main stratagy if win or block did not happen

	wBoard[wCMove] = 100;								//will place the 'O' or 100 in the right spot in the board array

}
