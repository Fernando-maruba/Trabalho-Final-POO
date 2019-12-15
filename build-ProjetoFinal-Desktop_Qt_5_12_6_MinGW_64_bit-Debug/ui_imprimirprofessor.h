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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_imprimirProfessor
{
public:
    QLabel *label;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;

    void setupUi(QDialog *imprimirProfessor)
    {
        if (imprimirProfessor->objectName().isEmpty())
            imprimirProfessor->setObjectName(QString::fromUtf8("imprimirProfessor"));
        imprimirProfessor->resize(491, 445);
        imprimirProfessor->setStyleSheet(QString::fromUtf8("background-color:#FFDFD3"));
        label = new QLabel(imprimirProfessor);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 20, 341, 20));
        QFont font;
        font.setBold(true);
        font.setUnderline(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("font-size:20px;"));
        label->setAlignment(Qt::AlignCenter);
        pushButton_2 = new QPushButton(imprimirProfessor);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(260, 330, 131, 41));
        pushButton_2->setStyleSheet(QString::fromUtf8("font-size:16px;\n"
"box-shadow: none;\n"
"background-color:#6CB2D1"));
        pushButton = new QPushButton(imprimirProfessor);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(100, 330, 131, 41));
        pushButton->setStyleSheet(QString::fromUtf8("font-size:16px;\n"
"box-shadow: none;\n"
"background-color:#6CB2D1"));
        horizontalLayoutWidget = new QWidget(imprimirProfessor);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(20, 80, 451, 211));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font-size:16px"));
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_2);

        lineEdit = new QLineEdit(horizontalLayoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setAutoFillBackground(false);
        lineEdit->setStyleSheet(QString::fromUtf8("background-color:white;"));

        horizontalLayout->addWidget(lineEdit);


        retranslateUi(imprimirProfessor);
        QObject::connect(pushButton_2, SIGNAL(clicked()), imprimirProfessor, SLOT(reject()));

        QMetaObject::connectSlotsByName(imprimirProfessor);
    } // setupUi

    void retranslateUi(QDialog *imprimirProfessor)
    {
        imprimirProfessor->setWindowTitle(QApplication::translate("imprimirProfessor", "Dialog", nullptr));
        label->setText(QApplication::translate("imprimirProfessor", "Dados de Professor", nullptr));
        pushButton_2->setText(QApplication::translate("imprimirProfessor", "Sair", nullptr));
        pushButton->setText(QApplication::translate("imprimirProfessor", "Procurar", nullptr));
        label_2->setText(QApplication::translate("imprimirProfessor", "Nome do professor:", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        lineEdit->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        lineEdit->setInputMask(QString());
        lineEdit->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class imprimirProfessor: public Ui_imprimirProfessor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMPRIMIRPROFESSOR_H
