#include "ChallengesMED.hpp"
#include "printContainer.hpp"

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

/* Method Name: coinCounter
	   Purpose: counts coins
	   Accepts: int, int, int, int, int
	   Returns:	vector<double>	*/
std::vector<double> coinCounter(int n, int d, int q, int l, int t) {
	std::vector<double> coinHold = { 0,0,0,0,0 };
	coinHold[0] = n * 0.05;
	coinHold[1] = d * 0.10;
	coinHold[2] = q * 0.25;
	coinHold[3] = l * 1.00;
	coinHold[4] = t * 2.00;
	return coinHold;
}


/* Method Name: billCounter
	   Purpose: counts currency in bill form
	   Accepts: int, int, int, int, int
	   Returns: vector<double> */
std::vector<double> billCounter(int f, int t, int tw, int fty, int h) {
	std::vector<double> billHold = { 0,0,0,0,0 };
	billHold[0] = f * 5;
	billHold[1] = t * 10;
	billHold[2] = tw * 20;
	billHold[3] = fty * 50;
	billHold[4] = h * 100;
	return billHold;
}


/* Method Name: censor
	   Purpose: censors words in a string that are longer than 4
	   Accepts: string
	   Returns: string	*/
string censor(string str) {
	//containers to hold separate 
	vector<string> words;
	string newWord, newStr;
	//seperate words
	for (int i = 0; i < str.length() + 1; ++i) {
		if (str[i] == ' ' || str[i] == '\0') {
			words.push_back(newWord);
			newWord = "";
		}
		else {
			newWord += str[i];
		}
	}
	string s;
	for (vector<string>::iterator it = words.begin(); it != words.end(); ++it) {
		if (it->size() > 4) {
			for (int i = 0; i != it->size(); ++i)
				s += "*";
			newStr += s;
			newStr.append(" ");
			s.clear();
		}
		else {
			newStr += *it;
			newStr.append(" ");
		}
	}
	newStr.pop_back();
	return newStr;
}


/* Method Name: ChallengesMED
	   Purpose: calls the medium challenge functions
	   Accepts: void
	   Returns: void	*/
void ChallengesMED() {
	//Medium
#pragma region MediumChallenges
	
	vector<int> runs = { 3,4,1,2 };

	printChar(10, '-');
	cout << "Edabit Medium Challenges";
	printChar(10, '-');
	cout << "\nRuns: ";
	printVec(runs);
	cout << "\nProgess days: ";
	int progDays = progressDays(runs);
	cout << progDays;

	cout << "\nSmall Tree:\n";
	vector<string> tree = {};
	tree = poundTree(3);
	printTree(tree);
	cout << "\nMedium Tree:\n";
	tree = poundTree(6);
	printTree(tree);
	vector<double> coins;
	coins = coinCounter(61, 102, 0, 30, 19);
	cout << "\nNickels = " << coins[0] << "\nDimes = " << coins[1] << "\nQuarters = " << coins[2] << "\nLoonies = " << coins[3] << "\nToonies = " << coins[4] << endl;
	cout << "\n" << endl;
	double coinTotal = 0.0;
	for (auto var : coins) {
		coinTotal += var;
	}
	cout << "\nCoin Total = " << coinTotal << endl;
	vector<double> bills;
	bills = billCounter(36, 0, 5, 0, 0);
	cout << "\nfives = " << bills[0] << "\nTens = " << bills[1] << "\nTwenties = " << bills[2] << "\nFifties = " << bills[3] << "\nHundos = " << bills[4] << endl;
	cout << "\n" << endl;
	double billTotal = 0.0;
	for (auto var : bills) {
		billTotal += var;
	}
	cout << "\nbill Total = " << billTotal << endl;
	cout << "\nTotal = " << coinTotal + billTotal << endl;

	//Test Data
	string pal = "racecar", notPal = "notpal", puncPal = "race,car", spacePal = "a man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!";
	cout << "\nis racecar is a palindrome? " << boolalpha << isPalindrome(pal) << endl;
	cout << "is notpal is a palindrome? " << boolalpha << isPalindrome(notPal) << endl;
	cout << "is race,car is a palindrome? " << boolalpha << isPalindrome(puncPal) << endl;
	cout << "is a man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama! a palindrome? " << boolalpha << isPalindrome(spacePal) << endl;

	cout << "\nLetter Counter" << endl;
	printChar(14, '-');
	vector<vector<char>> vec = {
		{'A','B','C','D'},
		{'D','B','H','R'},
		{'M','X','R','Y'},
		{'D','B','H','R'},
		{'M','X','R','Y'},
		{'A','B','C','D'}
	};

	char test = 'H';
	cout << "\n";
	print2DVec(vec);

	cout << "\nThere are " << letterCounter(vec, test) << " " << test << "'s in the word search" << endl;

	vector<vector<int>> vec1 = {
		{1,2},
		{2,3},
		{2,5},
		{5,2}
	};
	int testI = 2;

	cout << "is 2 omnipresent? " << isOmniPresent(vec1, testI) << endl;
	cout << "is 9 omnipresent? " << isOmniPresent(vec1, 9) << endl;

	vector<int> vec2 = { 1,1000, 21,18,948,360,285,314,900 };
	float mean = 0;

	cout << "vector contents: ";
	printVec(vec2);
	cout << "\nmean value = " << calcMean(vec2) << endl;

	string pin1 = "1234", pin2 = "a12", pin3 = "124578";

	cout << "pin1 = " << pin1 << "\tvalid? " << validatePIN(pin1) << endl;
	cout << "pin1 = " << pin2 << "\tvalid? " << validatePIN(pin2) << endl;
	cout << "pin1 = " << pin3 << "\tvalid? " << validatePIN(pin3) << endl;

	cout << censor("Two plus three is five") << endl;
#pragma endregion
}