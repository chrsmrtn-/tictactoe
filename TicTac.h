
//Function Prototypes

//descriptions of each function can be found to the right...
void DispBoard(unsigned int[]);													//will reprint the game board
bool PlayerMove(unsigned int []);												//will get the characters move
void Totals(unsigned int[], unsigned int[], unsigned int[], unsigned int[]);	//will get the column, row, and diagnals totals for WinCheck and DrawCheck
unsigned int WinCheck(unsigned int [], unsigned int[], unsigned int []);		//will see who has won
bool DrawCheck(unsigned int[], unsigned int[], unsigned int[]);					//will check for a draw game
bool DisplayResult(unsigned int, bool);											//will display the result of the WinCheck or DrawCheck, if needed
unsigned int CanWin(unsigned int[], unsigned int[], unsigned int[], unsigned int[]);		//will see if the computer has a chance to win and returns the index number of where to go
unsigned int CanBlock(unsigned int[], unsigned int[], unsigned int[], unsigned int[]);	//will see if the computer has a chance to block and returns the indes number of where to go
void ComputerMove(unsigned int[], unsigned int[], unsigned int[], unsigned int[]);		//will get the computer move from AI elements
unsigned int Stratagy(unsigned int[], unsigned int[], unsigned int[], unsigned int[]);	//will return the move based on the computer stratagy