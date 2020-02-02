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
string removeVowels(string str) {
	return regex_replace(str, regex("[aeiouAEIOU]"), string(""));
}

/* Method Name: leftShift
	   Purpose: left shift the vector the number of times given
	   Accepts: vector<int> vec, int num
	   Returns:	vector<int>		*/
vector<int> leftShift(vector<int> vec, int num) {
	for (int i = 0; i < num; i++) {
		int temp = vec[0];
		vec.erase(vec.begin());
		vec.push_back(temp);
	}
	return vec;
}

/* Method Name: rightShift
	   Purpose: right shift the vector the number of times given
	   Accepts: vector<int> vec, int num
	   Returns:	vector<int>		*/
vector<int> rightShift(vector<int> vec, int num) {
	for (int i = 0; i < num; i++) {
		int temp = vec[vec.size() - 1];
		vec.pop_back();
		vec.insert(vec.begin(), temp);
	}
	return vec;
}

/* Method Name: formatPhoneNumber
	   Purpose: format a vector into a phone number string
	   Accepts: vector<int> vec
	   Returns: string str			*/
string formatPhoneNumber(vector<int> vec) {
	string str;
	str.reserve(16);
	for (auto n : vec)
		str.append(to_string(n));
	str.insert(0, "(");
	str.insert(4, ")");
	str.insert(5, " ");
	str.insert(9, "-");
	return str;
}

/* Method Name: findNemo
	   Purpose: find the word Nemo in a sentence
	   Accepts: string sentence
	   Returns:	string		*/
string findNemo(string sentence) {
	//Variables
	vector<string> words;
	string word = "";
	int in = 1;
	//Find word in sentence and add it to words
	for (char i : sentence) {
		if (i == ' ') {
			words.push_back(word);
			word = "";
		}
		else
			word += i;
	}
	//Check for nemo in words
	for (string word : words) {
		if (word == "Nemo")
			return "I found Nemo at " + to_string(in) + "!";
		++in;
	}
}

/* Method Name: findWord
	   Purpose: find a given word from a string
	   Accepts: string word, string sentence
	   Returns:	vector<string> 		*/
vector<string> findWord(string word, string sentence) {
	//variables
	vector<string> words;
	string wordHold = "";
	vector<string> wordFound;
	int at = 1;
	//find words in setence
	for (char i : sentence) {
		if (i == ' ') {
			words.push_back(wordHold);
			wordHold = "";
		}
		else
			wordHold += i;
	}
	//check for word in words
	for (string str : words) {
		if (str == word)
			wordFound.push_back("The word, " + word + " was found at " + to_string(at) + "!");
		at++;
	}
	if (wordFound.empty())
		wordFound.push_back("The word, " + word + " was not found at all");
	return wordFound;
}

/* Method Name: convertCartesian
	   Purpose: convert two vectors into cartesian coordinate pairs
	   Accepts: vector<int> x, vector<int> y
	   Returns:	map<int, int>		*/
map<int, int>  convertCartesian(vector<int> x, vector<int> y) {
	map<int, int> coords;
	if (x.size() == y.size()) {
		for (int i = 0; i < x.size(); ++i) {
			pair<int, int> cCoord = make_pair(x[i], y[i]);
			coords.emplace(cCoord);
		}
	}
	else
		cout << "Vectors do not have the same amout of coordinates\n";

	return coords;
}

/* Method Name: convertCartesianVec
	   Purpose: convert two vectors into cartesian coordinate vector of vectors
	   Accepts: vector<int> x, vector<int> y
	   Returns: vector<vector<int>>			*/
vector<vector<int>> convertCartesianVec(vector<int> x, vector<int> y) {
	vector<vector <int>> hold;
	for (int i = 0; i < x.size(); ++i) {
		hold.push_back({ x[i],y[i] });
	}
	return hold;
}

/* Method Name: sortStrBySize
	   Purpose: to sort two strings by size
	   Accepts: string a, atring b
	   Returns:	bool		*/
bool sortStrBySize(string a, string b) {
	return a.length() < b.length();
}

/* Method Name: sortVecStringByLength
	   Purpose: to sort a vector of strings by length
	   Accepts: vector<string> vec
	   Returns:	vector<string>		*/
vector<string> sortVecStrByLength(vector<string> arr) {
	sort(arr.begin(), arr.end(), sortStrBySize);
	return arr;
}