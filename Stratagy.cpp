unsigned int Stratagy(unsigned int wCTot[], unsigned int wRTot[], unsigned int wDTot[], unsigned int wBoard[])
{
	int nNumX = 0;							//will hold how many X's are on the table

	//this loop will count the X's, so the computer knows what move the game is on
	for(int i = 0; i < 9; i++)
	{
		if(wBoard[i] == 10)
			nNumX++;
	}
	
	
	switch(nNumX)
	{
		//First Move
		case 1:
			//If the center is open then take it
			if(wBoard[4] == 0)
				return 4;
			//if they took the center then take the first corner available
			else
			{
				for(int i = 0; i < 9; i += 2)
				{
					//checks for the open spot
					if(wBoard[i] == 0)
						return i;
				}
			}
			break;
		//Move Two
		case 2:
		{	
			//if the computer took the center spot
			if(wBoard[4] == 100)
			{
				//checks if the player took two specific spots, and checks to see if the special block spot is open and takes it
				//unlogical stratagy
				if(wBoard[7] == 10 && wBoard[5] == 10 && wBoard [6] == 0)
					return 6;
				else if(wBoard[1] == 10 && wBoard[5] == 10 && wBoard[8] == 0)
					return 8;
				else if(wBoard[3] == 10 && wBoard[1] == 10 && wBoard[2] == 0)
					return 2;
				else if(wBoard[3] == 10 && wBoard[7] == 10 && wBoard[8] == 0)
					return 8;
				else if(wBoard[0] == 10 && wBoard[7] == 10 && wBoard[3] == 0)
					return 3;
				else if(wBoard[2] == 10 && wBoard[7] == 10 && wBoard[3] == 0)
					return 3;
				//default move pattern(take the side spots)
				else
				{
					for(int x = 1; x < 9; x += 2)
					{
						if(wBoard[x] == 0)
							return x;
					}
				}
			}
			//if the player took the center spot
			if(wBoard[4] == 10)
			{
				//take the corner spots
				for(int k = 0; k < 9; k += 2)
				{
					if(wBoard[k] == 0)
						return k;
				}
				
			}


			break;
		}
		//Move Three
		case 3:
		{
			//checks to see if the player took specific spots, and checks if the block spots are open and takes it
			//considered to be unlogical stratagy
			if(wBoard[6] == 10 && wBoard[1] == 10 && wBoard[5] == 10 && wBoard[2] == 0)
				return 2;
			if(wBoard[0] == 10 && wBoard[5] == 10 && wBoard[7] == 10 && wBoard[8] == 0)
				return 8;
			if(wBoard[3] == 10 && wBoard[2] == 10 && wBoard[7] == 10 && wBoard[8] == 0)
				return 8;
			//NOTE: it does not break here, because the default move is covered in the default part of the switch statement
		}
		//default move pattern
		default:
			//first the computer will try to take the sides
			for(int k = 1; k < 9; k += 2)
			{
				if(wBoard[k] == 0)
					return k;
			}
			//then it will try to take the corners
			for(int k = 0; k < 9; k += 2)
			{
				if(wBoard[k] == 0)
					return k;
			}
			break;
	}

}