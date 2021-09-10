#ifndef OPERACJE_NA_LICZBACH_H
#define OPERACJE_NA_LICZBACH_H
#include <mainwindow.h>
#endif // OPERACJE_NA_LICZBACH_H

void MainWindow::operacja_liczby(int  num){
    if(firstNumberClicked){

        if(obecna_operacja.czyDodwanie()){
            operacja_zachowaj_druga( num);
            secondnumber=liczb;
            result=firstNumber +secondnumber;
            wyswietlanie(result);
        }
        else if (obecna_operacja.czyModulo()){
            operacja_zachowaj_druga(num);
            if(liczb!=0){
                secondnumber=liczb;
                result=int(firstNumber) %int(secondnumber);
                wyswietlanie(result);
            }
            else{ QMessageBox::critical(this,"Ostrzeżenie!","nie dziel przez zero");
                ustawCyfre.ustaw_Pierwsza_Cyfre_resetuj();
                ustawCyfre.Obecna_Druga_Cyfra_resetuj();
                ui->minus->setEnabled(true);
                wynik();
                ui->lcdNumber->display(0);
            }
        }
        else if(obecna_operacja.czyMnozenie()){
            operacja_zachowaj_druga( num);
            secondnumber=liczb;
            result=firstNumber *secondnumber;
            wyswietlanie(result);

        }
        else if(obecna_operacja.czyDzielenie()){
            operacja_zachowaj_druga(num);
            if(liczb!=0){
                secondnumber=liczb;
                result=firstNumber /secondnumber;
                wyswietlanie(result);
            }
            else{ QMessageBox::critical(this,"Ostrzeżenie!","nie dziel przez zero");
                ustawCyfre.ustaw_Pierwsza_Cyfre_resetuj();
                ustawCyfre.Obecna_Druga_Cyfra_resetuj();
                ui->minus->setEnabled(true);
                wynik();
                ui->lcdNumber->display(0);
            }
        }
        else if(obecna_operacja.czyOdejmowanie()){
            operacja_zachowaj_druga( num);
            secondnumber=liczb;
            result=firstNumber -secondnumber;
            wyswietlanie(result);
        }
    }else{
        ui->minus->setEnabled(true);
        ui->rownanie->setEnabled(false);
        operacja_zachowaj_pierwsza(num);


    }
}
