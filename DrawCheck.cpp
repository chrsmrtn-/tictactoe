bool DrawCheck(unsigned int wColTotals[], unsigned int wRowTotals[], unsigned int wDiagTotals[])
//will check for a draw game

//returns a true/false value
//true if there was a draw
//false if there was not a draw
{
	bool bDraw = false;				//variable to return to tell the computer if draw occured
	int nCol = 0;					//counts the amout of drawed out columns
	int nRow = 0;					//counts the amount of drawed out rows
	int nDiag = 0;					//counts the amount of drawed out diagnols

	for(int i = 0; i < 3; i ++)
	//will loop for the 3 array slots and check to see if the totals equal a drawed row, column, or diagnal ex: xox (when added = 120)
	{
		if(wColTotals[i] == 110 || wColTotals[i] == 210 || wColTotals[i] == 120) 
			nCol++;				//if draw is found then it will increment the counter for columns

		if(wRowTotals[i] == 110 || wRowTotals[i] == 210 || wRowTotals[i] == 120)
			nRow++;				//if row draw is found then it will increment the counter for rows


		if(i < 2)
		//since there are two diagnals, then we ignore the last count(3) in the "i" loop
		{
			if(wDiagTotals[i] == 110 || wDiagTotals[i] == 210 || wDiagTotals[i] == 120)
				nDiag++;		//if diagnal draw is found then it will increment the counter for diagnals
		}
	}

	if((nCol == 3) && (nDiag = 2) && (nRow == 3))		//if there is a draw in all columns, rows, and diagnals then it is a draw game
		bDraw = true;									//returns draw game

	return bDraw;										//default is false, and will return false is no draw game was found
}
