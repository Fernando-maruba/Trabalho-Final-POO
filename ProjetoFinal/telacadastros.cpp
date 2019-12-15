#include "telacadastros.h"
#include "ui_telacadastros.h"
#include "cadastroaluno.h"
#include "cadastroprofessor.h"
#include "cadastromateria.h"

telaCadastros::telaCadastros(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::telaCadastros)
{
    ui->setupUi(this);
}

telaCadastros::~telaCadastros()
{
    delete ui;
}

void telaCadastros::on_pushButton_clicked()
{
    cadastroAluno form1;
    form1.exec();
}

void telaCadastros::on_pushButton_2_clicked()
{
    cadastroProfessor form3;
    form3.exec();
}

void telaCadastros::on_pushButton_3_clicked()
{
    cadastroMateria form2;
    form2.exec();
}
