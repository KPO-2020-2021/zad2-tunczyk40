#ifndef WYRAZENIEZESP_HH
#define WYRAZENIEZESP_HH



#include "LZespolona.hh"
#include <iostream>


/*!
 * Modeluje zbior operatorow arytmetycznych.
 */
enum Operator { Op_Dodaj, Op_Odejmij, Op_Mnoz, Op_Dziel };



/*
 * Modeluje pojecie dwuargumentowego wyrazenia zespolonego
 */
struct WyrazenieZesp {
  LZespolona   Arg1;   // Pierwszy argument wyrazenia arytmetycznego
  Operator     Op;     // Opertor wyrazenia arytmetycznego
  LZespolona   Arg2;   // Drugi argument wyrazenia arytmetycznego
};


/*
 * Funkcje ponizej nalezy zdefiniowac w module.
 *
 */


void wyswietlanie(LZespolona Lz);
LZespolona Oblicz(WyrazenieZesp  WyrZ);
void Wyswietl(WyrazenieZesp  WyrZ);
std::ostream& operator << (std::ostream &StrmWy, const LZespolona &Lz);
std::ostream& operator << (std::ostream &StrmWy, const WyrazenieZesp &WyrZ);
std::istream& operator >> (std::istream &StrmWe, LZespolona &Lz);
std::istream& operator >> (std::istream &StreamWe, WyrazenieZesp& wyrazenie);

#endif
