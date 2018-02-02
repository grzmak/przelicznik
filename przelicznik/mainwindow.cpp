#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QGridLayout>
#include <QListView>
#include <iostream>
using namespace std;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::zmien()
{


    if(ui->product->currentText()=="cukier")
    {
        qobject_cast<QListView *>(ui->unit->view())->setRowHidden(4, true);
        qobject_cast<QListView *>(ui->unit->view())->setRowHidden(5, true);
         qobject_cast<QListView *>(ui->unit->view())->setRowHidden(1, false);
          qobject_cast<QListView *>(ui->unit->view())->setRowHidden(2, false);
           qobject_cast<QListView *>(ui->unit->view())->setRowHidden(3, false);

    }
    if(ui->product->currentText()=="mleko")
    {
        qobject_cast<QListView *>(ui->unit->view())->setRowHidden(4, false);
        qobject_cast<QListView *>(ui->unit->view())->setRowHidden(5, false);
        qobject_cast<QListView *>(ui->unit->view())->setRowHidden(1, true);
         qobject_cast<QListView *>(ui->unit->view())->setRowHidden(2,true);
          qobject_cast<QListView *>(ui->unit->view())->setRowHidden(3, true);
    }
    if(ui->product->currentText()=="woda")
    {
        qobject_cast<QListView *>(ui->unit->view())->setRowHidden(4, false);
        qobject_cast<QListView *>(ui->unit->view())->setRowHidden(5, false);
        qobject_cast<QListView *>(ui->unit->view())->setRowHidden(1, true);
         qobject_cast<QListView *>(ui->unit->view())->setRowHidden(2,true);
          qobject_cast<QListView *>(ui->unit->view())->setRowHidden(3, true);
    }
    if(ui->product->currentText()=="olej")
    {
        qobject_cast<QListView *>(ui->unit->view())->setRowHidden(4, false);
        qobject_cast<QListView *>(ui->unit->view())->setRowHidden(5, false);
        qobject_cast<QListView *>(ui->unit->view())->setRowHidden(1, true);
         qobject_cast<QListView *>(ui->unit->view())->setRowHidden(2,true);
          qobject_cast<QListView *>(ui->unit->view())->setRowHidden(3, true);
    }
    if(ui->product->currentText()=="sol")
    {
        qobject_cast<QListView *>(ui->unit->view())->setRowHidden(4, true);
        qobject_cast<QListView *>(ui->unit->view())->setRowHidden(5, true);
        qobject_cast<QListView *>(ui->unit->view())->setRowHidden(1, false);
         qobject_cast<QListView *>(ui->unit->view())->setRowHidden(2,false);
          qobject_cast<QListView *>(ui->unit->view())->setRowHidden(3, false);
    }
    if(ui->product->currentText()=="pieprz")
    {
        qobject_cast<QListView *>(ui->unit->view())->setRowHidden(4, true);
        qobject_cast<QListView *>(ui->unit->view())->setRowHidden(5, true);
        qobject_cast<QListView *>(ui->unit->view())->setRowHidden(1, false);
         qobject_cast<QListView *>(ui->unit->view())->setRowHidden(2,false);
          qobject_cast<QListView *>(ui->unit->view())->setRowHidden(3, false);
    }
}
void MainWindow::oblicz()
{
        QString tekst1, tekst2, tekst3,tekst4,tekst5,tekst6;
    int result1;
    int result2;
    int result3;
    int result4;
    int result5;
    int result6;

     if(ui->product->currentText()=="cukier")
     {

         if(ui->unit->currentText()=="g")
         {

             result6=ui->value->text().toInt();
             result1=ui->value->text().toInt()/1000;
            result2=ui->value->text().toInt()/10;
             result3=ui->value->text().toInt()/5;
             result4=ui->value->text().toInt()/12;
             result5=ui->value->text().toInt()/220;
             tekst1=QString::number(result6);
             tekst2=QString::number(result1);
             tekst3=QString::number(result2);
             tekst4=QString::number(result3);
             tekst5=QString::number(result4);
             tekst6=QString::number(result5);
             ui->gram->setText(tekst1);
             ui->kg->setText(tekst2);
             ui->dag->setText(tekst3);
             ui->spoon->setText(tekst4);
             ui->bigSpoon->setText(tekst5);
             ui->glass->setText(tekst6);


          }
         if(ui->unit->currentText()=="dag")
         {
             result1=ui->value->text().toInt()*10;
             result2=ui->value->text().toInt();
            result3=ui->value->text().toInt()/10;
             result4=ui->value->text().toInt()*10/5;
             result5=ui->value->text().toInt()*10/12;
             result6=ui->value->text().toInt()*10/220;
             tekst1=QString::number(result6);
             tekst2=QString::number(result1);
             tekst3=QString::number(result2);
             tekst4=QString::number(result3);
             tekst5=QString::number(result4);
             tekst6=QString::number(result5);
             ui->gram->setText(tekst2);
             ui->kg->setText(tekst4);
             ui->dag->setText(tekst3);
             ui->spoon->setText(tekst5);
             ui->bigSpoon->setText(tekst6);
             ui->glass->setText(tekst1);

         }
         if(ui->unit->currentText()=="kg")
         {

             result1=ui->value->text().toInt()*1000;
             result2=ui->value->text().toInt();
            result3=ui->value->text().toInt()/100;
             result4=ui->value->text().toInt()*1000/5;
             result5=ui->value->text().toInt()*1000/12;
             result6=ui->value->text().toInt()*1000/220;
             tekst1=QString::number(result6);
             tekst2=QString::number(result1);
             tekst3=QString::number(result2);
             tekst4=QString::number(result3);
             tekst5=QString::number(result4);
             tekst6=QString::number(result5);
             ui->gram->setText(tekst2);
             ui->kg->setText(tekst3);
             ui->dag->setText(tekst4);
             ui->spoon->setText(tekst5);
             ui->bigSpoon->setText(tekst6);
             ui->glass->setText(tekst1);
         }
         if(ui->unit->currentText()=="lyzeczka")
         {
             result1=ui->value->text().toInt()*5;
             result2=ui->value->text().toInt()*5/10;
            result3=ui->value->text().toInt()*5/1000;
             result4=ui->value->text().toInt();
             result5=ui->value->text().toInt()*5/12;
             result6=ui->value->text().toInt()*5/220;

             tekst1=QString::number(result1);
             tekst2=QString::number(result2);
             tekst3=QString::number(result3);
             tekst4=QString::number(result4);
             tekst5=QString::number(result5);
             tekst6=QString::number(result6);
             ui->gram->setText(tekst1);
             ui->kg->setText(tekst3);
             ui->dag->setText(tekst2);
             ui->spoon->setText(tekst4);
             ui->bigSpoon->setText(tekst5);
             ui->glass->setText(tekst6);
         }
         if(ui->unit->currentText()=="lyzka")
         {
             result1=ui->value->text().toInt()*12;
             result2=ui->value->text().toInt()*12/10;
            result3=ui->value->text().toInt()*12/1000;
             result4=ui->value->text().toInt()*12/5;
             result5=ui->value->text().toInt()*12/12;
             result6=ui->value->text().toInt()*12/220;

             tekst1=QString::number(result1);
             tekst2=QString::number(result2);
             tekst3=QString::number(result3);
             tekst4=QString::number(result4);
             tekst5=QString::number(result5);
              tekst6=QString::number(result6);
             ui->gram->setText(tekst1);
             ui->kg->setText(tekst3);
             ui->dag->setText(tekst2);
             ui->spoon->setText(tekst4);
             ui->bigSpoon->setText(tekst5);
             ui->glass->setText(tekst6);
         }
         if(ui->unit->currentText()=="szklanka")
         {
             result1=ui->value->text().toInt()*220;
             result2=ui->value->text().toInt()*220/10;
            result3=ui->value->text().toInt()*220/1000;
             result4=ui->value->text().toInt()*220/5;
             result5=ui->value->text().toInt()*220/12;
             result6=ui->value->text().toInt();

             tekst1=QString::number(result1);
             tekst2=QString::number(result2);
             tekst3=QString::number(result3);
             tekst4=QString::number(result4);
             tekst5=QString::number(result5);
             tekst6=QString::number(result6);
             ui->gram->setText(tekst1);
             ui->kg->setText(tekst3);
             ui->dag->setText(tekst2);
             ui->spoon->setText(tekst4);
             ui->bigSpoon->setText(tekst5);
             ui->glass->setText(tekst6);
         }
     }
         if(ui->product->currentText()=="mleko")
         {
             if(ui->unit->currentText()=="ml")
             {
                 result1=ui->value->text().toInt();
                 result2=ui->value->text().toInt()/1000;
                 result3=ui->value->text().toInt()/5;
                 result4=ui->value->text().toInt()/12;
                 result5=ui->value->text().toInt()*250;


                 tekst1=QString::number(result1);
                 tekst2=QString::number(result2);
                 tekst3=QString::number(result3);
                 tekst4=QString::number(result4);
                 tekst5=QString::number(result5);
                 ui->ml->setText(tekst1);
                 ui->litr->setText(tekst2);
                 ui->spoon->setText(tekst3);
                 ui->bigSpoon->setText(tekst4);
                 ui->glass->setText(tekst5);

             }
             if(ui->unit->currentText()=="l")
             {
                 result1=ui->value->text().toInt()*1000;
                 result2=ui->value->text().toInt();
                 result3=ui->value->text().toInt()*1000/5;
                 result4=ui->value->text().toInt()*1000/12;
                 result5=ui->value->text().toInt()*1000/250;


                 tekst1=QString::number(result1);
                 tekst2=QString::number(result2);
                 tekst3=QString::number(result3);
                 tekst4=QString::number(result4);
                 tekst5=QString::number(result5);
                 ui->ml->setText(tekst1);
                 ui->litr->setText(tekst2);
                 ui->spoon->setText(tekst3);
                 ui->bigSpoon->setText(tekst4);
                 ui->glass->setText(tekst5);
             }
             if(ui->unit->currentText()=="lyzeczka")
             {
                 result1=ui->value->text().toInt()*5;
                 result2=ui->value->text().toInt()*5/1000;
                 result3=ui->value->text().toInt();
                 result4=ui->value->text().toInt()*5/12;
                 result5=ui->value->text().toInt()*5/250;


                 tekst1=QString::number(result1);
                 tekst2=QString::number(result2);
                 tekst3=QString::number(result3);
                 tekst4=QString::number(result4);
                 tekst5=QString::number(result5);
                 ui->ml->setText(tekst1);
                 ui->litr->setText(tekst2);
                 ui->spoon->setText(tekst3);
                 ui->bigSpoon->setText(tekst4);
                 ui->glass->setText(tekst5);

             }
             if(ui->unit->currentText()=="lyzka")
             {
                 result1=ui->value->text().toInt()*12;
                 result2=ui->value->text().toInt()*12/1000;
                 result3=ui->value->text().toInt()*12/5;
                 result4=ui->value->text().toInt();
                 result5=ui->value->text().toInt()*12/250;


                 tekst1=QString::number(result1);
                 tekst2=QString::number(result2);
                 tekst3=QString::number(result3);
                 tekst4=QString::number(result4);
                 tekst5=QString::number(result5);
                 ui->ml->setText(tekst1);
                 ui->litr->setText(tekst2);
                 ui->spoon->setText(tekst3);
                 ui->bigSpoon->setText(tekst4);
                 ui->glass->setText(tekst5);
             }
             if(ui->unit->currentText()=="szklanka")
             {
                 result1=ui->value->text().toInt()*250;
                 result2=ui->value->text().toInt()*250/1000;
                 result3=ui->value->text().toInt()*250/5;
                 result4=ui->value->text().toInt()*250/12;
                 result5=ui->value->text().toInt();


                 tekst1=QString::number(result1);
                 tekst2=QString::number(result2);
                 tekst3=QString::number(result3);
                 tekst4=QString::number(result4);
                 tekst5=QString::number(result5);
                 ui->ml->setText(tekst1);
                 ui->litr->setText(tekst2);
                 ui->spoon->setText(tekst3);
                 ui->bigSpoon->setText(tekst4);
                 ui->glass->setText(tekst5);

             }
         }

        if(ui->product->currentText()=="woda")
        {
            if(ui->unit->currentText()=="ml")
            {
                result1=ui->value->text().toInt();
                result2=ui->value->text().toInt()/1000;
                result3=ui->value->text().toInt()/5;
                result4=ui->value->text().toInt()/12;
                result5=ui->value->text().toInt()*250;


                tekst1=QString::number(result1);
                tekst2=QString::number(result2);
                tekst3=QString::number(result3);
                tekst4=QString::number(result4);
                tekst5=QString::number(result5);
                ui->ml->setText(tekst1);
                ui->litr->setText(tekst2);
                ui->spoon->setText(tekst3);
                ui->bigSpoon->setText(tekst4);
                ui->glass->setText(tekst5);

            }
            if(ui->unit->currentText()=="l")
            {

                result1=ui->value->text().toInt()*1000;
                result2=ui->value->text().toInt();
                result3=ui->value->text().toInt()*1000/5;
                result4=ui->value->text().toInt()*1000/12;
                result5=ui->value->text().toInt()*1000/250;


                tekst1=QString::number(result1);
                tekst2=QString::number(result2);
                tekst3=QString::number(result3);
                tekst4=QString::number(result4);
                tekst5=QString::number(result5);
                ui->ml->setText(tekst1);
                ui->litr->setText(tekst2);
                ui->spoon->setText(tekst3);
                ui->bigSpoon->setText(tekst4);
                ui->glass->setText(tekst5);

            }
            if(ui->unit->currentText()=="lyzeczka")
            {
                result1=ui->value->text().toInt()*5;
                result2=ui->value->text().toInt()*5/1000;
                result3=ui->value->text().toInt();
                result4=ui->value->text().toInt()*5/12;
                result5=ui->value->text().toInt()*5/250;


                tekst1=QString::number(result1);
                tekst2=QString::number(result2);
                tekst3=QString::number(result3);
                tekst4=QString::number(result4);
                tekst5=QString::number(result5);
                ui->ml->setText(tekst1);
                ui->litr->setText(tekst2);
                ui->spoon->setText(tekst3);
                ui->bigSpoon->setText(tekst4);
                ui->glass->setText(tekst5);

            }
            if(ui->unit->currentText()=="lyzka")
            {
                result1=ui->value->text().toInt()*12;
                result2=ui->value->text().toInt()*12/1000;
                result3=ui->value->text().toInt()*12/5;
                result4=ui->value->text().toInt();
                result5=ui->value->text().toInt()*12/250;


                tekst1=QString::number(result1);
                tekst2=QString::number(result2);
                tekst3=QString::number(result3);
                tekst4=QString::number(result4);
                tekst5=QString::number(result5);
                ui->ml->setText(tekst1);
                ui->litr->setText(tekst2);
                ui->spoon->setText(tekst3);
                ui->bigSpoon->setText(tekst4);
                ui->glass->setText(tekst5);

            }
            if(ui->unit->currentText()=="szklanka")
            {
                result1=ui->value->text().toInt()*250;
                result2=ui->value->text().toInt()*250/1000;
                result3=ui->value->text().toInt()*250/5;
                result4=ui->value->text().toInt()*250/12;
                result5=ui->value->text().toInt();


                tekst1=QString::number(result1);
                tekst2=QString::number(result2);
                tekst3=QString::number(result3);
                tekst4=QString::number(result4);
                tekst5=QString::number(result5);
                ui->ml->setText(tekst1);
                ui->litr->setText(tekst2);
                ui->spoon->setText(tekst3);
                ui->bigSpoon->setText(tekst4);
                ui->glass->setText(tekst5);

            }
        }
            if(ui->product->currentText()=="olej")
            {
                if(ui->unit->currentText()=="ml")
                {
                    result1=ui->value->text().toInt();
                    result2=ui->value->text().toInt()/1000;
                    result3=ui->value->text().toInt()/5;
                    result4=ui->value->text().toInt()/12;
                    result5=ui->value->text().toInt()*250;


                    tekst1=QString::number(result1);
                    tekst2=QString::number(result2);
                    tekst3=QString::number(result3);
                    tekst4=QString::number(result4);
                    tekst5=QString::number(result5);
                    ui->ml->setText(tekst1);
                    ui->litr->setText(tekst2);
                    ui->spoon->setText(tekst3);
                    ui->bigSpoon->setText(tekst4);
                    ui->glass->setText(tekst5);
                }
                if(ui->unit->currentText()=="l")
                {

                    result1=ui->value->text().toInt()*1000;
                    result2=ui->value->text().toInt();
                    result3=ui->value->text().toInt()*1000/5;
                    result4=ui->value->text().toInt()*1000/12;
                    result5=ui->value->text().toInt()*1000/250;


                    tekst1=QString::number(result1);
                    tekst2=QString::number(result2);
                    tekst3=QString::number(result3);
                    tekst4=QString::number(result4);
                    tekst5=QString::number(result5);
                    ui->ml->setText(tekst1);
                    ui->litr->setText(tekst2);
                    ui->spoon->setText(tekst3);
                    ui->bigSpoon->setText(tekst4);
                    ui->glass->setText(tekst5);

                }
                if(ui->unit->currentText()=="lyzeczka")
                {
                    result1=ui->value->text().toInt()*5;
                    result2=ui->value->text().toInt()*5/1000;
                    result3=ui->value->text().toInt();
                    result4=ui->value->text().toInt()*5/12;
                    result5=ui->value->text().toInt()*5/250;


                    tekst1=QString::number(result1);
                    tekst2=QString::number(result2);
                    tekst3=QString::number(result3);
                    tekst4=QString::number(result4);
                    tekst5=QString::number(result5);
                    ui->ml->setText(tekst1);
                    ui->litr->setText(tekst2);
                    ui->spoon->setText(tekst3);
                    ui->bigSpoon->setText(tekst4);
                    ui->glass->setText(tekst5);
                }
                if(ui->unit->currentText()=="lyzka")
                {
                    result1=ui->value->text().toInt()*12;
                    result2=ui->value->text().toInt()*12/1000;
                    result3=ui->value->text().toInt()*12/5;
                    result4=ui->value->text().toInt();
                    result5=ui->value->text().toInt()*12/250;


                    tekst1=QString::number(result1);
                    tekst2=QString::number(result2);
                    tekst3=QString::number(result3);
                    tekst4=QString::number(result4);
                    tekst5=QString::number(result5);
                    ui->ml->setText(tekst1);
                    ui->litr->setText(tekst2);
                    ui->spoon->setText(tekst3);
                    ui->bigSpoon->setText(tekst4);
                    ui->glass->setText(tekst5);
                }
                if(ui->unit->currentText()=="szklanka")
                {
                    result1=ui->value->text().toInt()*250;
                    result2=ui->value->text().toInt()*250/1000;
                    result3=ui->value->text().toInt()*250/5;
                    result4=ui->value->text().toInt()*250/12;
                    result5=ui->value->text().toInt();


                    tekst1=QString::number(result1);
                    tekst2=QString::number(result2);
                    tekst3=QString::number(result3);
                    tekst4=QString::number(result4);
                    tekst5=QString::number(result5);
                    ui->ml->setText(tekst1);
                    ui->litr->setText(tekst2);
                    ui->spoon->setText(tekst3);
                    ui->bigSpoon->setText(tekst4);
                    ui->glass->setText(tekst5);

                }
            }
                 if(ui->product->currentText()=="sol")
                 {
                     if(ui->unit->currentText()=="g")
                     {
                         result6=ui->value->text().toInt();
                         result1=ui->value->text().toInt()/1000;
                        result2=ui->value->text().toInt()/10;
                         result3=ui->value->text().toInt()/5;
                         result4=ui->value->text().toInt()/12;
                         result5=ui->value->text().toInt()/220;
                         tekst1=QString::number(result6);
                         tekst2=QString::number(result1);
                         tekst3=QString::number(result2);
                         tekst4=QString::number(result3);
                         tekst5=QString::number(result4);
                         tekst6=QString::number(result5);
                         ui->gram->setText(tekst1);
                         ui->kg->setText(tekst2);
                         ui->dag->setText(tekst3);
                         ui->spoon->setText(tekst4);
                         ui->bigSpoon->setText(tekst5);
                         ui->glass->setText(tekst6);

                     }
                     if(ui->unit->currentText()=="dag")
                     {
                         result1=ui->value->text().toInt()*10;
                         result2=ui->value->text().toInt();
                        result3=ui->value->text().toInt()/10;
                         result4=ui->value->text().toInt()*10/5;
                         result5=ui->value->text().toInt()*10/12;
                         result6=ui->value->text().toInt()*10/220;
                         tekst1=QString::number(result6);
                         tekst2=QString::number(result1);
                         tekst3=QString::number(result2);
                         tekst4=QString::number(result3);
                         tekst5=QString::number(result4);
                         tekst6=QString::number(result5);
                         ui->gram->setText(tekst2);
                         ui->kg->setText(tekst4);
                         ui->dag->setText(tekst3);
                         ui->spoon->setText(tekst5);
                         ui->bigSpoon->setText(tekst6);
                         ui->glass->setText(tekst1);

                     }
                     if(ui->unit->currentText()=="kg")
                     {
                         result1=ui->value->text().toInt()*1000;
                         result2=ui->value->text().toInt();
                        result3=ui->value->text().toInt()/100;
                         result4=ui->value->text().toInt()*1000/5;
                         result5=ui->value->text().toInt()*1000/12;
                         result6=ui->value->text().toInt()*1000/220;
                         tekst1=QString::number(result6);
                         tekst2=QString::number(result1);
                         tekst3=QString::number(result2);
                         tekst4=QString::number(result3);
                         tekst5=QString::number(result4);
                         tekst6=QString::number(result5);
                         ui->gram->setText(tekst2);
                         ui->kg->setText(tekst3);
                         ui->dag->setText(tekst4);
                         ui->spoon->setText(tekst5);
                         ui->bigSpoon->setText(tekst6);
                         ui->glass->setText(tekst1);
                     }
                     if(ui->unit->currentText()=="lyzeczka")
                     {
                         result1=ui->value->text().toInt()*5;
                         result2=ui->value->text().toInt()*5/10;
                        result3=ui->value->text().toInt()*5/1000;
                         result4=ui->value->text().toInt();
                         result5=ui->value->text().toInt()*5/12;
                         result6=ui->value->text().toInt()*5/220;

                         tekst1=QString::number(result1);
                         tekst2=QString::number(result2);
                         tekst3=QString::number(result3);
                         tekst4=QString::number(result4);
                         tekst5=QString::number(result5);
                         tekst6=QString::number(result6);
                         ui->gram->setText(tekst1);
                         ui->kg->setText(tekst3);
                         ui->dag->setText(tekst2);
                         ui->spoon->setText(tekst4);
                         ui->bigSpoon->setText(tekst5);
                         ui->glass->setText(tekst6);
                     }
                     if(ui->unit->currentText()=="lyzka")
                     {
                         result1=ui->value->text().toInt()*12;
                         result2=ui->value->text().toInt()*12/10;
                        result3=ui->value->text().toInt()*12/1000;
                         result4=ui->value->text().toInt()*12/5;
                         result5=ui->value->text().toInt()*12/12;
                         result6=ui->value->text().toInt()*12/220;

                         tekst1=QString::number(result1);
                         tekst2=QString::number(result2);
                         tekst3=QString::number(result3);
                         tekst4=QString::number(result4);
                         tekst5=QString::number(result5);
                          tekst6=QString::number(result6);
                         ui->gram->setText(tekst1);
                         ui->kg->setText(tekst3);
                         ui->dag->setText(tekst2);
                         ui->spoon->setText(tekst4);
                         ui->bigSpoon->setText(tekst5);
                         ui->glass->setText(tekst6);
                     }
                     if(ui->unit->currentText()=="szklanka")
                     {result1=ui->value->text().toInt()*220;
                         result2=ui->value->text().toInt()*220/10;
                        result3=ui->value->text().toInt()*220/1000;
                         result4=ui->value->text().toInt()*220/5;
                         result5=ui->value->text().toInt()*220/12;
                         result6=ui->value->text().toInt();

                         tekst1=QString::number(result1);
                         tekst2=QString::number(result2);
                         tekst3=QString::number(result3);
                         tekst4=QString::number(result4);
                         tekst5=QString::number(result5);
                         tekst6=QString::number(result6);
                         ui->gram->setText(tekst1);
                         ui->kg->setText(tekst3);
                         ui->dag->setText(tekst2);
                         ui->spoon->setText(tekst4);
                         ui->bigSpoon->setText(tekst5);
                         ui->glass->setText(tekst6);

                     }
                 }
                     if(ui->product->currentText()=="pieprz")
                     {
                         if(ui->unit->currentText()=="g")
                         {
                             result6=ui->value->text().toInt();
                             result1=ui->value->text().toInt()/1000;
                            result2=ui->value->text().toInt()/10;
                             result3=ui->value->text().toInt()/5;
                             result4=ui->value->text().toInt()/12;
                             result5=ui->value->text().toInt()/220;
                             tekst1=QString::number(result6);
                             tekst2=QString::number(result1);
                             tekst3=QString::number(result2);
                             tekst4=QString::number(result3);
                             tekst5=QString::number(result4);
                             tekst6=QString::number(result5);
                             ui->gram->setText(tekst1);
                             ui->kg->setText(tekst2);
                             ui->dag->setText(tekst3);
                             ui->spoon->setText(tekst4);
                             ui->bigSpoon->setText(tekst5);
                             ui->glass->setText(tekst6);

                         }
                         if(ui->unit->currentText()=="dag")
                         {
                             result1=ui->value->text().toInt()*10;
                             result2=ui->value->text().toInt();
                            result3=ui->value->text().toInt()/10;
                             result4=ui->value->text().toInt()*10/5;
                             result5=ui->value->text().toInt()*10/12;
                             result6=ui->value->text().toInt()*10/220;
                             tekst1=QString::number(result6);
                             tekst2=QString::number(result1);
                             tekst3=QString::number(result2);
                             tekst4=QString::number(result3);
                             tekst5=QString::number(result4);
                             tekst6=QString::number(result5);
                             ui->gram->setText(tekst2);
                             ui->kg->setText(tekst4);
                             ui->dag->setText(tekst3);
                             ui->spoon->setText(tekst5);
                             ui->bigSpoon->setText(tekst6);
                             ui->glass->setText(tekst1);

                         }
                         if(ui->unit->currentText()=="kg")
                         {
                             result1=ui->value->text().toInt()*1000;
                             result2=ui->value->text().toInt();
                            result3=ui->value->text().toInt()/100;
                             result4=ui->value->text().toInt()*1000/5;
                             result5=ui->value->text().toInt()*1000/12;
                             result6=ui->value->text().toInt()*1000/220;
                             tekst1=QString::number(result6);
                             tekst2=QString::number(result1);
                             tekst3=QString::number(result2);
                             tekst4=QString::number(result3);
                             tekst5=QString::number(result4);
                             tekst6=QString::number(result5);
                             ui->gram->setText(tekst2);
                             ui->kg->setText(tekst3);
                             ui->dag->setText(tekst4);
                             ui->spoon->setText(tekst5);
                             ui->bigSpoon->setText(tekst6);
                             ui->glass->setText(tekst1);
                         }
                         if(ui->unit->currentText()=="lyzeczka")
                         {
                             result1=ui->value->text().toInt()*5;
                             result2=ui->value->text().toInt()*5/10;
                            result3=ui->value->text().toInt()*5/1000;
                             result4=ui->value->text().toInt();
                             result5=ui->value->text().toInt()*5/12;
                             result6=ui->value->text().toInt()*5/220;

                             tekst1=QString::number(result1);
                             tekst2=QString::number(result2);
                             tekst3=QString::number(result3);
                             tekst4=QString::number(result4);
                             tekst5=QString::number(result5);
                             tekst6=QString::number(result6);
                             ui->gram->setText(tekst1);
                             ui->kg->setText(tekst3);
                             ui->dag->setText(tekst2);
                             ui->spoon->setText(tekst4);
                             ui->bigSpoon->setText(tekst5);
                             ui->glass->setText(tekst6);
                         }
                         if(ui->unit->currentText()=="lyzka")
                         {
                             result1=ui->value->text().toInt()*12;
                             result2=ui->value->text().toInt()*12/10;
                            result3=ui->value->text().toInt()*12/1000;
                             result4=ui->value->text().toInt()*12/5;
                             result5=ui->value->text().toInt()*12/12;
                             result6=ui->value->text().toInt()*12/220;

                             tekst1=QString::number(result1);
                             tekst2=QString::number(result2);
                             tekst3=QString::number(result3);
                             tekst4=QString::number(result4);
                             tekst5=QString::number(result5);
                              tekst6=QString::number(result6);
                             ui->gram->setText(tekst1);
                             ui->kg->setText(tekst3);
                             ui->dag->setText(tekst2);
                             ui->spoon->setText(tekst4);
                             ui->bigSpoon->setText(tekst5);
                             ui->glass->setText(tekst6);
                         }
                         if(ui->unit->currentText()=="szklanka")
                         {
                             result1=ui->value->text().toInt()*220;
                             result2=ui->value->text().toInt()*220/10;
                            result3=ui->value->text().toInt()*220/1000;
                             result4=ui->value->text().toInt()*220/5;
                             result5=ui->value->text().toInt()*220/12;
                             result6=ui->value->text().toInt();

                             tekst1=QString::number(result1);
                             tekst2=QString::number(result2);
                             tekst3=QString::number(result3);
                             tekst4=QString::number(result4);
                             tekst5=QString::number(result5);
                             tekst6=QString::number(result6);
                             ui->gram->setText(tekst1);
                             ui->kg->setText(tekst3);
                             ui->dag->setText(tekst2);
                             ui->spoon->setText(tekst4);
                             ui->bigSpoon->setText(tekst5);
                             ui->glass->setText(tekst6);
                         }

                     }
}
