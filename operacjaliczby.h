#ifndef OPERACJALICZBY_H
#define OPERACJALICZBY_H
#include <operacja.h>
#include <obslugaprzyciskow.h>
#include <QMainWindow>
class operacjaliczby
{
public:
    operacjaliczby();
     void operacja_liczby(int num);
private:
     bool firstNumberClicked = false;
       Operacja obecna_operacja;
           ObslugaPrzyciskow  ustawCyfre;
       void  operacja_zachowaj_pierwsza(int num);
       void operacja_zachowaj_druga(int num);
           void wyswietlanie(int result);
         float secondnumber;
         float firstNumber;
         float liczb=1;
         float liczba=0;
        float result=1;
};

#endif // OPERACJALICZBY_H
