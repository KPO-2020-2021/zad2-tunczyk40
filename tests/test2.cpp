#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "./doctest/doctest.h"
#include "LZespolona.hh"

TEST_CASE("Test LZespolona odejmowanie") 
{
    LZespolona x, y, z;
    
    x.re = 12.0030;
    x.im = 4.5;

    y.re = 11.0005;
    y.im = 8.2;

    z.re = 1.0025;
    z.im = -3.7;
   
    CHECK((x-y) == z);
}

TEST_CASE("Test LZespolona odejmowanie v2") 
{
    LZespolona x, y, z;
    
    
    x.re = 2.1111;
    x.im = 2.1111;

    y.re = 1.0523;
    y.im = 1.0523;

    z.re = 1.0588;
    z.im = 1.0588;
   
    CHECK((x-y) == z);
}



