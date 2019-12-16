#ifndef TELACADASTROS_H
#define TELACADASTROS_H

#include <QDialog>

namespace Ui {
class telaCadastros;
}

class telaCadastros : public QDialog
{
    Q_OBJECT

public:
    explicit telaCadastros(QWidget *parent = nullptr);
    ~telaCadastros();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::telaCadastros *ui;
};

#endif // TELACADASTROS_H
