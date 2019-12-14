#ifndef ADICIONARFALTA_H
#define ADICIONARFALTA_H
#include <string>
#include <QDialog>

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

private:
    Ui::adicionarFalta *ui;
};

#endif // ADICIONARFALTA_H
