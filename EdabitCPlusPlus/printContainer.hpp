#pragma once
#include <vector>
#include <iostream>
#include <algorithm>
#include <ostream>
#include <map>

/* Method Name: printChar
	   Purpose: prints a sequential char
	   Accepts: int n, char ch
	   Returns:	void		*/
void printChar(int n, char ch);

/* Method Name: printVecDbl
	   Purpose: print vectors of double type
	   Accepts: std::vector<double> const &vec
	   Returns:	void		*/
void printVec(std::vector<double> const& vec);

void printVec(std::vector<int> const& vec);

void printVec(std::vector<std::string> const& vec);

void printTree(std::vector<std::string> const& vec);

/* Method Name: printVecOS
	   Purpose: overload << for printing vector
	   Accepts:
	   Returns:			*/
std::ostream& operator<< (std::ostream& os, const std::vector<double>& vec);

/* Method Name: printVecVec
	   Purpose: printVector of Vectors
	   Accepts: 
	   Returns:			*/
void printCartVec(std::vector<std::vector<int>> vec);

/* Method Name: printCartMap
	   Purpose: 
	   Accepts:
	   Returns:			*/
void printCartMap(std::map<int, int> mapA);

void print2DVec(std::vector<std::vector<char>>);
