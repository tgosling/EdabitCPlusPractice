#include "printContainer.hpp"

using namespace std;

/* Method Name: printChar
	   Purpose: prints a sequential char
	   Accepts: int n, char ch
	   Returns:	void		*/
void printChar(int n, char ch) {
	for (int i = 0; i < n; ++i)
		cout << ch;
}

/* Method Name: printVecDbl
	   Purpose: print vectors of double type
	   Accepts: vector<double> const &vec
	   Returns:	void		*/
void printVec(vector<double> const& vec) {
	//Range for 
	/*for (auto const& i : vec)
		cout << i << ", ";*/

		//for_each
		/*for_each(vec.begin(),
			vec.end(),
			[](const auto &i) {
			cout << i << ", ";
		});*/

		//Iterator
	for (vector<double>::const_iterator it = vec.cbegin(); it != vec.cend(); ++it)
		cout << *it << ", ";
}

void printVec(vector<int> const& vec) {
	//Iterator
	for (vector<int>::const_iterator it = vec.cbegin(); it != vec.cend(); ++it)
		cout << *it << ", ";
}


void printVec(vector<string> const& vec) {
	//Iterator
	//for (vector<string>::const_iterator it = vec.cbegin(); it != vec.cend(); ++it)
		//cout << *it << ", ";
	//Range for 
	for (auto const& i : vec)
		cout << i << ", ";
}



void printTree(vector<string> const& vec) {
	//Iterator
	//for (vector<string>::const_iterator it = vec.cbegin(); it != vec.cend(); ++it)
		//cout << *it << ", ";
	//Range for 
	for (auto const& i : vec)
		cout << i << "\n";
}

/* Method Name: printVecOS
	   Purpose: overload << for printing vector
	   Accepts:
	   Returns:			*/
ostream& operator<< (ostream& os, const vector<double>& vec) {
	for (auto const& i : vec)
		os << i << " ";
	return os;
}

/* Method Name: printVecVec
	   Purpose: printVector of Vectors
	   Accepts:
	   Returns:			*/
void printCartVec(vector<vector<int>> vec) {
	for (int i = 0; i < vec.size(); ++i) {
		for (int j = 0; j < vec[i].size(); ++j) {
			if (j % 2 != 0)
				cout << vec[i][j];
			else
				cout << "[ " << vec[i][j] << ", ";
		}
		cout << "] ";
	}
}

/* Method Name: printCartMap
	   Purpose:
	   Accepts:
	   Returns:			*/
void printCartMap(map<int, int> mapA) {
	for (auto x : mapA)
		cout << "[" << x.first << ", " << x.second << "] ";
}

/* Method Name: print2DVec
	   Purpose: prints 2-dimensional vector
	   Accepts: vector<vector<char>> 
	   Returns: void			*/
void print2DVec(vector<vector<char>> vec) {
	for (vector<vector<char>>::iterator it = vec.begin(); it != vec.end(); ++it) {
		for (vector<char>::iterator itr = it->begin(); itr != it->end(); ++itr) {
			cout << *itr << ", ";
		}
		cout << "\n";
	}
}






