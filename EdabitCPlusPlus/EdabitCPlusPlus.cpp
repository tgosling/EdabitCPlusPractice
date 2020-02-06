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
	
	while (usrInput != "x") {
		cout << "Which challenge set would you like to see?" << endl;
		cout << "1) Very Easy\n2) Easy\n3) Medium\n4) Hard\n\nPress 'x' to end" << endl;
		cout << "\nInput: ";
		cin >> usrInput;
		if (usrInput == "1" || usrInput == "Very Easy") {
			//Very Easy
			ChallengesVE();
		}
		else if (usrInput == "2" || usrInput == "Easy") {
			//Easy 
			ChallengesEZ();
		}
		else if (usrInput == "3" || usrInput == "Medium") {
			//Medium
			ChallengesMED();
		}
		else if (usrInput == "4" || usrInput == "Hard") {
			int x[3][4] = { {1,2,3,4}, {5,6,7,8}, {9,10,11,12} };
			int row = 3, col = 4;
			for (int i = 0; i < row; ++i) {
				for (int j = 0; j < col; ++j) {
					cout << "Element[" << i << "][" << j << "]=" << x[i][j] << endl;
				}
			}
		}//end else-if
	}//end while
	cout << "\n" << endl;
	printChar(20, '*');
	cout << "\nEnd of Challenges" << endl;
	printChar(20, '*');
}//end main