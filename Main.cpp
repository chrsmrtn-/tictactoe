//Chris Martin
//CIS Project
//3CDA
//5/10/01

//This program will be a tic tac toe game where the computer always wins

//Preprocessor Directives
#include <iostream>				//needed for cout statements
#include <stdio.h>					//needed for printf statements
#include <stdlib.h>					//needed for atoi and system statements
#include <conio.h>					//needed for _getche statements
#include <ctype.h>					//needed for isdigit function
#include "TicTac.h"					//needed for function dealing with the Tic Tac Toe program, 
									//descriptions can be found in the header file

using namespace std;


void main(void)
{
	unsigned int wBoard[9] = {0};				//holds the values to represent what spots were taken, X(10), O(100), and open spaces are 0.
	bool bRunGame = true;						//will tell the computer to run the game loop or not
	bool bError;								//will be true if there was an input error
	unsigned int wWin = 0;						//will hold the value to inform who has won the game, X(10), O(100), and 0 is for no winner
	bool bDraw = false;							//will tell the computer when it is draw game
	unsigned int wColTotals[3] = {0};			//will hold the totals for the columns
	unsigned int wRowTotals[3] = {0};			//will hold the totals for the rows
	unsigned int wDiagTotals[2] = {0};			//will hold the totals for the diagnals, the total meanings are explained in the subfunctions, WinCheck and DrawCheck
	char cSelection;							//will hold the selection made by the user if they wish to end the game or restart the game
	
	
	//this main loop will govern if the user selected to restart the game or end the game
	do
	{
		//this while loop will execute during all nine turns
		while(bRunGame)
		{
			DispBoard(wBoard);				//function that will display the board

			bError = PlayerMove(wBoard);	//function that will get the user input and return in an input error has occured
		
			//if an error did occure.
			if(bError == true)
			{	
				continue;		//will bypass the rest of the code and continue with the loop
			}

			DispBoard(wBoard);				//displays the game board, with updated information

			Totals(wBoard, wColTotals, wRowTotals, wDiagTotals);		//function that totals up the Columns, Rows, and Diagnals
			
			wWin = WinCheck(wColTotals, wRowTotals, wDiagTotals);		//this will determine if someone has won

			bDraw = DrawCheck(wColTotals, wRowTotals, wDiagTotals);		//function that will see if a draw has occured	

			bRunGame = DisplayResult(wWin, bDraw);						//this will display if someone has won or drawn, return value is explained within the function

			//bRunGame == false when someone wins, loses, or draws.
			if(bRunGame == false)
				continue;				//will bypass the rest of the code

			ComputerMove(wColTotals, wRowTotals, wDiagTotals, wBoard);	//gets and places the computer move based on stratagy
			
			DispBoard(wBoard);				//displays the game board, with updated information

			Totals(wBoard, wColTotals, wRowTotals, wDiagTotals);		//function that totals up the Columns, Rows, and Diagnals
			
			wWin = WinCheck(wColTotals, wRowTotals, wDiagTotals);		//this will determine if someone has won

			bDraw = DrawCheck(wColTotals, wRowTotals, wDiagTotals);		//function that will see if a draw has occured	
		
			bRunGame = DisplayResult(wWin, bDraw);						//this will display if someone has won or drawn, return value is explained within the function

		}
	
	//promts the user for restarting or ending the game
	cout << "\nRe-(s)tart Game" << endl;
	cout << "E(x)it" << endl;
	printf("\nPlease press 's' or 'x' to make a selection: ");
	while(bRunGame == false)
	{
		cSelection = _getch();									//gets the input fromt he user

		if(cSelection == 'x')									//if selection is 'x' then it will end the program
		{
			printf("%c",cSelection);							//prints the selection made
			cout << endl;										//prints a return
			break;												//breaks out of the infinite loop
		}

		else if(cSelection == 's')								//if the user selects 's' then it will break from the loop and restart program
		{
			printf("%c",cSelection);							//prints the selection made
			for(int x = 0; x < 9; x++)							//sets all board spaces to be open or 0
				wBoard[x] = 0;
			
			bRunGame = true;									//will set the bRunGame to true to tell the computer to run the game loop
			break;												//break from the infinite loop
		}

		else	
			printf("\a\a");								//if user enters anything else it will erase it and give an alarm
	}

	}while(cSelection == 's');									//main loop that loops if cSelection is equal to 's'


}
