//Preprocessor Directives
#include <stdlib.h>				//needed for system statement
#include <iostream>			//needed for cout statements
using namespace std;


void DispBoard(unsigned int wBoard[])
//this will display the board, and check to see what spaces where taken on the board
{
	system("cls");										//clears the output screen

	cout << endl;										//clears the input and output buffer, and prints a return

	cout << "\t\t\t    ";								//sets up to center the board on screen
	
	//this for loop will chech the wBoard array to see where the moves were placed so far
	//and will print it on the screen
	for(int i = 0; i < 9; i++)
	{

		//because the bottom line does not need the underline, this while separates that print
		while(i < 6)
		{
			//this will see if a X(10) or a O(100) was placed on the board, if no sace was taken
			//then it will print the array index number for the user input reference
			if(wBoard[i] == 10)
				cout << "__X__";
			else if(wBoard[i] == 100)
				cout << "__O__";
			else
				cout << "_[" << i << "]_";
			
			//this will check for when the vertical lines need to be printed
			if((i == 0) || (i == 1) || (i == 3) || (i == 4))
				cout << "|";
			//this will check for when a return needs to be printed(every 3 index values.
			if(((i + 1) % 3) == 0)
			{
				cout << endl;
				cout << "\t\t\t    ";					//sets up to center the board on screen
			}
			//increments counter
			i++;
		}
		
		//this is for the last line, note: there are no underlines
		if(wBoard[i] == 10)
			cout << "  X  ";
		else if(wBoard[i] == 100)
			cout << "  O  ";
		else
			cout << " [" << i << "] ";
		
		//this will print the vertical lines where needed
		if((i == 6) || (i == 7))
			cout << "|";

	}
	//prints the final return
	cout << endl;
}
