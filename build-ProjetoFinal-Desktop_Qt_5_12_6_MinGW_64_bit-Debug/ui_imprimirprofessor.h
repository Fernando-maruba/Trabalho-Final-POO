/********************************************************************************
** Form generated from reading UI file 'imprimirprofessor.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMPRIMIRPROFESSOR_H
#define UI_IMPRIMIRPROFESSOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_imprimirProfessor
{
public:
    QLabel *label;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QDialog *imprimirProfessor)
    {
        if (imprimirProfessor->objectName().isEmpty())
            imprimirProfessor->setObjectName(QString::fromUtf8("imprimirProfessor"));
        imprimirProfessor->resize(625, 425);
        label = new QLabel(imprimirProfessor);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(140, 50, 341, 20));
        label->setAlignment(Qt::AlignCenter);
        layoutWidget_2 = new QWidget(imprimirProfessor);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(140, 160, 351, 46));
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

        pushButton_2 = new QPushButton(imprimirProfessor);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(350, 220, 93, 28));
        pushButton = new QPushButton(imprimirProfessor);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(180, 220, 93, 28));

        retranslateUi(imprimirProfessor);
        QObject::connect(pushButton_2, SIGNAL(clicked()), imprimirProfessor, SLOT(reject()));

        QMetaObject::connectSlotsByName(imprimirProfessor);
    } // setupUi

    void retranslateUi(QDialog *imprimirProfessor)
    {
        imprimirProfessor->setWindowTitle(QApplication::translate("imprimirProfessor", "Dialog", nullptr));
        label->setText(QApplication::translate("imprimirProfessor", "Procurar por um aluno", nullptr));
        label_2->setText(QApplication::translate("imprimirProfessor", "Nome do professor", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        lineEdit->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        lineEdit->setInputMask(QString());
        lineEdit->setText(QString());
        pushButton_2->setText(QApplication::translate("imprimirProfessor", "Sair", nullptr));
        pushButton->setText(QApplication::translate("imprimirProfessor", "Procurar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class imprimirProfessor: public Ui_imprimirProfessor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMPRIMIRPROFESSOR_H
