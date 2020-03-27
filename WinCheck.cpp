unsigned int WinCheck(unsigned int wColTotals[], unsigned int wRowTotals[], unsigned int wDiagTotals[])
//will see who has won

//-returns 10 if X won
//-returns 100 if O won
//-returns 0 if no one has won
{
	//this will go through the three arrays and find if any totals = 30(x wins) or 300(o wins)
	for(int i = 0; i <= 2; i++)
	{
		//if any column is = 30 then x won
		if(wColTotals[i] == 30)
			return 10;									
		//if any column is = 300 then o won
		else if(wColTotals[i] == 300)
			return 100;							

		//if any row is = 30 then x won
		if(wRowTotals[i] == 30)
			return 10;
		//if any row is = 300 then o won
		else if(wRowTotals[i] == 300)
			return 100;


		if(i <= 1)
		{
			//if any diagnal is = 30 then x won
			if(wDiagTotals[i] == 30)
				return 10;
			//if any diagnal is = 300 then o won
			else if(wDiagTotals[i] == 300)
				return 100;
		}

	}

	return 0;	//if no one won then will return 0

}
