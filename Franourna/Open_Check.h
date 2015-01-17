bool Open_Check (int U_D , int L_R , int color , char B[][])
{	
	int openCount = 0;
	
	//corners
	if (U_D == 1 && L_R == 1)
	{
		if (B[1][2] == "O")	{ openCount += 1; }
		if (B[2][2] == "O")	{ openCount += 1; }
		if (B[2][1] == "O")	{ openCount += 1; }
	}
	else if (U_D == 1 && L_R == 9)
	{		
		if (B[2][8] == "O")	{ openCount += 1; }
		if (B[1][8] == "O")	{ openCount += 1; }
		if (B[2][9] == "O")	{ openCount += 1; }
	}
	else if (U_D == 5 && L_R == 1)
	{
		if (B[4][1] == "O")	{ openCount += 1; }
		if (B[4][2] == "O")	{ openCount += 1; }
		if (B[5][2] == "O")	{ openCount += 1; }
	}
	else if (U_D == 5 && L_R == 9)
	{
		if (B[5][8] == "O")	{ openCount += 1; }
		if (B[4][8] == "O")	{ openCount += 1; }
		if (B[4][9] == "O")	{ openCount += 1; }
	}	
	
	//top
	else if (U_D == 1 && even(L_R) == true)
	{		
		if (B[1][L_R+1] == "O")	{ openCount += 1; }
		if (B[2][L_R]   == "O")	{ openCount += 1; }
		if (B[1][L_R-1] == "O")	{ openCount += 1; }
	}
	else if (U_D == 1 && even(L_R) != true)
	{		
		if (B[1][L_R+1] == "O")	{ openCount += 1; }
		if (B[2][L_R+1] == "O")	{ openCount += 1; }
		if (B[2][L_R]   == "O")	{ openCount += 1; }
		if (B[2][L_R-1] == "O")	{ openCount += 1; }
		if (B[1][L_R-1] == "O")	{ openCount += 1; }
	}
	
	//bottom
	else if (U_D == 5 && even(L_R) == true)
	{
		if (B[5][L_R-1] == "O")	{ openCount += 1; }
		if (B[4][L_R]   == "O")	{ openCount += 1; }
		if (B[5][L_R+1] == "O")	{ openCount += 1; }
	}
	else if (U_D == 5 && even(L_R) != true)
	{
		if (B[5][L_R-1] == "O")	{ openCount += 1; }
		if (B[4][L_R-1] == "O")	{ openCount += 1; }
		if (B[4][L_R1]  == "O")	{ openCount += 1; }
		if (B[4][L_R+1] == "O")	{ openCount += 1; }
		if (B[5][L_R+1] == "O")	{ openCount += 1; }
	}
	
	//left
	else if (even(U_D) == true && L_R == 1)
	{
		if (B[U_D+1][1] == "O")	{ openCount += 1; }
		if (B[U_D][2]   == "O")	{ openCount += 1; }
		if (B[U_D-1][1] == "O")	{ openCount += 1; }
	}
	else if (even(U_D) != true && L_R == 1)
	{
		if (B[U_D+1][1] == "O")	{ openCount += 1; }
		if (B[U_D+1][2] == "O")	{ openCount += 1; }
		if (B[U_D][2]   == "O")	{ openCount += 1; }
		if (B[U_D-1][2] == "O")	{ openCount += 1; }
		if (B[U_D-1][1] == "O")	{ openCount += 1; }
	}
	
	//right
	else if (even(U_D) == true && L_R == 9)
	{
		if (B[U_D-1][9] == "O")	{ openCount += 1; }
		if (B[U_D][8]   == "O")	{ openCount += 1; }
		if (B[U_D+1][9] == "O")	{ openCount += 1; }
	}
	else if (even(U_D) != true && L_R == 9)
	{
		if (B[U_D-1][9] == "O")	{ openCount += 1; }
		if (B[U_D-1][8] == "O")	{ openCount += 1; }
		if (B[U_D][8]   == "O")	{ openCount += 1; }
		if (B[U_D+1][8] == "O")	{ openCount += 1; }
		if (B[U_D+1][9] == "O")	{ openCount += 1; }
	}
	
	//middle
	else if ((even(U_D) == true && even(L_R) != true) || (even(U_D) != true && even(L_R) == true)
	{
		if (B[U_D+1][L_R] == "O")	{ openCount += 1; }
		if (B[U_D][L_R+1] == "O")	{ openCount += 1; }
		if (B[U_D-1][L_R] == "O")	{ openCount += 1; }
		if (B[U_D][L_R-1] == "O")	{ openCount += 1; }
	}
	else 
	{	
		int U = U_D - 1;
		int D = U_D + 1;
		int L = L_R - 1;	
		int R = L_R + 1;
		
		for (L <= R; L++)
		{	
			for (U <= D; U++)
			{
				if (B[U][L] == "O")
				{
					openCount += 1;
				}
			}
		}
		
		if (B[U_D][L_R] = "O")
		{
			openCount -= 1;
		}
	}
	
	//return values
	if (openCount <= 0)
	{
		return false;
	}
	
	return true;	
}
	
//could use a switch statement for all the exceptions above.

