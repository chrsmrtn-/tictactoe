void Totals(unsigned int wBoard[], unsigned int wColTotals[], unsigned int wRowTotals[], unsigned int wDiagTotals[])
//will get the column, row, and diagnals totals for WinCheck and DrawCheck
//for this program:
// x = 10, which is assigned to wBoard[] during PlayerMove
// o = 100, which is assigned to wBoard[] during ComputerMove
{
	//this will reset the arrays
	for(int x = 0; x <=2; x++)
	{
		wColTotals[x] = 0;
		wRowTotals[x] = 0;

		if(x < 2)
			wDiagTotals[x] =0;
	}

	//this loop will count up the 10's and 100's based on the user and computer input
	for(int i = 0; i <= 2; i++)
	{
		for(int c = (i * 3); c <= ((i*3) + 2); c++)
			wRowTotals[i] += wBoard[c];					//increments the column totals for each of the 3 columns by useing array
		for(int r = i; r <= i + 6; r+=3)
			wColTotals[i] += wBoard[r];					//adds the row totals for each of the 3 rows by using array
	}

	wDiagTotals[0] = wBoard[0] + wBoard[4] + wBoard[8];	//adds the first diagnal and saves it to the array slot
	wDiagTotals[1] = wBoard[2] + wBoard[4] + wBoard[6]; //adds the second diagnal and saves it to the array slot
}
