/********************************************************************************
** Form generated from reading UI file 'adicionarfalta.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADICIONARFALTA_H
#define UI_ADICIONARFALTA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_adicionarFalta
{
public:
    QLabel *label;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit_5;
    QLabel *label_6;

    void setupUi(QDialog *adicionarFalta)
    {
        if (adicionarFalta->objectName().isEmpty())
            adicionarFalta->setObjectName(QString::fromUtf8("adicionarFalta"));
        adicionarFalta->setEnabled(true);
        adicionarFalta->resize(726, 453);
        label = new QLabel(adicionarFalta);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(210, 30, 341, 20));
        label->setAlignment(Qt::AlignCenter);
        pushButton_3 = new QPushButton(adicionarFalta);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setEnabled(true);
        pushButton_3->setGeometry(QRect(230, 200, 321, 28));
        pushButton_3->setInputMethodHints(Qt::ImhNone);
        pushButton = new QPushButton(adicionarFalta);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(230, 200, 321, 28));
        pushButton->setFlat(false);
        pushButton_2 = new QPushButton(adicionarFalta);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(232, 240, 321, 28));
        lineEdit_5 = new QLineEdit(adicionarFalta);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(226, 130, 331, 31));
        lineEdit_5->setAutoFillBackground(false);
        label_6 = new QLabel(adicionarFalta);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(330, 80, 99, 16));
        label_6->setAlignment(Qt::AlignCenter);

        retranslateUi(adicionarFalta);
        QObject::connect(pushButton_2, SIGNAL(clicked()), adicionarFalta, SLOT(close()));
        QObject::connect(pushButton, SIGNAL(clicked()), pushButton, SLOT(close()));

        pushButton->setDefault(false);


        QMetaObject::connectSlotsByName(adicionarFalta);
    } // setupUi

    void retranslateUi(QDialog *adicionarFalta)
    {
        adicionarFalta->setWindowTitle(QApplication::translate("adicionarFalta", "Dialog", nullptr));
        label->setText(QApplication::translate("adicionarFalta", "Chamada", nullptr));
        pushButton_3->setText(QApplication::translate("adicionarFalta", "Acrescentar falta", nullptr));
        pushButton->setText(QApplication::translate("adicionarFalta", "Fazer Chamada", nullptr));
        pushButton_2->setText(QApplication::translate("adicionarFalta", "Cancelar", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        lineEdit_5->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        lineEdit_5->setInputMask(QString());
        lineEdit_5->setText(QString());
        label_6->setText(QApplication::translate("adicionarFalta", "Nome da Materia", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adicionarFalta: public Ui_adicionarFalta {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADICIONARFALTA_H
