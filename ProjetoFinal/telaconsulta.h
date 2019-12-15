#ifndef TELACONSULTA_H
#define TELACONSULTA_H

#include <QDialog>

namespace Ui {
class telaConsulta;
}

class telaConsulta : public QDialog
{
    Q_OBJECT

public:
    explicit telaConsulta(QWidget *parent = nullptr);
    ~telaConsulta();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::telaConsulta *ui;
};

#endif // TELACONSULTA_H
