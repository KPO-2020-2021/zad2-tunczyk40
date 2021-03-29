#include "WyrazenieZesp.hh"



/*
 * Tu nalezy zdefiniowac funkcje, ktorych zapowiedzi znajduja sie
 * w pliku naglowkowym.
 */
/*
* Realizuje wyswietlenie liczby zespolonej
* Argumenty:
* LiczbaZesp - liczba zespolona ktora ma byc wyswietlona
* Zwraca:
* Wyswietlenie liczby zespolonej w terminalu
*/
void wyswietlanie(LZespolona LiczbaZesp)
{
    std::cout << "(" << LiczbaZesp.re << std::showpos << LiczbaZesp.im << std::noshowpos << "i)";
}
/*
* Realizuje obliczenia dzialan arytmetycznych na liczbach zespolonych
* Argumenty:
* WyrZ - wyrazenie liczb zespolonych ktore ma byc obliczone
*Zwraca:
*   Wynik dzialan arytmetycznych na liczbach zespolonych
*/
LZespolona Oblicz(WyrazenieZesp WyrZ)
{
    LZespolona wynik;
    switch (WyrZ.Op)
    {
    case 0:
        wynik = WyrZ.Arg1+WyrZ.Arg2;
        return wynik;
        break;
    case 1:
        wynik = WyrZ.Arg1-WyrZ.Arg2;
        return wynik;
        break;
    case 2:
        wynik = WyrZ.Arg1*WyrZ.Arg2;
        return wynik;
        break;
    case 3:
        wynik = WyrZ.Arg1/WyrZ.Arg2;
        return wynik;
        break;
    default:
        break;
    }
}
/*
* Realizuje wyswietlenie wyrazenia liczb zespolonych
* Argumenty:
* WyrZ - wyrazenie liczb zespolonych ktore ma byc wyswietlone
* Dzialanie - tablica znakow operatorow arytmetycznych sluzaca do ich wyswietlania
* Zwraca:
*   Wyswietlone wyrazenie liczby zespolonej w terminalu
*/
void Wyswietl(WyrazenieZesp  WyrZ)
{
    const char Dzialanie[] ="+-*/";
    std::cout << "Podaj wynik operacji:\t";
    wyswietlanie(WyrZ.Arg1);
    std::cout << Dzialanie[WyrZ.Op];
    wyswietlanie(WyrZ.Arg2);
    std::cout << " = "; std::cout << std::endl;
}
/*
* Przeciazenie operatora <<
wyswietlenie liczby zespolonej
* Argumenty:
* LiczbaZesp - liczba zespolona ktora ma byc wyswietlona
* Zwraca:
* Wyswietlenie liczby zespolonej w terminalu
*/
std::ostream& operator << (std::ostream &StreamWy, const LZespolona &LiczbaZesp)
{
    return StreamWy << "(" << LiczbaZesp.re << std::showpos << LiczbaZesp.im << std::noshowpos << "i)";
}
/*
* Przeciazenie operatora <<
* Realizuje wyswietlenie wyrazenia liczb zespolonych
* Argumenty:
* WyrZ - wyrazenie liczb zespolonych ktore ma byc wyswietlone
* Dzialanie - tablica znakow operatorow arytmetycznych sluzaca do ich wyswietlania
* Zwraca:
*   Wyswietlone wyrazenie liczby zespolonej w terminalu
*/
std::ostream& operator << (std::ostream &StreamWy, const WyrazenieZesp &WyrZ)
{
    const char Dzialanie[] ="+-*/";
    return StreamWy << "Podaj wynik operacji:\t" << WyrZ.Arg1 << Dzialanie[WyrZ.Op] << WyrZ.Arg2 << "=" << std::endl;
}
/*
* Przeciazenie operatora >>
* Realizuje wczytanie liczby zespolonej
* Argumenty:
* LiczbaZesp - zmienna do ktorej wczytywana jest liczba zespolona
* Zwraca:
*  Strumien z wczytana liczba zespolona 
*/
std::istream& operator >> (std::istream &StreamWe, LZespolona& LiczbaZesp)
{
    char nawias, litera;

        StreamWe >> nawias;
        if(nawias != '(')
            {StreamWe.setstate(std::_S_failbit);return StreamWe;}
        StreamWe >> LiczbaZesp.re;
        if(StreamWe.fail())
            {return StreamWe;}
        StreamWe >> LiczbaZesp.im;
        if(StreamWe.fail())
            {return StreamWe;}
        StreamWe >> litera;
        if(litera != 'i')
            {StreamWe.setstate(std::_S_failbit);return StreamWe;}
        StreamWe >> nawias;    
        if(nawias != ')')
            {StreamWe.setstate(std::_S_failbit);return StreamWe;}
        
        return StreamWe;
        
}
/* wczytywanie wyrazenie zespolonego */
std::istream& operator >> (std::istream &StreamWe, WyrazenieZesp& wyrazenie)
{
    char nawias, litera, nawias_2, operator_arytm;

        StreamWe >> nawias;
        if(nawias != '(')
            {StreamWe.setstate(std::_S_failbit);return StreamWe;}
        StreamWe >> wyrazenie.Arg1.re;
        if(StreamWe.fail())
            {return StreamWe;}
        StreamWe >> wyrazenie.Arg1.im;
        if(StreamWe.fail())
            {return StreamWe;}
        StreamWe >> litera;
        if(litera != 'i')
            {StreamWe.setstate(std::_S_failbit);return StreamWe;}
        StreamWe >> nawias;    
        if(nawias != ')')
            {StreamWe.setstate(std::_S_failbit);return StreamWe;}
        
        StreamWe >> operator_arytm;
        if(operator_arytm != '+' && operator_arytm != '-' && operator_arytm != '*' && operator_arytm != '/')
            {StreamWe.setstate(std::_S_failbit);return StreamWe;}
        wyrazenie.Op >> operator_arytm;

        StreamWe >> nawias_2;
        if(nawias != '(')
            {StreamWe.setstate(std::_S_failbit);return StreamWe;}
        StreamWe >> wyrazenie.Arg1.re;
        if(StreamWe.fail())
            {return StreamWe;}
        StreamWe >> wyrazenie.Arg1.im;
        if(StreamWe.fail())
            {return StreamWe;}
        StreamWe >> litera;
        if(litera != 'i')
            {StreamWe.setstate(std::_S_failbit);return StreamWe;}
        StreamWe >> nawias_2;    
        if(nawias != ')') 
            {StreamWe.setstate(std::_S_failbit);return StreamWe;}   
        return StreamWe;
        
}