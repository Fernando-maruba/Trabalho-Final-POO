#include "imprimirmateria.h"
#include "ui_imprimirmateria.h"
#include "Sistema.h"
#include <QMessageBox>

imprimirMateria::imprimirMateria(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::imprimirMateria)
{
    ui->setupUi(this);
}

imprimirMateria::~imprimirMateria()
{
    delete ui;
}

void imprimirMateria::on_pushButton_clicked()
{
    Sistema sist("aluno", "materias", "professores");
    QString nome = ui->lineEdit->text();
    char nomeC[50];
    strcpy(nomeC, nome.toStdString().c_str());

    //Recebe o texto que deverá ser impresso de .imprimirMateria
    //e utiliza a message box para mostrar-lo na tela.
    QString texto = QString::fromStdString(sist.imprimirMateria(nomeC));
    QMessageBox::about(this, "Materia", texto);
    this->close();
}
