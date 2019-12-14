#include "adicionarministrante.h"
#include "ui_adicionarministrante.h"
#include "Sistema.h"
#include <QMessageBox>

adicionarMinistrante::adicionarMinistrante(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::adicionarMinistrante)
{
    ui->setupUi(this);
}

adicionarMinistrante::~adicionarMinistrante()
{
    delete ui;
}

void adicionarMinistrante::on_pushButton_clicked()
{
    Sistema sist("aluno", "materias", "professores");
    QString professor = ui->lineEdit->text();
    QString materia = ui->lineEdit_2->text();
    char professorC[50];
    char materiaC[50];
    strcpy(professorC, professor.toStdString().c_str());
    strcpy(materiaC, materia.toStdString().c_str());
    QMessageBox::about(this, "Status", QString::fromStdString(sist.adicionaMinistrante(professorC, materiaC)));
}
