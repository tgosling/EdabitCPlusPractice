// EdabitCPlusPlus.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "ChallengesVE.hpp"
#include <iostream>

using namespace::std;

int main()
{
	int a = 5, b = 4, c = 0;
	cout << "Hello World!\n\nEdabit Very Easy challenges" << endl;
	cout << "Addition: 5 + 9 = ";	
	c = addition(a, b);
	cout << c;
	cout << "\nIncrement by 1: " << incrementByOne(c) << endl;
	cout << "Count chickens, cows and pigs feet on farm\nChickens=" << a
		 << "\nCows = " << b << "\nPigs = " << c << "\nTotal Legs: " << animalLegs(a, b, c) << endl;
	cout << "Is a = " << a << " divisible by 5? " << std::boolalpha << divisbleByFive(a) << endl;
	cout << "Is b = " << b << " less than or equal to zero? " << std::boolalpha << lessThanOrEqualToZero(b) << endl;

}

