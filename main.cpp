//consider coding projects in languages other than C++

#include "header.h"

int main()
{
	// CONSTANTS (make table for this)

	// consider setfill('') for this
	const string PROMPT =
	" **************************************************************** \n"
	" *        WELCOME TO TIC-TAC-TOE! SELECT A NAME FIRST!          * \n"
	" **************************************************************** \n";

	const string PROMPT_2 =
	" **************************************************************** \n"
	" * 	       NOW SELECT A ROW & COLUMN TO PLAY!               * \n"
	" **************************************************************** \n";

	const string ERROR_PROMPT =
	"";

	// VARIABLES
	string playingBoard = "   1    2    3 \n"
						  "1    |    |    \n"
						  "  -------------\n"
					      "2    |    |    \n"
						  "  -------------\n"
						  "3    |    |    \n";

	string userName;					// user's name
	char   userRep;						// user's character selection
	int    userCoord[MAX_ROW][MAX_COL]; //
	int    userRow;						//
	int    userCol;						//

	string compName;
	char   compRep;						// user's character selection
	int    compCoord[MAX_ROW][MAX_COL];
	int    compRow;
	int    compCol;

	cout << PROMPT << endl;
	GetInput(userName, userRep);

	// TEST
//	cout << userName;
//	cout << userRep;

	cout << PROMPT_2     << endl
		 << playingBoard << endl;
	GetUserPlay(userCoord, PROMPT, playingBoard, userName);



	;
}

