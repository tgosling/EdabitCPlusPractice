#pragma once
#include <string>
#include <array>
#include <vector>
#include <iostream>
#include <algorithm>
#include <numeric>
#include <regex>
#include <map>
#include <utility>

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
bool isPalindrome(string str);