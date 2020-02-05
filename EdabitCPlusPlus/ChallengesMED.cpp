#include "ChallengesMED.hpp"

using namespace std;

/* Method Name: progressDays
	   Purpose: to track the amount of progress days comparing the current run to the previous run
	   Accepts: vector<int> runs
	   Returns:	int		*/
int progressDays(vector<int> runs) {
	int progressHold = 0;
	for (int i = (runs.size() - 1); i > 0; i--) {
		if (runs[i] > runs[i - 1])
			progressHold++;
			progressHold++;
	}
	return progressHold;
}

/* Method Name: capStr
	   Purpose: capitalize the first letter in the string and the remaining lowercase
	   Accepts: vector<string> vec
	   Returns:	vector<string>		*/
vector<string> capStr(vector<string> vec) {
	for (auto str : vec) {
		transform(str.begin(), str.end(), str.begin(), ::tolower);
		str[0] = ::toupper(str[0]);
	}
	return vec;
}


/* Method Name: letterCounter
	   Purpose: count the letters in a vector of chars search for provided char
	   Accepts: vector<vector<char>> arr, char c
	   Returns: int */
int letterCounter(vector<vector<char>> vec, char c) {
	int hold = 0;
	for (vector<vector<char>>::iterator it = vec.begin(); it != vec.end(); ++it) {
		for (vector<char>::iterator itr = it->begin(); itr != it->end(); ++itr)
			if (*itr == c)
				++hold;
	}
	return hold;
}

/* Method Name: poundTree
	   Purpose: print a tree of # based on h
	   Accepts: int h
	   Returns:	vector<vector<string>>		*/
vector<string> poundTree(int h) {
	vector<string> treeHold = {};
	string row;
	string spaces;
	int width = (h * 2) - 1;
	if (h == 0)
		return treeHold;
	else {
		for (int i = 0; i < h; ++i) {
			spaces = string((h / 2) - 1, ' ');
			row = spaces + string(((i + 1) * 2) - 1, '#') + spaces;
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
	string hold, palCheck;
	for (string::iterator it = str.begin(); it != str.end(); ++it) {
		if (isalpha(*it))
			hold += ::tolower(*it);
	}
	palCheck = hold;
	reverse(hold.begin(), hold.end());
	if (palCheck == hold)
		return true;
	else
		return false;
}

/* Method Name: isOmniPresent
	   Purpose: checks to see if value is present in every subarray
	   Accepts: vector<vector<int>>, int
	   Returns:	bool		*/
bool isOmniPresent(vector<vector<int>> vec, int omniTest) {
	bool flag;
	for (vector<vector<int>>::iterator itRow = vec.begin(); itRow != vec.end(); ++itRow) {
		flag = false;
		for (vector<int>::iterator itCol = itRow->begin(); itCol != itRow->end(); ++itCol) {
			if (*itCol == omniTest) {
				flag = true;
			}
			if (!flag)
				return false;
		}
	}
	return true;
}

/* Method Name: calcMean
	   Purpose: returns mean value rounded to 2 decimal places
	   Accepts: vector<int>
	   Returns:	float		*/
float calcMean(vector<int>& vec) {
	float hold = 0;
	for (vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {
		hold += *it;
	}
	hold = (hold / vec.size());
	float rounded = round(hold * 100.0) / 100.0;
	return rounded;
}

/* Method Name: validatePIN
	   Purpose: validates pin to 4 or 6 digits
	   Accepts: string
	   Returns:	bool		*/
bool validatePIN(string& pin) {
	if (pin.empty())
		return false;
	return regex_match(pin, regex(R"(\d{6}|\d{4})"));
}