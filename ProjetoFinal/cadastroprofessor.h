#ifndef CADASTROPROFESSOR_H
#define CADASTROPROFESSOR_H

#include <QDialog>

namespace Ui {
class cadastroProfessor;
}

class cadastroProfessor : public QDialog
{
    Q_OBJECT

public:
    explicit cadastroProfessor(QWidget *parent = nullptr);
    ~cadastroProfessor();

private slots:
    void on_pushButton_4_clicked();

private:
    Ui::cadastroProfessor *ui;
};

#endif // CADASTROPROFESSOR_H
