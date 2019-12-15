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

    //Transforma o QString capturada em char, para que esta possa ser utilizada nas classes
    //Arquivos em c++ não armazenam string ou QString
    strcpy(alunoC, aluno.toStdString().c_str());
    strcpy(materiaC, materia.toStdString().c_str());

    //Chama a função .adicionaCursante(), a qual retorna o resultado da operação (sucesso ou falha),
    //o qual sera mostrado em uma message box.
    QMessageBox::about(this, "Status", QString::fromStdString(sist.adicionaCursante(alunoC, materiaC)));
    this->close();
}
