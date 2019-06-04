#pragma once
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
/* Method Name:
	   Purpose:
	   Accepts:
	   Returns:            */