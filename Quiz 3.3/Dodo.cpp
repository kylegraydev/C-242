//
// Created by Kyle on 11/16/15.
//
#include <iostream>
#include "Cliff.h"
#include "Dodo.h"

Dodo::Dodo()
{
    numDods++;
}
Dodo::~Dodo()
{
}
void
Dodo::jumpsOver( Cliff& c )
{
    numDods--;
}
unsigned Dodo::numDods = 0;