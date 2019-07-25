// EdabitCPlusPlus.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//Headers
#include "ChallengesVE.hpp"
#include "ChallengesEZ.hpp"
#include "printVector.hpp"
//Libraries
#include <iostream>
#include <string>
#include <vector>

using namespace::std;

int main()
{
	//Variables for tests
	int a = 5, b = 4, c = 0;
	float f1 = 0.2;
	string str1 = "", str2 = "Break free", strPal = "mom";
	int arr1[] = { 1,2,3 }, arr2[] = { 23,45,67,89 };
	vector<int> v = { 10,12,13,22,1 };
	vector<double> vDbl = { 11.1, 12, 112, 99 };
	vector<string> fileExt = { "array.html", "marker.exe", "website.css" };

	//Tests
	std::cout << "Hello World!" << endl;
	//VERY EASY
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


	//END
	cout << endl;
	printChar(20, '*');
	cout << "\nEnd of Challenges" << endl;
	printChar(20, '*');
}