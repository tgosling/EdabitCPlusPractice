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

/* Method Name: stringPartitionN
	   Purpose: divide a string based on N-value
	   Accepts: string s, int n
	   Returns: vector<string>      */
std::vector<std::string> stringPartitionN(std::string s, int n)
{
	//variables
	std::vector<std::string> vHold;
	std::string strHold;

	//loop through word
	for (int i = 0; i < s.length(); i++)
	{
		for (int j = 0; j < n; j++)
		{
			strHold += s[i];
		}
		vHold.push_back(strHold);
		strHold = "";
	}
	return vHold;
}


/* Method Name:
	   Purpose:
	   Accepts:
	   Returns: */