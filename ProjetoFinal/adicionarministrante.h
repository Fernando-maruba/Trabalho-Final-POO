#ifndef ADICIONARMINISTRANTE_H
#define ADICIONARMINISTRANTE_H

#include <QDialog>

namespace Ui {
class adicionarMinistrante;
}

class adicionarMinistrante : public QDialog
{
    Q_OBJECT

public:
    explicit adicionarMinistrante(QWidget *parent = nullptr);
    ~adicionarMinistrante();

private slots:
    void on_pushButton_clicked();

private:
    Ui::adicionarMinistrante *ui;
};

#endif // ADICIONARMINISTRANTE_H
