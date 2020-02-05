#pragma once
#include <string>
#include <array>
#include <vector>
#include <iostream>

/* Method Name: additon
       Purpose: adds two ints
	   Accepts: int a, int b
	   Returns: int           */
int addition(int a, int b);

/* Method Name: incrementByOne
	   Purpose: increment an int by 1
	   Accepts: int a
	   Returns: int           */
int incrementByOne(int a);

/* Method Name: animalLegs
	   Purpose: add the amount of chicken, cows and pigs legs
	   Accepts: int c, int cw, int pigs
	   Returns: int           */
int animalLegs(int chickens, int cows, int pigs);

/* Method Name: divisbleByFive
	   Purpose: determines if number is divisble by 5
	   Accepts: int a
	   Returns: bool           */
bool divisbleByFive(int a);

/* Method Name: lessThanOrEqualToZero
	   Purpose: determines if number is less Than or Equal to zero
	   Accepts: int
	   Returns: bool        */
bool lessThanOrEqualToZero(int num);

/* Method Name: ProfitableGamble
	   Purpose: determine if the prize is worth the pay out
	   Accepts: float f, int prize, int pay
	   Returns: bool           */
bool profitableGamble(float f, int prize, int pay);

/* Method Name: checkRemainder
	   Purpose: check the reaminder of a number divided by another number through modulus division
	   Accepts: int x, int y
	   Returns: int                           */
int checkRemainder(int x, int y);

/* Method Name: timeForMilkandCookies 
	   Purpose: check if the date is christmas eve
	   Accepts: int year, int month, int day
	   Returns: bool                           */
bool timeForMilkandCookies(int year, int month, int day);

/* Method Name: isEmpty
	   Purpose: checks if a string if empty
	   Accepts: string str
	   Returns: bool                           */
bool isEmpty(std::string str);

/* Method Name: equalsSlices
	   Purpose: determine if there is enough pie for all
	   Accepts: int slices, int people, int slicesPer
	   Returns: bool                           */
bool equalSlices(int slices, int people, int slicesPer);

/* Method Name: getLastItem
	   Purpose: get the last item in an int array
	   Accepts: int array[]
	   Returns: int                           */
int getLastItem(int arr[]);

/* Method Name: concatName
	   Purpose: Concatenate first name and last name into one
	   Accepts: string fName, string lName
	   Returns: string                           */
std::string concatName(std::string fName, std::string lName);


/* Method Name: monthName
	   Purpose: return month name with given number
	   Accepts: int monthNum
	   Returns: string mName                           */
std::string monthName(int num);

/* Method Name: existsHigher
	   Purpose: check is a number exists that is higher than the control numbers
	   Accepts: vector<int> v, int n
	   Returns: bool                            */
bool existsHigher(std::vector<int> v, int n);


/* Method Name: charToAscii
	   Purpose: convert char to ascii value
	   Accepts: char c
	   Returns: int */
int charToAscii(char c);

/* Method Name: divisibleBy100
	   Purpose: check if number is divisible By 100
	   Accepts: int n
	   Returns: bool */
bool divBy100(int n);

/* Method Name: hyphenMaker
	   Purpose: creates a string with the given amount of hyphens
	   Accepts: int n
	   Returns: string */
std::string hyphenMaker(int n);

/* Method Name: 
	   Purpose:
	   Accepts:
	   Returns: */
std::vector<double> coinCounter(int n, int d, int q, int l, int t);


std::vector<double> billCounter(int f, int t, int tw, int fty, int h);

void ChallengesVE();