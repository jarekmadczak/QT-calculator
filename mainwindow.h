#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "operacja.h"
#include "buttonoperations.h"
#include <QMainWindow>
#include <QLCDNumber>
#include "liczba.h"
#include "operationsonnumbers.h"


QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow

{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


public:
    void on_lcdNumber_overflow();

    void resizeEvent(QResizeEvent* event);
    void setDigitCount(long long numDigits);

private slots:
    void on_button_2_clicked();

    void on_button_1_clicked();

    void on_button_3_clicked();

    void on_button_4_clicked();

    void on_button_5_clicked();

    void on_button_6_clicked();

    void on_button_7_clicked();

    void on_button_8_clicked();

    void on_button_9_clicked();

    void on_button_0_clicked();

    void on_C_clicked();

    void on_plus_clicked();

    void on_minus_clicked();

    void on_modulo_clicked();

    void on_division_clicked();

    void on_result_clicked();

    void on_plus_minus_clicked();

    void on_dot_clicked();

    void on_multiplication_clicked();

private:

    double result=0;
    double firstnumber[16],secondnumber[16];
    const int last_array_digit=1;
    const int first_array_digit=16;


    bool secondplusminusclicked=false;
    bool ispositive=true;
    bool isfirstnumberdot=false;
    bool issecondnumberdot=false;
    bool firstplusminusclicked=false;
    bool plusminusclicked=true;
    bool isdisplay=false;
    bool firstnumberclicked = false;



    Operation operation;
    ButtonOperations  setDigit;
    Ui::MainWindow *ui;
    Number number;
    operationsOnNumbers numbers;



    void getFirstNumberToArray(long long num);
    void getSecondNumberToArray(long long num);
    void digitClicked(long long num);
    void operacja_clicked(char op);
    void plus_minus_clicked();
    void setEnabledButtons(bool firstlog , bool secondlog);
    void outcome();
    void obsluga_przecinka(); //
    void resetowanie(); //
    void firstNumberSize();
    void secondNumberSize();
protected:
    void keyReleaseEvent(QKeyEvent *event);
    void digitsArray();

};
#endif // MAINWINDOW_H
