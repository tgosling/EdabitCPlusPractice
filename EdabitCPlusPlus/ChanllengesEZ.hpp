#pragma once
#include <string>
#include <array>
#include <vector>
#include <iostream>


/* Method Name: identicalFilter
	   Purpose: traverse through an array and return values that have identical numbers throughout
	   Accepts: vector<string> arr
	   Returns: vector<string> hold */
std::vector<std::string> identicalFilter(std::vector<std::string> arr) {
	//variables
	std::vector<std::string> hold = {};
	bool isIdent;
	char testCh;
	//loop through vector contents
	for (int i = 0; i < arr.size(); i++)
	{
		bool isIdent = true;
		//assign first value in number to test
		testCh = arr[i][0];
		//loop through number values
		for (int j = 0; j < arr[i].size(); j++)
		{
			if (testCh != arr[i][j])
			{
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


/* Method Name:
	   Purpose:
	   Accepts:
	   Returns: */