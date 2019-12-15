#ifndef TELAMATERIAS_H
#define TELAMATERIAS_H

#include <QDialog>

namespace Ui {
class telaMaterias;
}

class telaMaterias : public QDialog
{
    Q_OBJECT

public:
    explicit telaMaterias(QWidget *parent = nullptr);
    ~telaMaterias();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::telaMaterias *ui;
};

#endif // TELAMATERIAS_H
