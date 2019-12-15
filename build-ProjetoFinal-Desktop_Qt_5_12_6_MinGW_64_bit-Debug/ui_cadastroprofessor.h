/********************************************************************************
** Form generated from reading UI file 'cadastroprofessor.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CADASTROPROFESSOR_H
#define UI_CADASTROPROFESSOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cadastroProfessor
{
public:
    QPushButton *pushButton_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *pushButton;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLabel *label;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QDialog *cadastroProfessor)
    {
        if (cadastroProfessor->objectName().isEmpty())
            cadastroProfessor->setObjectName(QString::fromUtf8("cadastroProfessor"));
        cadastroProfessor->resize(491, 445);
        cadastroProfessor->setStyleSheet(QString::fromUtf8("background-color:#FFDFD3"));
        pushButton_2 = new QPushButton(cadastroProfessor);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(610, 500, 93, 28));
        layoutWidget = new QWidget(cadastroProfessor);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 100, 103, 201));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font-size:16px;\n"
""));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("font-size:16px;\n"
""));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_3);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("font-size:16px;\n"
""));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_4);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setStyleSheet(QString::fromUtf8("font-size:16px;\n"
""));
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_5);

        pushButton = new QPushButton(cadastroProfessor);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(420, 500, 93, 28));
        layoutWidget_2 = new QWidget(cadastroProfessor);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(110, 90, 351, 231));
        verticalLayout = new QVBoxLayout(layoutWidget_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(layoutWidget_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setAutoFillBackground(false);
        lineEdit->setStyleSheet(QString::fromUtf8("background-color:white;"));

        verticalLayout->addWidget(lineEdit);

        lineEdit_2 = new QLineEdit(layoutWidget_2);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setStyleSheet(QString::fromUtf8("background-color:white;"));

        verticalLayout->addWidget(lineEdit_2);

        lineEdit_3 = new QLineEdit(layoutWidget_2);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setStyleSheet(QString::fromUtf8("background-color:white;\n"
""));

        verticalLayout->addWidget(lineEdit_3);

        lineEdit_4 = new QLineEdit(layoutWidget_2);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setStyleSheet(QString::fromUtf8("background-color:white;"));

        verticalLayout->addWidget(lineEdit_4);

        label = new QLabel(cadastroProfessor);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 20, 371, 20));
        QFont font;
        font.setBold(true);
        font.setUnderline(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("background-color:none;\n"
"font-size:20px;\n"
""));
        label->setAlignment(Qt::AlignCenter);
        pushButton_3 = new QPushButton(cadastroProfessor);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(260, 340, 131, 41));
        pushButton_3->setStyleSheet(QString::fromUtf8("font-size:16px;\n"
"background-color:#6CB2D1"));
        pushButton_4 = new QPushButton(cadastroProfessor);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(100, 340, 131, 41));
        pushButton_4->setStyleSheet(QString::fromUtf8("font-size:16px;\n"
"background-color:#6CB2D1"));

        retranslateUi(cadastroProfessor);
        QObject::connect(pushButton_3, SIGNAL(clicked()), cadastroProfessor, SLOT(reject()));

        pushButton_4->setDefault(true);


        QMetaObject::connectSlotsByName(cadastroProfessor);
    } // setupUi

    void retranslateUi(QDialog *cadastroProfessor)
    {
        cadastroProfessor->setWindowTitle(QApplication::translate("cadastroProfessor", "Dialog", nullptr));
        pushButton_2->setText(QApplication::translate("cadastroProfessor", "Cancelar", nullptr));
        label_2->setText(QApplication::translate("cadastroProfessor", "Nome:", nullptr));
        label_3->setText(QApplication::translate("cadastroProfessor", "Idade:", nullptr));
        label_4->setText(QApplication::translate("cadastroProfessor", "Identifica\303\247\303\243o:", nullptr));
        label_5->setText(QApplication::translate("cadastroProfessor", "Especialidade:", nullptr));
        pushButton->setText(QApplication::translate("cadastroProfessor", "Cadastrar", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        lineEdit->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        lineEdit->setInputMask(QString());
        lineEdit->setText(QString());
        label->setText(QApplication::translate("cadastroProfessor", "Cadastro de Professor", nullptr));
        pushButton_3->setText(QApplication::translate("cadastroProfessor", "Cancelar", nullptr));
        pushButton_4->setText(QApplication::translate("cadastroProfessor", "Cadastrar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cadastroProfessor: public Ui_cadastroProfessor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CADASTROPROFESSOR_H
