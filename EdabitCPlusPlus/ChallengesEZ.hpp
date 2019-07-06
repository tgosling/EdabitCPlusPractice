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
		isIdent = true;
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
std::vector<std::string> stringPartitionN(std::string s, int n) {
	//variables
	std::vector<std::string> vHold;
	std::string strHold;

	//loop through word
	for (int i = 0; i < s.length(); ++i)
	{
		for (int j = 0; j < n; j++)
		{
			strHold += s[i+j];
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
//std::vector<double> minMaxLengthAvg(std::vector<double> arr)
//{
	//variables
	//std::vector<double> vHold;
	

	//vHold[0] = std::min_element(vHold.begin, vHold.end);
	//vHold[1] = std::min_element(vHold.begin, vHold.end);
	

	//for (std::vector<double>::iterator it = arr.begin; it != arr.end; it++)
	//{
		//vHold[2] += *it;
	//}

	//vHold[3] = vHold[2] / arr.size();


	//return vHold;
//}

#pragma region Print Vectors
//void printVec(std::vector<double> &vec)
//{
//	for (std::vector<double>::iterator it = vec.begin; it != vec.end; ++it)
//	{
//		cout << *it << ", ";
//	}
//}

//void printVec(std::vector<string> &vec)
//{
//	for (std::vector<string>::iterator it = vec.begin; it != vec.end; ++it)
//	{
//		cout << *it << ", ";
//	}
//}


/* Method Name: printVecDbl 
	   Purpose: print vectors of double type
	   Accepts: std::vector<double> const &vec
	   Returns:	void		*/
void printVec(std::vector<double> const &vec) {
	//Range for 
	/*for (auto const& i : vec)
		std::cout << i << ", ";*/

	//for_each
	/*std::for_each(vec.begin(),
		vec.end(),
		[](const auto &i) {
		std::cout << i << ", ";
	});*/

	//Iterator
	for (std::vector<double>::const_iterator it = vec.cbegin(); it != vec.cend(); ++it)
		std::cout << *it << ", ";
}

void printVec(std::vector<std::string> const &vec) {
	//Iterator
	for (std::vector<std::string>::const_iterator it = vec.cbegin(); it != vec.cend(); ++it)
		std::cout << *it << ", ";
}

/* Method Name: printVecOS
	   Purpose: overload << for printing vector
	   Accepts: 
	   Returns:			*/
std::ostream& operator<< (std::ostream& os, const std::vector<double> &vec){
	for (auto const& i : vec)
		os << i << " ";
	return os;
}

/* Method Name: getExtension
	   Purpose: get file extensions from vector of string
	   Accepts: vector<std::string> vec
	   Returns:	vector<std::string> res		*/
//std::vector<string> getExtension(std::vector<string> &vec) {
//	std::vector<string> hold;
//	for_each(vec.begin(), vec.end(), [&](const string s) {
//		hold.push_back(s.substr(s.find('.') + 1)); 
//	});
//	return hold;
//}

#pragma endregion Print Vectors

std::vector<std::string> getExtension(std::vector<std::string> &vec)
{
	std::vector<std::string> holdVec;
	std::string holdStr;
	for (int i = vec.size() - 1; i >= 0; i--) {
		for (int j = vec[i].size() - 1; j >= 0; j--){
			if (vec[i][j] == '.') {
				holdStr = vec[i].erase(0, j + 1);
				holdVec.push_back(holdStr);
				break;
			}
		}
	}
	return holdVec;
}

/* Method Name:
	   Purpose:
	   Accepts:
	   Returns:			*/