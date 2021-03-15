#include "WyrazenieZesp.hh"
#include <cstring>
#include <cassert>



/*
 * Tu nalezy zdefiniowac funkcje, ktorych zapowiedzi znajduja sie
 * w pliku naglowkowym.
 */


void Wyswietl(WyrazenieZesp  WyrZ) 
{
    cout << "Podaj wynik operacji:\t " <<endl;
    wyswietl(WyrZ.Arg1);
    switch(WyrZ.Op)
    {
        case 0:
        cout << "+";
        break;
        case 1:
        cout << "-";
        break;
        case 2:
        cout << "*";
        break;
        case 3:
        cout << "/";
        break;
    }
    wyswietl(WyrZ.Arg2);
    cout << "="; cout << endl;
}

LZespolona Oblicz(WyrazenieZesp  WyrZ)
{
    switch(WyrZ.Op)
    {   
        LZespolona Wynik;
        
        case 0:
            Wynik = WyrZ.Arg1+WyrZ.Arg2;
            return Wynik;
            break;

        case 1:
            Wynik = WyrZ.Arg1-WyrZ.Arg2;
            return Wynik;
            break;

        case 2:
            Wynik = WyrZ.Arg1*WyrZ.Arg2;
            return Wynik;
            break;

        case 3:
            Wynik = WyrZ.Arg1/WyrZ.Arg2;
            return Wynik;
            break;

        default:
            break;
    }
}
void wyswietl(LZespolona Skl)
{
    cout << "(" << Skl.re;
    if(Skl.im >=0 )
    {
        cout << "+" << Skl.im << "i)";
    }
    else 
    {
        cout << Skl.im << "i)";
    }
}

bool wczytajiporownaj(LZespolona Wynik)
{
    string odpowiedz,prawidlowaOdpowiedz;
    if(Wynik.im>0)
    {
        prawidlowaOdpowiedz = "("+to_string(Wynik.re)+"+"+to_string(Wynik.im)+"i)";
    }
    else
    {
        prawidlowaOdpowiedz = "("+to_string(Wynik.re)+""+to_string(Wynik.im)+"i)";
    }
    cout << "Podaj odpowiedz: ";
    cin >> odpowiedz;
    if(prawidlowaOdpowiedz == odpowiedz)
    {
        cout << "Twoja odpowiedz to: " + odpowiedz << endl; 
        cout << "Prawidlowa odpowiedz" + prawidlowaOdpowiedz << endl;
        return true;
    }
    else 
    {   
        cout << "Twoja odpowiedz to: " + odpowiedz << endl; 
        cout << "Bledna odpowiedz" << endl;
        cout << "Prawidlowa odpowiedz" + prawidlowaOdpowiedz << endl;
        cout << endl;
        return false;
    }

   
}
