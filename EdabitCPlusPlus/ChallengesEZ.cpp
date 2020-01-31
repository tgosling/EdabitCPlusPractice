#include "ChallengesEZ.hpp"

using namespace std;


/* Method Name: identicalFilter
	   Purpose: traverse through an array and return values that have identical numbers throughout
	   Accepts: vector<string> arr
	   Returns: vector<string> hold */
vector<string> identicalFilter(vector<string> arr) {
	//variables
	vector<string> hold = {};
	bool isIdent;
	char testCh;
	//loop through vector contents
	for (int i = 0; i < arr.size(); i++) {
		isIdent = true;
		//assign first value in number to test
		testCh = arr[i][0];
		//loop through number values
		for (int j = 0; j < arr[i].size(); j++) {
			if (testCh != arr[i][j]) {
				isIdent = false;
				break;
			}
		}
		//add to hold if number is identical
		if (isIdent)
			hold.push_back(arr[i]);
	}
	return hold;
}

/* Method Name: stringPartition
	   Purpose: divide a string based on N-value
	   Accepts: string s, int n
	   Returns: vector<string>      */
vector<string> stringPartition(string s, int n) {
	//variables
	vector<string> vHold;
	string strHold;

	//loop through word
	for (int i = 0; i < s.length(); ++i) {
		for (int j = 0; j < n; j++) {
			strHold += s[i + j];
		}
		vHold.push_back(strHold);
		strHold = "";
	}
	return vHold;
}

/* Method Name: minMaxLengthAvg
	   Purpose: determines the minimum value, max value, length of array and average value
	   Accepts: vector<float> arr
	   Returns: vector<float> arr*/
vector<double> minMaxLengthAvg(vector<double>& arr) {
	//variables
	vector<double> vHold = { 0,0,0,0 };
	//min & max
	vHold[0] = *min_element(arr.begin(), arr.end());
	vHold[1] = *max_element(arr.begin(), arr.end());
	//Accumulate
	vHold[2] = arr.size();
	vHold[3] = accumulate(arr.begin(), arr.end(), 0.0) / arr.size();
	return vHold;
}


/* Method Name: getExtension
	   Purpose: get the extension type for the given string in a vector
	   Accepts: vector<string> vec
	   Returns:	vector<strig>		*/
vector<string> getExtension(vector<string>& vec){
	vector<string> holdVec;
	string holdStr;
	for (int i = vec.size() - 1; i >= 0; i--) {
		for (int j = vec[i].size() - 1; j >= 0; j--) {
			if (vec[i][j] == '.') {
				holdStr = vec[i].erase(0, j + 1);
				holdVec.push_back(holdStr);
				break;
			}
		}
	}
	return holdVec;
}

/* Method Name: removeVowels
	   Purpose: remove vowels from a string, Y not included
	   Accepts: string str
	   Returns:	string		*/
std::string removeVowels(std::string str) {
	return std::regex_replace(str, std::regex("[aeiouAEIOU]"), std::string(""));
}