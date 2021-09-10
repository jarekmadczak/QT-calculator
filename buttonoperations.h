#ifndef BUTTONOPERATIONS_H
#define BUTTONOPERATIONS_H


class ButtonOperations
{
public:
    ButtonOperations();
    void setFirstDigit(int liczba);
   long long firstDigitNow();
    long long firstDigitDecrementation();
    long long resetFirstDigit();
    void setSecondDigit(int liczb);
    long long secondDigitNow();
    long long SecondDigitDecrementation();
    long long resetSecondDigit();

private:

    double liczba=15;
    double liczb=15;

};

#endif // BUTTONOPERATIONS_H
