#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "adicionarfalta.h"
#include "telacadastros.h"
#include "telamaterias.h"
#include "telaconsulta.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_clicked()
{
    telaCadastros form1;
    form1.exec();
}

void MainWindow::on_pushButton_2_clicked()
{
    telaMaterias form2;
    form2.exec();
}

void MainWindow::on_pushButton_3_clicked()
{
    telaConsulta form3;
    form3.exec();
}

void MainWindow::on_pushButton_4_clicked()
{
    adicionarFalta form4;
    form4.exec();
}
