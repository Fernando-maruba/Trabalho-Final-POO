/********************************************************************************
** Form generated from reading UI file 'cadastromateria.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CADASTROMATERIA_H
#define UI_CADASTROMATERIA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cadastroMateria
{
public:
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_6;
    QLineEdit *lineEdit_5;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;

    void setupUi(QDialog *cadastroMateria)
    {
        if (cadastroMateria->objectName().isEmpty())
            cadastroMateria->setObjectName(QString::fromUtf8("cadastroMateria"));
        cadastroMateria->resize(660, 424);
        layoutWidget_2 = new QWidget(cadastroMateria);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(170, 80, 351, 231));
        verticalLayout_4 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_6 = new QLabel(layoutWidget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_6);


        verticalLayout_4->addLayout(verticalLayout_3);

        lineEdit_5 = new QLineEdit(layoutWidget_2);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setAutoFillBackground(false);

        verticalLayout_4->addWidget(lineEdit_5);

        pushButton = new QPushButton(layoutWidget_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout_4->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout_4->addWidget(pushButton_2);

        label = new QLabel(cadastroMateria);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(180, 30, 341, 20));
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(cadastroMateria);
        QObject::connect(pushButton_2, SIGNAL(clicked()), cadastroMateria, SLOT(reject()));

        QMetaObject::connectSlotsByName(cadastroMateria);
    } // setupUi

    void retranslateUi(QDialog *cadastroMateria)
    {
        cadastroMateria->setWindowTitle(QApplication::translate("cadastroMateria", "Dialog", nullptr));
        label_6->setText(QApplication::translate("cadastroMateria", "Nome da Materia", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        lineEdit_5->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        lineEdit_5->setInputMask(QString());
        lineEdit_5->setText(QString());
        pushButton->setText(QApplication::translate("cadastroMateria", "Cadastrar", nullptr));
        pushButton_2->setText(QApplication::translate("cadastroMateria", "Cancelar", nullptr));
        label->setText(QApplication::translate("cadastroMateria", "Cadastro de Materia", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cadastroMateria: public Ui_cadastroMateria {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CADASTROMATERIA_H
