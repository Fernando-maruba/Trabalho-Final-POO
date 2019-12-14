#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "cadastroaluno.h"
#include "imprimiraluno.h"
#include "cadastroprofessor.h"
#include "imprimirprofessor.h"
#include "cadastromateria.h"
#include "imprimirmateria.h"
#include "adicionarcursante.h"
#include "adicionarministrante.h"
#include "adicionarfalta.h"
#include "Sistema.h"


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
    cadastroAluno form2;
    form2.exec();

}

void MainWindow::on_pushButton_6_clicked()
{

}

void MainWindow::on_pushButton_4_clicked()
{
    imprimirAluno form3;
    form3.exec();
}

void MainWindow::on_pushButton_2_clicked()
{
    cadastroProfessor form4;
    form4.exec();
}

void MainWindow::on_pushButton_5_clicked()
{
    imprimirProfessor form5;
    form5.exec();
}

void MainWindow::on_pushButton_9_clicked()
{
    cadastroMateria form6;
    form6.exec();
}

void MainWindow::on_pushButton_10_clicked()
{
    imprimirMateria form7;
    form7.exec();
}

void MainWindow::on_pushButton_3_clicked()
{
    adicionarCursante form8;
    form8.exec();
}

void MainWindow::on_pushButton_8_clicked()
{
    adicionarMinistrante form9;
    form9.exec();
}

void MainWindow::on_pushButton_7_clicked()
{
    adicionarFalta form10;
    form10.exec();
}
