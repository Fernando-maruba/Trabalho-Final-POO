#ifndef IMPRIMIRMATERIA_H
#define IMPRIMIRMATERIA_H

#include <QDialog>

namespace Ui {
class imprimirMateria;
}

class imprimirMateria : public QDialog
{
    Q_OBJECT

public:
    explicit imprimirMateria(QWidget *parent = nullptr);
    ~imprimirMateria();

private slots:
    void on_pushButton_clicked();

private:
    Ui::imprimirMateria *ui;
};

#endif // IMPRIMIRMATERIA_H
