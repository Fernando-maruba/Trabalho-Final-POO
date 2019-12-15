#include "telamaterias.h"
#include "ui_telamaterias.h"
#include "adicionarcursante.h"
#include "adicionarministrante.h"

telaMaterias::telaMaterias(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::telaMaterias)
{
    ui->setupUi(this);
}

telaMaterias::~telaMaterias()
{
    delete ui;
}

void telaMaterias::on_pushButton_clicked()
{
    adicionarCursante form1;
    form1.exec();
}

void telaMaterias::on_pushButton_2_clicked()
{
    adicionarMinistrante form2;
    form2.exec();
}
