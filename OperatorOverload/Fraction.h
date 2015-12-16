#pragma once
#include <iostream>

class Fraction
{
public:
	Fraction();
	Fraction( int, int );
	virtual ~Fraction();
	int getNum() const {
		return numerator;
	}
	int getDen() const {
		return denominator;
	}
private:
	int numerator;
	int denominator;
};

Fraction operator+(const Fraction& left, const Fraction& right);
Fraction operator-(const Fraction& left, const Fraction& right);

std::ostream& operator<<(std::ostream& , const Fraction& );
