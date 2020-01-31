#include "ChallengesVE.hpp"

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

/* Method Name:
	   Purpose:
	   Accepts:
	   Returns: */
std::vector<double> coinCounter(int n, int d, int q, int l, int t) {
	std::vector<double> coinHold = { 0,0,0,0,0 };
	coinHold[0] = n * 0.05;
	coinHold[1] = d * 0.10;
	coinHold[2] = q * 0.25;
	coinHold[3] = l * 1.00;
	coinHold[4] = t * 2.00;
	return coinHold;
}


std::vector<double> billCounter(int f, int t, int tw, int fty, int h) {
	std::vector<double> billHold = { 0,0,0,0,0 };
	billHold[0] = f * 5;
	billHold[1] = t * 10;
	billHold[2] = tw * 20;
	billHold[3] = fty * 50;
	billHold[4] = h * 100;
	return billHold;
}