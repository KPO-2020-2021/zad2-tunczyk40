#include "Statystyki.hh"
#include <iostream>
#include <cmath>


/*
 * Tu nalezy zdefiniowac funkcje, ktorych zapowiedzi znajduja sie
 * w pliku naglowkowym.
 */
int statystyka(int poprawna, LZespolona wynik, LZespolona odp)
{
    if(odp == wynik)
    {
      std::cout << "Poprawna odpowiedz" << std::endl;
      poprawna++;  
      
    }
    else
    {
      std::cout << "Niepoprawna odpowiedz. Poprawna to:" << wynik << std::endl;
     
    }
    return poprawna;
}

void wyswietlanie_statow(int poprawna, BazaTestu Bazunia)
{
    std::cout << std::endl;
    std::cout << "Wynik procentowy poprawnych odpowiedzi z testu: " << 100*poprawna/Bazunia.IloscPytan << "%";
    std::cout << std::endl;
    std::cout << "Wynik procentowy blednych odpowiedzi z testu: " << 100*(Bazunia.IloscPytan-poprawna)/Bazunia.IloscPytan << "%";
    std::cout << std::endl;
}    


