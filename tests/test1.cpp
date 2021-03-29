#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "./doctest/doctest.h"
#include "LZespolona.hh"

TEST_CASE("test LZespolona Suma")
{
    LZespolona x, y, z;

    x.re = 1;
    x.im = 1;

    y.re = 1;
    y.im = -3;

    z.re = 2;
    z.im = -2;
    
    CHECK(x+y == z);
}
TEST_CASE("test LZespolona Suma v2")
{
    LZespolona x,y,z;

    x.re = 2.0005;
    x.im = 3.1205;

    y.re = -1.0004;
    y.im = 1.2006;

    z.re = 1.0001;
    z.im = 4.3211;

    CHECK(x+y == z);
}

TEST_CASE("test LZespolona Suma v3")
{
    LZespolona x,y,z;

    x.re = 0.00001;
    x.im = 0.00001;

    y.re = 0.00009;
    y.im = 0.00009;

    z.re = 0.0001;
    z.im = 0.0001;

    CHECK(x+y == z);
}

TEST_CASE("test LZespolona Suma v4")
{
    LZespolona x,y,z;

    x.re = 5;
    x.im = 4;

    y.re = 2;
    y.im = 3;

    z.re = 7;
    z.im = 7;

    CHECK((x+=y) == z);
}
