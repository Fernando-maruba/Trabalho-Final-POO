/********************************************************************************
** Form generated from reading UI file 'imprimiraluno.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMPRIMIRALUNO_H
#define UI_IMPRIMIRALUNO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_imprimirAluno
{
public:
    QPushButton *pushButton_2;
    QLabel *label;
    QPushButton *pushButton;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;

    void setupUi(QDialog *imprimirAluno)
    {
        if (imprimirAluno->objectName().isEmpty())
            imprimirAluno->setObjectName(QString::fromUtf8("imprimirAluno"));
        imprimirAluno->resize(610, 442);
        pushButton_2 = new QPushButton(imprimirAluno);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(340, 200, 93, 28));
        label = new QLabel(imprimirAluno);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, 30, 341, 20));
        label->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(imprimirAluno);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(170, 200, 93, 28));
        layoutWidget_2 = new QWidget(imprimirAluno);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(130, 140, 351, 46));
        verticalLayout = new QVBoxLayout(layoutWidget_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        lineEdit = new QLineEdit(layoutWidget_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setAutoFillBackground(false);

        verticalLayout->addWidget(lineEdit);


        retranslateUi(imprimirAluno);
        QObject::connect(pushButton_2, SIGNAL(clicked()), imprimirAluno, SLOT(reject()));

        QMetaObject::connectSlotsByName(imprimirAluno);
    } // setupUi

    void retranslateUi(QDialog *imprimirAluno)
    {
        imprimirAluno->setWindowTitle(QApplication::translate("imprimirAluno", "Dialog", nullptr));
        pushButton_2->setText(QApplication::translate("imprimirAluno", "Cancelar", nullptr));
        label->setText(QApplication::translate("imprimirAluno", "Procurar por um aluno", nullptr));
        pushButton->setText(QApplication::translate("imprimirAluno", "Procurar", nullptr));
        label_2->setText(QApplication::translate("imprimirAluno", "Nome do aluno", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        lineEdit->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        lineEdit->setInputMask(QString());
        lineEdit->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class imprimirAluno: public Ui_imprimirAluno {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMPRIMIRALUNO_H
