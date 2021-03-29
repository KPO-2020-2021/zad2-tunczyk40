#ifndef STATYSTYKI_HH
#define STATYSTYKI_HH



#include "LZespolona.hh"
#include "WyrazenieZesp.hh"
#include "BazaTestu.hh"

/*
 * Tu nalezy zdefiniowac funkcje, ktore definiuja model statystyki 
 */
int statystyka(int poprawna, LZespolona wynik, LZespolona odp);
void wyswietlanie_statow(int poprawna, BazaTestu Bazunia);
#endif
