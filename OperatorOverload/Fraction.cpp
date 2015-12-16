#include <iostream>
#include "Fraction.h"
using namespace std;

Fraction::Fraction()
{
}

Fraction::Fraction(
	int num,
	int denom)
	: numerator(num), denominator(denom)
{
}

Fraction::~Fraction()
{
}

Fraction operator+(const Fraction& left, const Fraction& right)
{
	Fraction retVal( left.getNum() * right.getDen()
		           + right.getNum() * left.getDen(),
		           left.getDen() * right.getDen());
	return retVal;
}

Fraction operator-(const Fraction& left, const Fraction& right)
{
	Fraction retVal(left.getNum() * right.getDen()
		- right.getNum() * left.getDen(),
		left.getDen() * right.getDen());
	return retVal;
}


ostream& operator<<(ostream& os, const Fraction& f)
{
	os << f.getNum() << "/" << f.getDen() ;
	return os;
}

