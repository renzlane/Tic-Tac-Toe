/******************************************************************************
 *FUNCTION ErrorCheck
 *
 *
 *****************************************************************************/

#include "header.h"

void ErrorCheck(const string PROMPT, int userInt)
{
	if(cin.fail())
	{
		do
		{
			cin.clear();
			cin.ignore(10000, '\n');

			// specify what needs to be inputed correctly
			cout << " *** INVALID INPUT *** - Please enter a valid input";
			cout << PROMPT;

		}while(cin.fail());
	}
	if(userInt > 3 && userInt < 1)
	{
		do
		{
			cin.clear();
			cin.ignore(10000, '\n');

			// specify what needs to be inputed correctly
			cout << " *** INVALID INPUT *** - Please enter a valid input";
			cout << PROMPT;

		}while(userInt > 3 && userInt < 1);
;
	}
}

//
