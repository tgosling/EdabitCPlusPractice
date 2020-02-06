#pragma once
#include <string>
#include <array>
#include <vector>
#include <map>
#include <math.h>
#include <algorithm>
#include <numeric>
#include <regex>
#include <utility>
#include <iostream>

/* Method Name: progressDays
	   Purpose: to track the amount of progress days comparing the current run to the previous run
	   Accepts: vector<int> runs
	   Returns:	int		*/
int progressDays(std::vector<int> runs);

/* Method Name: capStr
	   Purpose: capitalize the first letter in the string and the remaining lowercase 
	   Accepts: vector<string> vec
	   Returns:	vector<string>		*/
std::vector<std::string> capStr(std::vector<std::string> vec);

/* Method Name: letterCounter 
	   Purpose: count the letters in a vector of chars search for provided char 
	   Accepts: vector<vector<char>> arr, char c
	   Returns: int */
int letterCounter(std::vector<std::vector<char>> vec, char c);

/* Method Name: poundTree
 	   Purpose: print a tree of # based on h
	   Accepts: int h
	   Returns:	vector<vector<string>>		*/
std::vector<std::string> poundTree(int h);

/* Method Name: isPalindrome
	   Purpose: checks for palindrome regardless of punctuation and spaces
	   Accepts: string
	   Returns:	bool		*/
bool isPalindrome(std::string str);

/* Method Name: isOmniPresent
	   Purpose: checks to see if value is present in every subarray
	   Accepts: vector<vector<int>>, int
	   Returns:	bool		*/
bool isOmniPresent(std::vector<std::vector<int>> vec, int omniTest);

/* Method Name: calcMean
	   Purpose: returns mean value rounded to 2 decimal places
	   Accepts: vector<int>
	   Returns:	float		*/
float calcMean(std::vector<int>& vec);

/* Method Name: validatePIN
	   Purpose: validates pin to 4 or 6 digits
	   Accepts: string
	   Returns:	bool		*/
bool validatePIN(std::string& pin);

/* Method Name: censor
	   Purpose: censors words in a string that are longer than 4
	   Accepts: string
	   Returns: string	*/
std::string censor(std::string str);

/* Method Name: partiallyHide
	   Purpose: censors words in a string leaving first and last letter in each word
	   Accepts: string
	   Returns: string	*/
std::string partiallyHide(std::string phrase);

/* Method Name: ChallengesMED
	   Purpose: calls the medium challenge functions
	   Accepts: void
	   Returns: void	*/
void ChallengesMED();