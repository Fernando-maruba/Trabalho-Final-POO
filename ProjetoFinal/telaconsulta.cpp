#include "telaconsulta.h"
#include "ui_telaconsulta.h"
#include "imprimiraluno.h"
#include "imprimirprofessor.h"
#include "imprimirmateria.h"

telaConsulta::telaConsulta(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::telaConsulta)
{
    ui->setupUi(this);
}

telaConsulta::~telaConsulta()
{
    delete ui;
}

void telaConsulta::on_pushButton_clicked()
{
    imprimirAluno form1;
    form1.exec();
}

void telaConsulta::on_pushButton_2_clicked()
{
    imprimirProfessor form2;
    form2.exec();
}

void telaConsulta::on_pushButton_3_clicked()
{
    imprimirMateria form3;
    form3.exec();
}
