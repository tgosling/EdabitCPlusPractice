// EdabitCPlusPlus.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//Headers
#include "ChallengesVE.hpp"
#include "ChallengesEZ.hpp"
#include "ChallengesMED.hpp"
#include "printContainer.hpp"
//Libraries
#include <iostream>
#include <string>
#include <vector>

using namespace::std;

bool isPalindrome(string str) { 
	string::iterator end_pos = remove(str.begin(), str.end(), ' ');
	str.erase(end_pos, str.end());
	end_pos = remove_if(str.begin(), str.end(), ispunct);
	str.erase(end_pos, str.end());
	string hold = str;
	reverse(hold.begin(), hold.end());
	if (str == hold)
		return true;
	else
		return false;
}

int main()
{
	//Variables for tests
	int a = 5, b = 4, c = 0;
	float f1 = 0.2;
	string str1 = "", str2 = "Break free", strPal = "mom", usrInput;
	int arr1[] = { 1,2,3 }, arr2[] = { 23,45,67,89 };
	vector<int> v = { 10,12,13,22,1 }, phone = { 1,2,3,4,5,6,7,8,9,0 }, runs = { 3,4,1,2 };
	vector<double> vDbl = { 11.1, 12, 112, 99 };
	vector<string> fileExt = { "array.html", "marker.exe", "website.css", "oscar.win" };
	
	
	//Tests
	std::cout << "Hello World!" << endl;
	cout << "Which challenge set would you like to see?" << endl;
	cout << "1) Very Easy\n2) Easy\n3) Medium\n4) Hard" << endl;
	cin >> usrInput;
	if (usrInput == "1" || usrInput == "Very Easy") {
		//Very Easy
#pragma region VeryEasyChallenges
		printChar(10, '-');
		cout << "Edabit Very Easy Challenges";
		printChar(10, '-');

		cout << "\nAddition: 5 + 9 = ";
		c = addition(a, b);
		cout << c;
		cout << "\nIncrement by 1: " << incrementByOne(c) << endl;
		cout << "the remainder of " << a << " % " << b << "= " << checkRemainder(a, b) << endl;
		cout << "Count chickens, cows and pigs feet on farm\nChickens=" << a
			<< "\nCows = " << b << "\nPigs = " << c << "\nTotal Legs: " << animalLegs(a, b, c) << endl;
		cout << "Is a = " << a << " divisible by 5? " << std::boolalpha << divisbleByFive(a) << endl;
		cout << "Is b = " << b << " less than or equal to zero? " << std::boolalpha << lessThanOrEqualToZero(b) << endl;
		cout << "Is it a profitable gamble if the prize is " << 30 << ", but you pay = " << b << " " << std::boolalpha << profitableGamble(f1, 30, a) << endl;
		cout << "Is 2012/12/22 Christmas Eve? " << timeForMilkandCookies(2012, 12, 22) << endl;
		cout << "Is str1 empty? str1 contents '" + str1 << "' Empty= " << isEmpty(str1) << "\t\tis str2 empty? str2 contents '" + str2 << "' Empty= " << isEmpty(str2) << endl;
		cout << "Will there be enough slices of pie if there are 8 people who want 2 slices each with 20 slices? " << std::boolalpha << equalSlices(20, 8, 2) << endl;
		cout << "Last item in array 'arr1' is " << getLastItem(arr1) << endl;
		cout << "Last item in array 'arr2' is " << getLastItem(arr2) << endl;
		cout << "Tyler Gosling concat: " << concatName("Tyler", "Gosling") << endl;
		cout << "What month the 3rd month? " << monthName(3) << endl;
		cout << "is there a nubmer higher than 14 in the vector? " << existsHigher(v, 23) << endl;
		cout << endl;
#pragma endregion

	} 
	else if(usrInput == "2" || usrInput == "Easy"){
	//Easy 
#pragma region EasyChallenges
	//EASY
	printChar(10, '-');
	cout << "Edabit Easy Challenges";
	printChar(10, '-');
	cout << "\nBreak chew up into 2 even groups:\t";
	vector<string> stringN = stringPartitionN("chew", 2);
	for (vector<string>::const_iterator i = stringN.begin(); i != stringN.end(); ++i)
	{
		cout << *i << ", ";
	}
	cout << endl;
	//printVec(vDbl);
	//printVec(stringN);

	vector<double> minMaxAvgVec = minMaxLengthAvg(vDbl);
	
	cout << "\nVector contents: " << vDbl << endl;
	cout << "Vector Min value: " << minMaxAvgVec[0] << endl;
	cout << "Vector Max value: " << minMaxAvgVec[1] << endl;
	cout << "Vector length: " << minMaxAvgVec[2] << endl;
	cout << "Vector Average: " << minMaxAvgVec[3] << endl;

	vector<string> fExtensions = getExtension(fileExt);
	printVec(fExtensions);
	cout << "\nmom is a palindrome: " << checkPalindrome(strPal) << endl;
	cout << "megatron is a palindrome: " << checkPalindrome("stepmom") << endl;
	cout << "megatron without vowels: " << removeVowels("megatron") << endl;

	cout << "\nVector contents "  << endl;
	printVec(v);
	cout << "\nVector shifted left 3 times: ";
	v = leftShift(v, 3);
	printVec(v);
	cout << "\nVector shifted right 2 times: ";
	v = rightShift(v, 2);
	printVec(v);
	
	cout << "\nPhone Number: " << formatPhoneNumber(phone) << endl;
	cout << "Is Nemo in this sentence? " << endl;
	cout << findNemo("Is Nemo in this sentence? ") << endl;
	cout << "wave check this sentence? " << endl;
	vector<string> waveCheck;
	waveCheck = findWord("wave", "wave check this sentence? ");
	printVec(waveCheck);
	cout << "\nCheck: This is not a drill This is not a drill " << endl;
	vector<string> drillCheck;
	drillCheck = findWord("drill", "This is not a drill This is not a drill ");
	printVec(drillCheck);
	cout << "\nCartesian coordinates Map A:  ";
	map<int, int> mapA = convertCartesian(v, v);
	//for (auto x : mapA)
		//cout << "[" << x.first << ", " << x.second << "] ";
	vector<int> v3 = { 9,2,3,4,5 };
	printCartMap(mapA);
	cout << "\nCartesian coordinates Map B:  ";
	map<int, int> mapB = convertCartesian(v3, v);
	printCartMap(mapB);
	//for (auto x : mapB)
		//cout << "[" << x.first << ", " << x.second << "] ";
	cout << "\nCartesian coordinates Vector of Vectors:  ";
	vector<vector<int>> cartVec = convertCartesianVec(v3, v);
	printCartVec(cartVec);
	cout << "\nSorted names by length: ";

	vector<string> sortedNames;
	vector<string> namesVec = { "oscar", "mike", "Taylor", "Tom" };
	sortedNames = sortVecStrByLength(namesVec);
	printVec(sortedNames);
#pragma endregion
	} 
	else if (usrInput == "3" || usrInput == "Medium") {
		//Medium
#pragma region MediumChallenges
		cout << "\n\n";


		printChar(10, '-');
		cout << "Edabit Medium Challenges";
		printChar(10, '-');
		cout << "\nRuns: ";
		printVec(runs);
		cout << "\nProgess days: ";
		int progDays = progressDays(runs);
		cout << progDays;
		cout << "\nHow many Letter D in the word Search: ";

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
		cout << "is race car is a palindrome? " << boolalpha <<  isPalindrome(spacePal) << endl;
			

#pragma endregion
	}
	else if (usrInput == "4" || usrInput == "Hard") {
	int x[3][4] = { {1,2,3,4}, {5,6,7,8}, {9,10,11,12} };
	int row = 3, col = 4;
	for (int i = 0; i < row; ++i) {
		for (int j = 0; j < col; ++j) {
			cout << "Element[" << i << "][" << j << "]=" << x[i][j] << endl;
		}
	}
		
	}

	//END
	cout << "\n" << endl;
	printChar(20, '*');
	cout << "\nEnd of Challenges" << endl;
	printChar(20, '*');
}