#pragma once
#include <string>
#include <array>
#include <iostream>
/* Method Name: additon
       Purpose: adds two ints
	   Accepts: int a, int b
	   Returns: int           */
int addition(int a, int b)
{
	return a + b;
}
/* Method Name: incrementByOne
	   Purpose: increment an int by 1
	   Accepts: int a
	   Returns: int           */
int incrementByOne(int a)
{
	return a + 1;
}
/* Method Name: animalLegs
	   Purpose: add the amount of chicken, cows and pigs legs
	   Accepts: int c, int cw, int pigs
	   Returns: int           */
int animalLegs(int chickens, int cows, int pigs)
{
	return (chickens * 2) + (cows + pigs) * 4;
}
/* Method Name: divisbleByFive
	   Purpose: determines if number is divisble by 5
	   Accepts: int a
	   Returns: bool           */
bool divisbleByFive(int a)
{
	if (a % 5 == 0)
		return true;
	else
		return false;
}
/* Method Name: lessThanOrEqualToZero
	   Purpose: determines if number is less Than or Equal to zero
	   Accepts: int
	   Returns: bool        */
bool lessThanOrEqualToZero(int num)
{
	if (num <= 0)
		return true;
	else
		return false;
}
/* Method Name: ProfitableGamble
	   Purpose: determine if the prize is worth the pay out
	   Accepts: float f, int prize, int pay
	   Returns: bool           */
bool profitableGamble(float f, int prize, int pay)
{
	if (f * prize > pay)
		return true;
	else
		return false;
}

/* Method Name: checkRemainder
	   Purpose: check the reaminder of a number divided by another number through modulus division
	   Accepts: int x, int y
	   Returns: int                           */
int checkRemainder(int x, int y)
{
	return x % y;
}
/* Method Name: timeForMilkandCookies 
	   Purpose: check if the date is christmas eve
	   Accepts: int year, int month, int day
	   Returns: bool                           */
bool timeForMilkandCookies(int year, int month, int day)
{
	if (month == 11 && day == 24)
		return true;
	else
		return false;
}
/* Method Name: isEmpty
	   Purpose: checks if a string if empty
	   Accepts: string str
	   Returns: bool                           */
bool isEmpty(std::string str)
{
	if (str.empty())
		return true;
	else
		return false;
}
/* Method Name: equalsSlices
	   Purpose: determine if there is enough pie for all
	   Accepts: int slices, int people, int slicesPer
	   Returns: bool                           */
bool equalSlices(int slices, int people, int slicesPer)
{
	if (slicesPer * people <= slices)
		return true;
	else
		return false;
}
/* Method Name: getLastItem
	   Purpose: get the last item in an int array
	   Accepts: int array[]
	   Returns: int                           */
int getLastItem(int arr[])
{
	int hold = sizeof(arr) / sizeof(*arr);
	int hold2 = sizeof(arr) / sizeof(arr[0]);
	return arr[(sizeof(arr)/sizeof(0))+1];
}

/* Method Name:
	   Purpose: 
	   Accepts: 
	   Returns:                            */