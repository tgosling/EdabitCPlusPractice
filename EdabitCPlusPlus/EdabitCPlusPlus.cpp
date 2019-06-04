// EdabitCPlusPlus.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "ChallengesVE.hpp"
#include <iostream>
#include <string>

using namespace::std;

int main()
{
	//Variables for tests
	int a = 5, b = 4, c = 0;
	float f1 = 0.2;
	string str1 = "", str2 = "Break free";
	int arr1[] = { 1,2,3 }, arr2[] = { 23,45,67,89 };


	//Tests
	std::cout << "Hello World!\n\nEdabit Very Easy challenges" << endl;
	cout << "Addition: 5 + 9 = ";	
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

}

