/******************************************************************************
 *FUNCTION GetUserPlay
 *
 *
 *****************************************************************************/

#include "header.h"

//research how to return, if possible, one value instead of two coordinates

void GetUserPlay(int userCoord[][MAX_COL], const string PROMPT,
				const string PROMPT_2,    const string USER_NAME)
{
	int userCoordinates;
	int userRow;
	int userCol;

	// or try using separate variables for the row, col; might be forced to do so

	cout << "Enter coordinates for " << USER_NAME << "\'s play: ";
	cin  >> userRow;
	// ErrorCheck();
	cin  >> userCol;
	// ErrorCheck();
	// error check for commas


	// TEST
//	cout << userRow;
//	cout << userCol;

}
