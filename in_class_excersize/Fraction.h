//
// Created by Kyle on 11/30/15.
//

#ifndef IN_CLASS_EXCERSIZE_FRACTION_H
#define IN_CLASS_EXCERSIZE_FRACTION_H



    class Fraction {


    public:
        Fraction(int, int);
        virtual ~Fraction();

        int getNum() const {
            return numerator;
        }

        int getDenom() const {
            return denominator;
        }


    private:
        int numerator;
        int denominator;

    };



#endif //IN_CLASS_EXCERSIZE_FRACTION_H
