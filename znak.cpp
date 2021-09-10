#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLCDNumber>
#include <QSpinBox>
#include <QMessageBox>



void MainWindow::outcome()
{
    if(numbers.firstnumberofdigits>7 || numbers.secondnumberofdigits>7){
        if(numbers.firstnumberofdigits>numbers.secondnumberofdigits){
            ui->lcdNumber->setDigitCount(numbers.firstnumberofdigits);
        }else {
            ui->lcdNumber->setDigitCount(numbers.secondnumberofdigits);
        }
    }
    if(operation.isDivision()){

        if(numbers.second!=0){
            numbers.second=numbers.second_sum;
            result=numbers.first /numbers.second;


        }else{
            QMessageBox::critical(this,"warning!","do not divide by 0");
            ui->lcdNumber->display(0);
            resetowanie();
            firstnumberclicked=false;
            numbers.first=0;
            numbers.second=0;
            setEnabledButtons(true,false);

        } }


    ui->result->setEnabled(false);

    number.numberResult();
    digitsArray();
    number.resultIncrementation();
    ui->lcdNumber->display(result);
    resetowanie();
    setEnabledButtons(true,true);

}

void MainWindow::operacja_clicked(char op)
{
    operation.set(op);
    setEnabledButtons(true,true);
    ui->plus_minus->setEnabled(false);
    firstnumberclicked=true;
    ui->lcdNumber->display(numbers.first);
    setEnabledButtons(true,true);
}

void MainWindow::plus_minus_clicked()
{
    if(firstnumberclicked){

        numbers.second_sum=-numbers.second_sum;
        numbers.second=numbers.second_sum;
        secondplusminusclicked=!secondplusminusclicked;
        setEnabledButtons(true,true);
        digitClicked(-1);
        ui->lcdNumber->display(numbers.second);

    }else
    {

        firstplusminusclicked=!firstplusminusclicked;
        numbers.first_sum=-numbers.first_sum;
        numbers.first=numbers.first_sum;
        MainWindow::ui->lcdNumber->display(numbers.first);
        setEnabledButtons(true,true);

    }
}

void MainWindow::obsluga_przecinka()
{
    if(firstnumberclicked){
        issecondnumberdot=true;
    }else{
        isfirstnumberdot=true;
    }
}
