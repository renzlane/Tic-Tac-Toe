#ifndef HEADER_H_
#define HEADER_H_

//preprocessor directives

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

//global constants

const int MAX_ROW = 3;
const int MAX_COL = 3;

//user-defined types

//prototypes

//
void   GetInput(string &userString, char &userChar);

//
void   GetUserPlay(int userCoord[][MAX_COL], const string PROMPT,
				   const string PROMPT_2,    const string USER_NAME);


void   ErrorCheck(const string PROMPT, int userInt);

#endif /* HEADER_H_ */
