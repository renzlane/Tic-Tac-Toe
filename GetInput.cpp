/******************************************************************************
 *FUNCTION GetInput
 *
 *
 *****************************************************************************/

#include "header.h"


void GetInput(string &userString, char &userChar)
{
	cout << "Enter your name: ";
	getline (cin, userString);

	cout << "Would you prefer X or O? Choose one: ";
	cin.get(userChar);
	cout << endl;
}
