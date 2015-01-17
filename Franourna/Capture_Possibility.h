bool Capture_Possibility (char color , char B[][])
{	
	int height    = 5;
	int h 	   	  = 1;
	int width 	  = 9;
	int w 		  = 1;
	int moveCount = 0;
	
	for (h <= height; h++)
    {
        for (w <= width; w++)
        {
            if (B[h][w] == color && Capture_Check(h,w,B[][]) == true)
			{
				moveCount += 1;
			}
        }
    }
	
	if (moveCount > 0)
	{
		return true;
	}
}