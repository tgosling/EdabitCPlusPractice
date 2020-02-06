#include "ChallengesVE.hpp"
#include "printContainer.hpp"

using namespace std;

/* Method Name: additon
	   Purpose: adds two ints
	   Accepts: int a, int b
	   Returns: int           */
int addition(int a, int b) {
	return a + b;
}

/* Method Name: incrementByOne
	   Purpose: increment an int by 1
	   Accepts: int a
	   Returns: int           */
int incrementByOne(int a) {
	return a + 1;
}

/* Method Name: animalLegs
	   Purpose: add the amount of chicken, cows and pigs legs
	   Accepts: int c, int cw, int pigs
	   Returns: int           */
int animalLegs(int chickens, int cows, int pigs) {
	return (chickens * 2) + (cows + pigs) * 4;
}

/* Method Name: divisbleByFive
	   Purpose: determines if number is divisble by 5
	   Accepts: int a
	   Returns: bool           */
bool divisbleByFive(int a) {
	if (a % 5 == 0)
		return true;
	else
		return false;
}

/* Method Name: lessThanOrEqualToZero
	   Purpose: determines if number is less Than or Equal to zero
	   Accepts: int
	   Returns: bool        */
bool lessThanOrEqualToZero(int num){
	if (num <= 0)
		return true;
	else
		return false;
}
/* Method Name: ProfitableGamble
	   Purpose: determine if the prize is worth the pay out
	   Accepts: float f, int prize, int pay
	   Returns: bool           */
bool profitableGamble(float f, int prize, int pay) {
	if (f * prize > pay)
		return true;
	else
		return false;
}

/* Method Name: checkRemainder
	   Purpose: check the reaminder of a number divided by another number through modulus division
	   Accepts: int x, int y
	   Returns: int                           */
int checkRemainder(int x, int y) {
	return x % y;
}
/* Method Name: timeForMilkandCookies
	   Purpose: check if the date is christmas eve
	   Accepts: int year, int month, int day
	   Returns: bool                           */
bool timeForMilkandCookies(int year, int month, int day) {
	if (month == 11 && day == 24)
		return true;
	else
		return false;
}
/* Method Name: isEmpty
	   Purpose: checks if a string if empty
	   Accepts: string str
	   Returns: bool                           */
bool isEmpty(std::string str) {
	if (str.empty())
		return true;
	else
		return false;
}
/* Method Name: equalsSlices
	   Purpose: determine if there is enough pie for all
	   Accepts: int slices, int people, int slicesPer
	   Returns: bool                           */
bool equalSlices(int slices, int people, int slicesPer) {
	if (slicesPer * people <= slices)
		return true;
	else
		return false;
}
/* Method Name: getLastItem
	   Purpose: get the last item in an int array
	   Accepts: int array[]
	   Returns: int                           */
int getLastItem(int arr[]) {
	int hold = sizeof(arr) / sizeof(*arr);
	int hold2 = sizeof(arr) / sizeof(arr[0]);
	return arr[(sizeof(arr) / sizeof(0)) + 1];
}

/* Method Name: concatName
	   Purpose: Concatenate first name and last name into one
	   Accepts: string fName, string lName
	   Returns: string                           */
std::string concatName(std::string fName, std::string lName) {
	return lName + ", " + fName;
}


/* Method Name: monthName
	   Purpose: return month name with given number
	   Accepts: int monthNum
	   Returns: string mName                           */
std::string monthName(int num) {
	std::string months[] = { "January", "February", "March", "April", "May", "June", " July",
						"August", "September", "October", "November", "December" };
	return months[num - 1];
}

/* Method Name: existsHigher
	   Purpose: check is a number exists that is higher than the control numbers
	   Accepts: vector<int> v, int n
	   Returns: bool                            */
bool existsHigher(std::vector<int> v, int n) {
	for (int i = 0; i < v.size(); i++)
	{
		if (v[i] > n)
			return true;
	}
	return false;
}


/* Method Name: charToAscii
	   Purpose: convert char to ascii value
	   Accepts: char c
	   Returns: int */
int charToAscii(char c) {
	return (int)c;
}

/* Method Name: divisibleBy100
	   Purpose: check if number is divisible By 100
	   Accepts: int n
	   Returns: bool */
bool divBy100(int n) {
	if (n % 100 == 0)
		return true;
	else
		return false;

}

/* Method Name: hyphenMaker
	   Purpose: creates a string with the given amount of hyphens
	   Accepts: int n
	   Returns: string */
std::string hyphenMaker(int n) {
	std::string hold;
	if (n > 0 && n <= 60)
	{
		for (int i = 0; i < n; i++)
			hold += "-";
	}
	return hold;
}


/* Method Name: ChallengesVE
	   Purpose: calls the Very Easy challenge functions
	   Accepts: void
	   Returns: void	*/
void ChallengesVE() {
#pragma region VeryEasyChallenges
	int a = 5, b = 4, c = 0;
	float f1 = 0.2;
	string str1 = "", str2 = "Break free", strPal = "mom";
	int arr1[] = { 1,2,3 }, arr2[] = { 23,45,67,89 };
	vector<int> v = { 10,12,13,22,1 }, phone = { 1,2,3,4,5,6,7,8,9,0 }, runs = { 3,4,1,2 };
	vector<double> vDbl = { 11.1, 12, 112, 99 };
	vector<string> fileExt = { "array.html", "marker.exe", "website.css", "oscar.win" };
	string usrInput = "";


	printChar(10, '-');
	cout << "Edabit Very Easy Challenges";
	printChar(10, '-');

	cout << "\nAddition: 5 + 9 = ";
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
	cout << "Tyler Gosling concat: " << concatName("Tyler", "Gosling") << endl;
	cout << "What month the 3rd month? " << monthName(3) << endl;
	cout << "is there a nubmer higher than 14 in the vector? " << existsHigher(v, 23) << endl;
	cout << endl;
#pragma endregion

}