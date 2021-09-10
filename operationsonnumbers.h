#ifndef OPERATIONSONNUMBERS_H
#define OPERATIONSONNUMBERS_H
#include "ui_mainwindow.h"
#include <QLCDNumber>
#include <QSpinBox>


class operationsOnNumbers
{
public:
    operationsOnNumbers();
    long long secondnumberofdigits=0;
    long long firstnumberofdigits=0;
    double first=0;
    double second=0;
    long long save_second_inter=0,save_first_inter=0;
    long long second_dot_posicion=1,first_dot_posicion=1;
    double second_sum=0;
    double  first_sum=0;
    Ui::MainWindow *ui;

};

#endif // OPERATIONSONNUMBERS_H
