#ifndef CADASTROALUNO_H
#define CADASTROALUNO_H

#include <QDialog>

namespace Ui {
class cadastroAluno;
}

class cadastroAluno : public QDialog
{
    Q_OBJECT

public:
    explicit cadastroAluno(QWidget *parent = nullptr);
    ~cadastroAluno();

private slots:
    void on_pushButton_clicked();

private:
    Ui::cadastroAluno *ui;
};

#endif // CADASTROALUNO_H
