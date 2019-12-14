#ifndef IMPRIMIRPROFESSOR_H
#define IMPRIMIRPROFESSOR_H

#include <QDialog>

namespace Ui {
class imprimirProfessor;
}

class imprimirProfessor : public QDialog
{
    Q_OBJECT

public:
    explicit imprimirProfessor(QWidget *parent = nullptr);
    ~imprimirProfessor();

private slots:
    void on_pushButton_clicked();

private:
    Ui::imprimirProfessor *ui;
};

#endif // IMPRIMIRPROFESSOR_H
