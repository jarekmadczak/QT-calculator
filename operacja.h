#ifndef OPERACJA_H
#define OPERACJA_H


class Operation
{
public:
    Operation();
    void set(char op);
    bool isAddition();
    bool isSubtraction();
    bool isMultiplication();
    bool isDivision();
    bool isModulo();
    bool czyPlusMinus();
    bool isPoiter();
private:
    char op;
};

#endif // OPERACJA_H
//liczba ograniczenia czyliczba ujemna tabliczby
//liczba 1 i liczba2


