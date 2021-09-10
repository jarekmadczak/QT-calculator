#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLCDNumber>
#include <QSpinBox>
#include <QMessageBox>
#include "buttonoperations.cpp"

void MainWindow::getSecondNumberToArray(long long num)//second number array
{
    int i=setDigit.secondDigitNow();

     if(numbers.secondnumberofdigits>7){
      secondNumberSize();

     }
     if(numbers.secondnumberofdigits==1){
         ui->lcdNumber->setDigitCount(8);
     }
    if(issecondnumberdot)            //writing a decimal number to  second number array after clickng ","
    {
        numbers.second_dot_posicion;
        secondnumber[16-i]=double(num)/10;
        for(int j=numbers.second_dot_posicion;j<16-i;++j)
        {
            secondnumber[16-i]=secondnumber[16-i]/10;
        }
    }else{
        for(int j=0;j<16-i;++j)          //writing integer  second number to arryay
        {
            int k=16-i-j;
            secondnumber[k]=secondnumber[k-1]*10;
        }
        secondnumber[0]=num;
    }

    long long sumacalkowita=0;
    long double ulameksuma=0 ,suma=0; // local variable to get a sum

    if(issecondnumberdot)
    {
        for(int j=numbers.second_dot_posicion;j<17-i;++j) //getting a decimal number to  second number array after clickng ","
        {
            ulameksuma+=secondnumber[j];
        }
    }else
    {
        for(int j=0;j<17-i;++j)
        {
            sumacalkowita+=secondnumber[j];        //getting integer number to arryay
            numbers.save_second_inter=sumacalkowita;
        }
    }

    if(issecondnumberdot)
    {
        suma=ulameksuma+ double(numbers.save_second_inter);  //getting sum for decimalnumber
    }else{
        suma=sumacalkowita;                             //getting sum for integer
    }

    if(secondplusminusclicked)
    {
        numbers.second_sum=-suma;
    }else{
        numbers.second_sum=suma;
    }

    if(setDigit.secondDigitNow()==last_array_digit)
    {

        isdisplay=true;
        setEnabledButtons(false,false);
        ui->result->setEnabled(true);
        //reseting second number array
    }else{
        setEnabledButtons(true,false);
        ui->result->setEnabled(true);
        ui->plus_minus->setEnabled(true);

    }numbers.second=numbers.second_sum;
    if(issecondnumberdot==false)
    {
        numbers.second_dot_posicion++;                        //getting decimal point posicon
    }
    setDigit.SecondDigitDecrementation();
    ui->lcdNumber->display(numbers.second_sum);
     numbers.secondnumberofdigits++;

}


void MainWindow::getFirstNumberToArray(long long num){       //first number array
    ui->plus_minus->setEnabled(true);

if(numbers.firstnumberofdigits>7){
 firstNumberSize();
}
    int i=setDigit.firstDigitNow();

    if(isfirstnumberdot)                          //writing a decimal number to first number array after clickng ","
    {
        firstnumber[16-i]= double(num)/10;
        for(int j=numbers.first_dot_posicion;j<16-i;++j)
        {
            firstnumber[16-i]= firstnumber[16-i]/10;
        }
    }else{
        for(int j=0;j<16-i;++j)                               //writing integer number to  first number arryay
        {
            int k=16-i-j;
            firstnumber[k]=firstnumber[k-1]*10;
        }
        firstnumber[0]=num;
    }
    long long calkowitasuma=0;
    long double suma=0 , ulameksuma=0;                // local variable to get a sum


    if(isfirstnumberdot){
        for(int j=numbers.first_dot_posicion;j<17-i;++j)       //getting a decimal number to  first number array after clickng ","
        {
            ulameksuma+=firstnumber[j];
        }
    }else{

        for(int j=0;j<17-i;++j)                              //getting integer number to first number arryay
        {
            calkowitasuma+=firstnumber[j];
            numbers.save_first_inter=calkowitasuma;
        }
    }
    if(isfirstnumberdot)
    {
        suma+=ulameksuma+ double(numbers.save_first_inter);           //getting sum for decimal number
    }else{
        suma=calkowitasuma;                                           //getting sum for integer number
    }
    if(firstplusminusclicked)
    {
        numbers.first_sum=-suma;
    }else{
        numbers.first_sum=suma;
    }
    if(setDigit.firstDigitNow()==last_array_digit)                            //reseting first number array
    {

        firstnumberclicked = true;
        ui->plus_minus->setEnabled(true);
        setEnabledButtons(false,true);
    }else{
        setEnabledButtons(true,true);
    }
    numbers.first=numbers.first_sum;
    ui->lcdNumber->display(numbers.first_sum);
    setDigit.firstDigitDecrementation();

    if (setDigit.firstDigitNow()==first_array_digit)
    {
        ui->plus_minus->setEnabled(true);
    }
    if(isfirstnumberdot==false)
    {
        numbers.first_dot_posicion++;                  //getting decimal point posicon
    }
    if(numbers.firstnumberofdigits==1){
        ui->lcdNumber->setDigitCount(8);
    }
    numbers.firstnumberofdigits++;



}

