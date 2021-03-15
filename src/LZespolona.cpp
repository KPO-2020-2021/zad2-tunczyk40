#include "LZespolona.hh"



/*!
 * Realizuje dodanie dwoch liczb zespolonych.
 * Argumenty:
 *    Skl1 - pierwszy skladnik dodawania,
 *    Skl2 - drugi skladnik dodawania.
 * Zwraca:
 *    Sume dwoch skladnikow przekazanych jako parametry.
 */
LZespolona  operator + (LZespolona  Skl1,  LZespolona  Skl2)
{
  LZespolona  Wynik;

  Wynik.re = Skl1.re + Skl2.re;
  Wynik.im = Skl1.im + Skl2.im;
  return Wynik;
}
LZespolona  operator - (LZespolona  Skl1,  LZespolona  Skl2)
{
  LZespolona  Wynik;

  Wynik.re = Skl1.re - Skl2.re;
  Wynik.im = Skl1.im - Skl2.im;
  return Wynik;
}
LZespolona  operator * (LZespolona  Skl1,  LZespolona  Skl2)
{
  LZespolona  Wynik;

  Wynik.re = Skl1.re * Skl2.re - Skl1.im * Skl2.im;
  Wynik.im = Skl1.re * Skl2.im + Skl1.im * Skl2.re;
  return Wynik;
}
double Sprzezenie (LZespolona Skl2)
{
  double k;
  k = (-1) * Skl2.im;
  return k;
}
double Modul (LZespolona Skl2)
{
  double m;
  m = Skl2.re * Skl2.re + Skl2.im * Skl2.im;
  return m;
}
LZespolona  operator / (LZespolona Skl1, LZespolona Skl2)
{
  LZespolona wynik;
  Sprzezenie (Skl2);
  wynik.re = (Skl1.re * Skl2.re - Skl1.im * Sprzezenie(Skl2)) / Modul(Skl2);
  wynik.im = (Skl1.re * Sprzezenie(Skl2) + Skl2.re * Skl1.im) / Modul(Skl2);
  return wynik; 
}
/*
Lzespolona operator / (Lzespolona Skl1, Lzespolona Skl2)
{
  Lzespolona wynik;

  wynik.re = (Skl1.re * Skl2.re - Skl1.im * Skl2.im) / m;
  wynik.im = (Skl1.re * Skl2.im + Skl2.re * Skl1.im) / m;
  return wynik;
}
*/



