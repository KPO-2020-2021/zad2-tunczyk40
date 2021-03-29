#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "./doctest/doctest.h"
#include "LZespolona.hh"

TEST_CASE("Test mnozenia LZespolona przez LZespolona") 
{
    LZespolona x,y,z;

    x.re = 3;
    x.im = 2.5;

    y.re = 2;
    y.im = 4;

    z.re = -4;
    z.im = 17;

    CHECK(x*y == z);  
}

TEST_CASE("Test mnozenia LZespolona przez LZespolona v2") 
{
    LZespolona x,y,z;

    x.re = 0;
    x.im = 0;

    y.re = 0.000001;
    y.im = 0.000001;

    z.re = 0;
    z.im = 0;

    CHECK(x*y == z);
}

TEST_CASE("Test dzielenie LZespolona przez LZespolona")
{
    LZespolona x,y,z;

    x.re = 4;
    x.im = 5;

    y.re = 2;
    y.im = 2.5;

    z.re = 2;
    z.im = 0;

    CHECK(x/y == z);
}


