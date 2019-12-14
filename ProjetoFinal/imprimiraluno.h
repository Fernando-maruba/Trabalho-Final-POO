#ifndef IMPRIMIRALUNO_H
#define IMPRIMIRALUNO_H

#include <QDialog>

namespace Ui {
class imprimirAluno;
}

class imprimirAluno : public QDialog
{
    Q_OBJECT

public:
    explicit imprimirAluno(QWidget *parent = nullptr);
    ~imprimirAluno();

private slots:
    void on_pushButton_clicked();

private:
    Ui::imprimirAluno *ui;
};

#endif // IMPRIMIRALUNO_H
