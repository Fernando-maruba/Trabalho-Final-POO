#ifndef ADICIONARFALTA_H
#define ADICIONARFALTA_H
#include <string>
#include <QDialog>
#include <Materia.h>

using namespace std;
namespace Ui {
class adicionarFalta;
}

class adicionarFalta : public QDialog
{
    Q_OBJECT

public:
    explicit adicionarFalta(QWidget *parent = nullptr);
    ~adicionarFalta();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::adicionarFalta *ui;
    Materia* materia;
    int contadorImpressao;
    int pos;
};

#endif // ADICIONARFALTA_H
