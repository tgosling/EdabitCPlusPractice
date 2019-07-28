#pragma once
#include <vector>
#include <iostream>
#include <algorithm>
#include <ostream>
#include <map>

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

void printVec(std::vector<int> const &vec) {
		//Iterator
	for (std::vector<int>::const_iterator it = vec.cbegin(); it != vec.cend(); ++it)
		std::cout << *it << ", ";
}


void printVec(std::vector<std::string> const &vec) {
	//Iterator
	//for (std::vector<std::string>::const_iterator it = vec.cbegin(); it != vec.cend(); ++it)
		//std::cout << *it << ", ";
	//Range for 
	for (auto const& i : vec)
		std::cout << i << ", ";
}

/* Method Name: printVecOS
	   Purpose: overload << for printing vector
	   Accepts:
	   Returns:			*/
std::ostream& operator<< (std::ostream& os, const std::vector<double> &vec) {
	for (auto const& i : vec)
		os << i << " ";
	return os;
}

/* Method Name: printVecVec
	   Purpose: printVector of Vectors
	   Accepts: 
	   Returns:			*/
void printCartVec(std::vector<std::vector<int>> vec) {
	for (int i = 0; i < vec.size(); ++i){
		for (int j = 0; j < vec[i].size(); ++j) {
			if (j % 2 != 0)
				std::cout << vec[i][j];
			else
				std::cout << "[ " << vec[i][j] << ", ";
		}
		std::cout << "] ";
	}
}

/* Method Name: printMap
	   Purpose: 
	   Accepts:
	   Returns:			*/
void printMap(std::map<int, int> mapA) {
	for (auto x : mapA)
		std::cout << "[" << x.first << ", " << x.second << "] ";
}

