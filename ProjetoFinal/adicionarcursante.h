#ifndef ADICIONARCURSANTE_H
#define ADICIONARCURSANTE_H

#include <QDialog>

namespace Ui {
class adicionarCursante;
}

class adicionarCursante : public QDialog
{
    Q_OBJECT

public:
    explicit adicionarCursante(QWidget *parent = nullptr);
    ~adicionarCursante();

private slots:
    void on_pushButton_clicked();

private:
    Ui::adicionarCursante *ui;
};

#endif // ADICIONARCURSANTE_H
