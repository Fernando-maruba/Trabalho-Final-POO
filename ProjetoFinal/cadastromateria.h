#ifndef CADASTROMATERIA_H
#define CADASTROMATERIA_H

#include <QDialog>

namespace Ui {
class cadastroMateria;
}

class cadastroMateria : public QDialog
{
    Q_OBJECT

public:
    explicit cadastroMateria(QWidget *parent = nullptr);
    ~cadastroMateria();

private slots:
    void on_pushButton_clicked();

private:
    Ui::cadastroMateria *ui;
};

#endif // CADASTROMATERIA_H
