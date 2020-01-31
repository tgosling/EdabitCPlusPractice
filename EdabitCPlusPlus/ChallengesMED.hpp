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
int progressDays(std::vector<int> runs) {
	int progressHold = 0;
	for (int i = (runs.size() - 1); i > 0; i--) {
		if (runs[i] > runs[i - 1])
			progressHold++;
	}
	return progressHold;
}

/* Method Name: capStr
	   Purpose: capitalize the first letter in the string and the remaining lowercase 
	   Accepts: vector<string> vec
	   Returns:	vector<string>		*/
std::vector<std::string> capStr(std::vector<std::string> vec) {
	for (auto str : vec) {
		std::transform(str.begin(), str.end(), str.begin(), ::tolower);
		str[0] = ::toupper(str[0]);
	}
	return vec;
}


/* Method Name: letterCounter 
	   Purpose: count the letters in a vector of chars search for provided char 
	   Accepts: vector<vector<char>> arr, char c
	   Returns: int */
int letterCounter(std::vector<std::vector<char>> vec, char c) {
	int hold = 0;
	for (auto srch : vec) {
		for (int i = 0; i < srch.size(); ++i) {
			if (srch[i] == c) {
				++hold;
			}
		}
	}
	return hold;
}

/* Method Name: poundTree
 	   Purpose: print a tree of # based on h
	   Accepts: int h
	   Returns:	vector<vector<string>>		*/
std::vector<std::string> poundTree(int h) {
	std::vector<std::string> treeHold = {};
	std::string row;
	std::string spaces;
	int width = (h * 2) - 1;
	if (h == 0) 
		return treeHold;
	else {
		for (int i = 0; i < h; ++i) {
			spaces = std::string((h / 2) - 1, ' ');
			row = spaces + std::string(((i + 1) * 2) - 1, '#') + spaces;
			treeHold.push_back(row);
		}
	}
	return treeHold;
}

/* Method Name: isPalindrome
	   Purpose: checks for palindrome regardless of punctuation and spaces
	   Accepts: string
	   Returns:	bool		*/
bool isPalindrome(string str) {
	std::string hold, palCheck;
	for (std::string::iterator it = str.begin(); it != str.end(); ++it) {
		if (std::isalpha(*it))
			hold += ::tolower(*it);
	}
	palCheck = hold;
	reverse(hold.begin(), hold.end());
	if (palCheck == hold)
		return true;
	else
		return false;
}