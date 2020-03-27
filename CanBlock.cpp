unsigned int CanBlock(unsigned int wCTot[], unsigned int wRTot[], unsigned int wDTot[], unsigned int wBoard[])
{
	for(int i = 0; i <= 2; i++)
	{
		//if the column total is equal to 20, then it will search within that column and return the number for the empty spot
		if(wCTot[i] == 20)
		{
			for(int c = i; c <= (i + 6);c += 3 )
			{
				if(wBoard[c] == 0)
					return c;
			}
		}
		
		//if the row total is queal to 20, then it will search within that row and return the number for the empty spot
		if(wRTot[i] == 20)
		{
			for(int r = i * 3; r <= (i * 3) + 2; r ++)
			{
				if(wBoard[r] == 0)
					return r;
			}
		}
		
		//this if makes sure that i will not refer to the third element of my diagnal array, since there is none.
		if(i <= 1)
		{
			//if the diagnal total is equal to 20, it will search within that diagnal and return the number for the empty spot
			if(wDTot[i] == 20)
			{
				for(int d = (i * 2); d <= 8 - (2 * i); d = d + 4-(i * 2))
				{
					if(wBoard[d] == 0)
						return d;
				}
			}
		}
	}
	return 100;

}