#include "adicionarcursante.h"
#include "ui_adicionarcursante.h"
#include <Sistema.h>
#include <QMessageBox>

adicionarCursante::adicionarCursante(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::adicionarCursante)
{
    ui->setupUi(this);
}

adicionarCursante::~adicionarCursante()
{
    delete ui;
}

void adicionarCursante::on_pushButton_clicked()
{
    Sistema sist("aluno", "materias", "professores");
    QString aluno = ui->lineEdit->text();
    QString materia = ui->lineEdit_2->text();
    char alunoC[50];
    char materiaC[50];
    strcpy(alunoC, aluno.toStdString().c_str());
    strcpy(materiaC, materia.toStdString().c_str());
    QMessageBox::about(this, "Status", QString::fromStdString(sist.adicionaCursante(alunoC, materiaC)));
}
