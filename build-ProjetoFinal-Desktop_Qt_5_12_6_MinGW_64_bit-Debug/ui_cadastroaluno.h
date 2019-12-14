/********************************************************************************
** Form generated from reading UI file 'cadastroaluno.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CADASTROALUNO_H
#define UI_CADASTROALUNO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cadastroAluno
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLabel *label;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;

    void setupUi(QDialog *cadastroAluno)
    {
        if (cadastroAluno->objectName().isEmpty())
            cadastroAluno->setObjectName(QString::fromUtf8("cadastroAluno"));
        cadastroAluno->resize(659, 469);
        cadastroAluno->setMaximumSize(QSize(704, 469));
        pushButton = new QPushButton(cadastroAluno);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(180, 320, 93, 28));
        pushButton_2 = new QPushButton(cadastroAluno);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(370, 320, 93, 28));
        widget = new QWidget(cadastroAluno);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(160, 80, 351, 231));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setAutoFillBackground(false);

        verticalLayout->addWidget(lineEdit);

        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        verticalLayout->addWidget(lineEdit_2);

        lineEdit_3 = new QLineEdit(widget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        verticalLayout->addWidget(lineEdit_3);

        lineEdit_4 = new QLineEdit(widget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        verticalLayout->addWidget(lineEdit_4);

        label = new QLabel(cadastroAluno);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(170, 30, 341, 20));
        label->setAlignment(Qt::AlignCenter);
        widget1 = new QWidget(cadastroAluno);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(100, 90, 58, 201));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_2);

        label_3 = new QLabel(widget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_3);

        label_4 = new QLabel(widget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_4);

        label_5 = new QLabel(widget1);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_5);


        retranslateUi(cadastroAluno);
        QObject::connect(pushButton_2, SIGNAL(clicked()), cadastroAluno, SLOT(reject()));

        QMetaObject::connectSlotsByName(cadastroAluno);
    } // setupUi

    void retranslateUi(QDialog *cadastroAluno)
    {
        cadastroAluno->setWindowTitle(QApplication::translate("cadastroAluno", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("cadastroAluno", "Cadastrar", nullptr));
        pushButton_2->setText(QApplication::translate("cadastroAluno", "Cancelar", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        lineEdit->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        lineEdit->setInputMask(QString());
        lineEdit->setText(QString());
        label->setText(QApplication::translate("cadastroAluno", "Cadastro de Aluno", nullptr));
        label_2->setText(QApplication::translate("cadastroAluno", "Nome", nullptr));
        label_3->setText(QApplication::translate("cadastroAluno", "Idade", nullptr));
        label_4->setText(QApplication::translate("cadastroAluno", "RA", nullptr));
        label_5->setText(QApplication::translate("cadastroAluno", "Curso", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cadastroAluno: public Ui_cadastroAluno {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CADASTROALUNO_H
