#include "buttonoperations.h"

ButtonOperations::ButtonOperations()
{

}
void ButtonOperations::setFirstDigit(int liczba){
    this->liczba=liczba;
}

long long ButtonOperations::firstDigitDecrementation(){
    --liczba;
    return liczba;
}

long long ButtonOperations::firstDigitNow(){

    return liczba;
}

long long ButtonOperations::resetFirstDigit(){
    liczba=16;

    return liczba;
}
void ButtonOperations::setSecondDigit(int liczb){
    this->liczb=liczb;
}
long long ButtonOperations::secondDigitNow(){
    return liczb;

}
long long ButtonOperations::resetSecondDigit(){
    liczb=16;
    return liczb;

}
long long ButtonOperations::SecondDigitDecrementation(){
    --liczb;
    return liczb;

}
