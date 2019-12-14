#include "adicionarfalta.h"
#include "ui_adicionarfalta.h"
#include "Materia.h"
#include <fstream>
#include <iostream>

adicionarFalta::adicionarFalta(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::adicionarFalta)
{
    ui->setupUi(this);
}

adicionarFalta::~adicionarFalta()
{
    delete ui;
}

void adicionarFalta::on_pushButton_clicked()
{
}
