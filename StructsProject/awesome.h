//
// Created by Kyle on 11/16/15.
//
#pragma once

#ifndef STRUCTSPROJECT_AWESOME_H
#define STRUCTSPROJECT_AWESOME_H

#endif //STRUCTSPROJECT_AWESOME_H

typedef unsigned long SSN;

typedef struct {
    int i;
    long l;
    short s;
    char c;
    double d;
}FooseStruct;

class FooseObject{
    int m_i;
    long m_l;
    short m_s;
    char m_c;
    double m_d;

    //default removed with new constructor

public:
    //must make constructor public
    FooseObject(
            int i,
            long l,
            short s,
            char c,
            double d)
            : m_i(i), m_l(l), m_s(s), m_c(c), m_d(d)
    {}
};
