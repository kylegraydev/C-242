//
// Created by Kyle on 11/30/15.
//

#include <iostream>
#include "Fraction.h"

using namespace std;

    Fraction::Fraction(int num, int denom)
        :numerator(num), denominator(denom) {

    }

    Fraction::~Fraction() {

    }

    ostream& operator<<(ostream& os, const Fraction& f){

        os << f.getNum() << "/" << f.getDenom();

        return os;
    }



