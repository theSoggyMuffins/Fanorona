

char Board[5][9] = {{B,B,B,B,B,B,B,B,B},
                    {B,B,B,B,B,B,B,B,B},
                    {B,W,B,W,O,B,W,B,W},
                    {W,W,W,W,W,W,W,W,W},
                    {W,W,W,W,W,W,W,W,W}};

int B_Count = 22;
int W_Count = 22;
char turnColor;


while (B_Count != 0 && W_Count != 0)
{
    /*********************************/
	//initiate the turn:
int ticker = 0;

if ( ticker % 2 == 0 )
{
    cout << "White Player's Turn:" << endl;
	turnColor = "W";
}
else
{
    cout << "Black Player's Turn:" << endl;
	turnColor = "B";
}
    /*********************************/
	//print the board:
Print_Board(Board[][])
    /*********************************/
	//check for ties:
if ((B_Count == 2 && W_Count == 1) || (B_Count == 1 && W_Count == 2))
{
	break;
}	
    /*********************************/
	//check if there are possible moves and state the options:
if (Possible_Move_Check(turnColor , Board[][]) == true)
{
	Possible_Move_Check(turnColor , Board[][])
}
else
{
	cout << "there are no possible moves for this player"
	     << endl;
	continue; 
} 
    /*********************************/
//PT A
cout << "Enter Piece space: [Press Return to submit] \n"
     << "Once you enter a viable space, you cannot choose to un-do it \n"
     << "Options are: [W->E : 1->9  &  N->S : 1->5]"
     << endl;
//put in options for special commands
cout << "W->E wise:"
int EW;
cin >> EW;

cout << "N->S wise:"
int NS;
cin >> NS;
    /*********************************/
	//check for legality of chosen space:
if (Board[NS][EW] == "O")
{
	cout << "Board space chosen doesn't contain a piece.  Choose again."
		 << endl;
	//break to PT A?
}
if (Board[NS][EW] != turnColor)
{
	cout << "The selected space is either not occupied or not your color.  Choose again."
	     << endl;
	//break to PT A?
}
if (Open_Check (NS , EW , turnColor , Board[][]) != true)
{
	cout << "The selected space cannot move though another piece can.  Choose again."
	     << endl;
	//break to PT A?
}
if ( (Capture_Possibility(turnColor , Board[][]) == true) && (Capture_Check(NS , EW , Board[][]) != true) )
{
	cout << "The selected space cannot capture but another piece can.  Choose again."
	     << endl;
	//break to PT A?
}
    /*********************************/
//PT B
cout << "Enter Move: [Press Return to submit] \n"
     << "Options are: [N S E W ; see Rules for details]"
     << endl;
//put in options for special commands
char Move;
cin >> Move;
    /*********************************/
//check to see if the move is legal.  if not, state so and return to "PT B"
//this includes moving back to any original position pertaining to this turn.
    /*********************************/
//iff there is a possible capture, check to see if the position selected cannot capture: return to "PT B" if so.
//NOTE: part of this check is for chain moves: it is redundant for the first move of a turn.
    /*********************************/
//check to see if the player can choose toward or behind capture option: state and ask if so.
    /*********************************/
//check so see of there are additional pieces within the vector of movement which can captured automatically.
//capture them as well if so.
    /*********************************/
//capture all relevant pieces and update the board
//this also means re-assigning the position of the capturing piece as well.
    /*********************************/
//print the updated board (turn into an h file).
//print the new number of B and W pieces.
//while statement could break here.
    /*********************************/
//check to see if there is another possible capture: if so state so and return to "PT B" above.
//if not, state that the player's turn ends
    /*********************************/
//PT C	
ticker++;
}


