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
