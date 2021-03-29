#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "./doctest/doctest.h"
#include "LZespolona.hh"

TEST_CASE("Test sprzezenie - zerowa czesc urojona") 
{
    LZespolona x, y;
    
    
    x.re = 2;
    x.im = 0;

    y.re = 2;
    y.im = 0;

    CHECK(Sprzezenie(x) == y.im);  
}

TEST_CASE("Test sprzezenie - niezerowa czesc urojona") 
{
    LZespolona x, y;
    
    
    x.re = 7;
    x.im = 13.5;

    y.re = 7;
    y.im = -13.5;

    CHECK(Sprzezenie(x) == y.im);  
}



