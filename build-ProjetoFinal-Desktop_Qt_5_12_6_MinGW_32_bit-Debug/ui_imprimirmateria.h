/********************************************************************************
** Form generated from reading UI file 'imprimirmateria.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMPRIMIRMATERIA_H
#define UI_IMPRIMIRMATERIA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_imprimirMateria
{
public:
    QLabel *label;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QDialog *imprimirMateria)
    {
        if (imprimirMateria->objectName().isEmpty())
            imprimirMateria->setObjectName(QString::fromUtf8("imprimirMateria"));
        imprimirMateria->resize(585, 391);
        label = new QLabel(imprimirMateria);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 50, 341, 20));
        label->setAlignment(Qt::AlignCenter);
        layoutWidget_2 = new QWidget(imprimirMateria);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(110, 160, 351, 46));
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

        pushButton_2 = new QPushButton(imprimirMateria);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(320, 220, 93, 28));
        pushButton = new QPushButton(imprimirMateria);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(150, 220, 93, 28));

        retranslateUi(imprimirMateria);
        QObject::connect(pushButton_2, SIGNAL(clicked()), imprimirMateria, SLOT(reject()));

        QMetaObject::connectSlotsByName(imprimirMateria);
    } // setupUi

    void retranslateUi(QDialog *imprimirMateria)
    {
        imprimirMateria->setWindowTitle(QApplication::translate("imprimirMateria", "Dialog", nullptr));
        label->setText(QApplication::translate("imprimirMateria", "Procurar por uma materia", nullptr));
        label_2->setText(QApplication::translate("imprimirMateria", "Nome da materia", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        lineEdit->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        lineEdit->setInputMask(QString());
        lineEdit->setText(QString());
        pushButton_2->setText(QApplication::translate("imprimirMateria", "Sair", nullptr));
        pushButton->setText(QApplication::translate("imprimirMateria", "Procurar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class imprimirMateria: public Ui_imprimirMateria {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMPRIMIRMATERIA_H
