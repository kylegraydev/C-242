//
// Created by Kyle on 11/16/15.
//

#ifndef QUIZ_3_3_DODO_H
#define QUIZ_3_3_DODO_H

#include "Cliff.h"

class Dodo
{
public:
    Dodo();
    ~Dodo();
    void jumpsOver( Cliff& c );
private:
    static unsigned numDods;
};


#endif //QUIZ_3_3_DODO_H
