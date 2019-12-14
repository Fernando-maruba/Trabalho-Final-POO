#include "impaluno.h"
#include "ui_impaluno.h"

ImpAluno::ImpAluno(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ImpAluno)
{
    ui->setupUi(this);
}

ImpAluno::~ImpAluno()
{
    delete ui;
}
