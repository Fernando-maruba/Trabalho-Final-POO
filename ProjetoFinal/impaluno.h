#ifndef IMPALUNO_H
#define IMPALUNO_H

#include <QDialog>

namespace Ui {
class ImpAluno;
}

class ImpAluno : public QDialog
{
    Q_OBJECT

public:
    explicit ImpAluno(QWidget *parent = nullptr);
    ~ImpAluno();

private:
    Ui::ImpAluno *ui;
};

#endif // IMPALUNO_H
