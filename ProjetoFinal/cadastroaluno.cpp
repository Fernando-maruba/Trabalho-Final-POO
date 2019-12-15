#include "cadastroaluno.h"
#include "ui_cadastroaluno.h"
#include "Sistema.h"
#include <string>
#include <QString>
#include <QMessageBox>

cadastroAluno::cadastroAluno(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cadastroAluno)
{
    ui->setupUi(this);

    connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(close()));
}

cadastroAluno::~cadastroAluno()
{
    delete ui;
}

void cadastroAluno::on_pushButton_clicked()
{
    Sistema sist("aluno", "materias", "professores");
    QString nome = ui->lineEdit->text();
    QString idade = ui->lineEdit_2->text();
    QString ra = ui->lineEdit_3->text();
    QString curso = ui->lineEdit_4->text();
    char nomeC[50];
    char cursoC[50];
    strcpy(nomeC, nome.toStdString().c_str());
    strcpy(cursoC, curso.toStdString().c_str());

    //Chama a função .adicionaAluno(), a qual retorna o resultado da operação (sucesso ou falha),
    //o qual sera mostrado em uma message box.
    QMessageBox::about(this, "Status", QString::fromStdString(sist.adicionaAluno(nomeC, idade.toInt(), ra.toInt(), cursoC)));
    this->close();
}
