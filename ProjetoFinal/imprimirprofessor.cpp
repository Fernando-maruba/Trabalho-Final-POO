#include "imprimirprofessor.h"
#include "ui_imprimirprofessor.h"
#include "Sistema.h"
#include <QMessageBox>

imprimirProfessor::imprimirProfessor(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::imprimirProfessor)
{
    ui->setupUi(this);
}

imprimirProfessor::~imprimirProfessor()
{
    delete ui;
}

void imprimirProfessor::on_pushButton_clicked()
{
    Sistema sist("aluno", "materias", "professores");
    QString nome = ui->lineEdit->text();
    char nomeC[50];
    strcpy(nomeC, nome.toStdString().c_str());

    //Recebe o texto que deverá ser impresso de .imprimirProfessor
    //e utiliza a message box para mostrar-lo na tela.
    QString texto = QString::fromStdString(sist.imprimirProfessor(nomeC));
    QMessageBox::about(this, "Professor", texto);
    this->close();
}
