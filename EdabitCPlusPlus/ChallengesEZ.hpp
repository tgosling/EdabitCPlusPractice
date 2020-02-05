#pragma once
#include <string>
#include <array>
#include <vector>
#include <iostream>
#include <algorithm>
#include <numeric>
#include <regex>
#include <map>
#include <utility>


/* Method Name: identicalFilter
	   Purpose: traverse through an array and return values that have identical numbers throughout
	   Accepts: vector<string> arr
	   Returns: vector<string> hold */
std::vector<std::string> identicalFilter(std::vector<std::string> arr);

/* Method Name: stringPartition
	   Purpose: divide a string based on N-value
	   Accepts: string s, int n
	   Returns: vector<string>      */
//std::vector<std::string> stringPartitionN(std::string s, int n);

/* Method Name: minMaxLengthAvg
	   Purpose: determines the minimum value, max value, length of array and average value
	   Accepts: vector<float> arr
	   Returns: vector<float> arr*/
std::vector<double> minMaxLengthAvg(std::vector<double>& arr);

/* Method Name: getExtension
	   Purpose: get the extension type for the given string in a vector
	   Accepts: vector<string> vec
	   Returns:	vector<strig>		*/
std::vector<std::string> getExtension(std::vector<std::string>& vec);

/* Method Name: checkPalindrome
	   Purpose: checks to see if a word is the same forward and backward
	   Accepts: string str
	   Returns:	bool		*/
//bool checkPalindrome(std::string str);

/* Method Name: removeVowels
	   Purpose: remove vowels from a string, Y not included
	   Accepts: string str
	   Returns:	string		*/
std::string removeVowels(std::string str);

/* Method Name: leftShift
	   Purpose: left shift the vector the number of times given
	   Accepts: vector<int> vec, int num 
	   Returns:	vector<int>		*/
std::vector<int> leftShift(std::vector<int> vec, int num);

/* Method Name: rightShift
	   Purpose: right shift the vector the number of times given
	   Accepts: vector<int> vec, int num 
	   Returns:	vector<int>		*/
std::vector<int> rightShift(std::vector<int> vec, int num);

/* Method Name: formatPhoneNumber
	   Purpose: format a vector into a phone number string
	   Accepts: vector<int> vec
	   Returns: string str			*/
std::string formatPhoneNumber(std::vector<int> vec);

/* Method Name: findNemo
	   Purpose: find the word Nemo in a sentence
	   Accepts: string sentence
	   Returns:	std::string		*/
std::string findNemo(std::string sentence);

/* Method Name: findWord
	   Purpose: find a given word from a string
	   Accepts: string word, string sentence
	   Returns:	vector<string> 		*/
std::vector<std::string> findWord(std::string word, std::string sentence);

/* Method Name: convertCartesian
	   Purpose: convert two vectors into cartesian coordinate pairs
	   Accepts: vector<int> x, vector<int> y
	   Returns:	map<int, int>		*/
std::map<int, int>  convertCartesian(std::vector<int> x, std::vector<int> y);

/* Method Name: convertCartesianVec
	   Purpose: convert two vectors into cartesian coordinate vector of vectors
	   Accepts: vector<int> x, vector<int> y
	   Returns: vector<vector<int>>			*/
std::vector<std::vector<int>> convertCartesianVec(std::vector<int> x, std::vector<int> y);

/* Method Name: sortStrBySize
	   Purpose: to sort two strings by size
	   Accepts: string a, atring b
	   Returns:	bool		*/
bool sortStrBySize(std::string a, std::string b);

/* Method Name: sortVecStringByLength
	   Purpose: to sort a vector of strings by length
	   Accepts: vector<string> vec
	   Returns:	vector<string>		*/
std::vector<std::string> sortVecStrByLength(std::vector<std::string> arr);

void ChallengesEZ();