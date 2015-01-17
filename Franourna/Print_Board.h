
void Print_Board(char B[][])
{
	int height = 5;
	int width = 9;
	int h = 1;
	int w = 1;

	for (h <= height; h++)
	{
		for (w <= width; w++)
		{
			cout << Board[h][w];
		}
		if (h = 5)
		{cout << endl;}
		else {cout << "\n";}
	}
}