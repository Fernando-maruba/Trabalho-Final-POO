#include "cadastroprofessor.h"
#include "ui_cadastroprofessor.h"
#include "Sistema.h"
#include <QMessageBox>

cadastroProfessor::cadastroProfessor(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cadastroProfessor)
{
    ui->setupUi(this);
}

cadastroProfessor::~cadastroProfessor()
{
    delete ui;
}

void cadastroProfessor::on_pushButton_4_clicked()
{
    Sistema sist("aluno", "materias", "professores");
    QString nome = ui->lineEdit->text();
    QString idade = ui->lineEdit_2->text();
    QString identificacao = ui->lineEdit_3->text();
    QString especialidade = ui->lineEdit_4->text();
    char nomeC[50];
    char especialidadeC[50];
    strcpy(nomeC, nome.toStdString().c_str());
    strcpy(especialidadeC, especialidade.toStdString().c_str());

    //Chama a função .adicionaProfessor(), a qual retorna o resultado da operação (sucesso ou falha),
    //o qual sera mostrado em uma message box.
    QMessageBox::about(this, "Status", QString::fromStdString(sist.adicionaProfessor(nomeC, idade.toInt(), identificacao.toInt(), especialidadeC)));
    this->close();
}
