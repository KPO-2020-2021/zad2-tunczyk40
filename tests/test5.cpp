#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "./doctest/doctest.h"
#include "LZespolona.hh"
#include "WyrazenieZesp.hh"

TEST_CASE("Test LZespolona - wczytywanie ") 
{
    LZespolona x;
    
    std::istringstream in("(17.00+5.00i)");
    in >> x;
    std::ostringstream out;
    out << x; 
    
    CHECK( "(17+5i)" == out.str() );
}

TEST_CASE("Test LZespolona - wyswietlanie ") 
{
    LZespolona x;
   
    x.re = 8;
    x.im = 13;
    
    std::ostringstream out;
    
    out << x;
    std::cout << out.str() << std::endl;
    CHECK( "(8+13i)" == out.str() );
}

TEST_CASE("Test LZespolona dzielenie przez skalar zero") 
{
    LZespolona x;
    double t = 0;
    
    x.re = 4;
    x.im = 5;
 
   WARN_THROWS(x/t);
}

TEST_CASE("Test LZespolona dzielenie przez skalar 1") 
{
    LZespolona x, y;
    double t = 1;
    
    x.re = 2;
    x.im = 2;

    y.re = 2;
    y.im = 2;
   
    CHECK((x/t) == y);
}

TEST_CASE("Test LZespolona dzielenie przez skalar z przyblizeniem") 
{
    LZespolona x, y;
    double t = 3;
    
    x.re = 1;
    x.im = 1;

    y.re = 0.333;
    y.im = 0.333;
    std::cout << (x/t) << std::endl;
    std::cout << y << std::endl;
    std::cout << ((x/t) == y) << std::endl;
    CHECK((x/t) == y);
}

TEST_CASE("Test argumentu liczby zespolonej")
{   
    LZespolona z;
    double x;
    z.re = 4;
    z.im = 3;

    x = 0.64317;

    CHECK(abs(Arg(z) - x <= 0.001));
}   




