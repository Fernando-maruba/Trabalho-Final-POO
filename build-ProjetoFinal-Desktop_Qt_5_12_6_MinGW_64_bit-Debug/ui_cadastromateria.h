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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cadastroMateria
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_6;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *lineEdit_5;

    void setupUi(QDialog *cadastroMateria)
    {
        if (cadastroMateria->objectName().isEmpty())
            cadastroMateria->setObjectName(QString::fromUtf8("cadastroMateria"));
        cadastroMateria->resize(491, 445);
        cadastroMateria->setStyleSheet(QString::fromUtf8("background-color:#FFDFD3"));
        label = new QLabel(cadastroMateria);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 20, 341, 20));
        QFont font;
        font.setBold(true);
        font.setUnderline(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("font-size:20px;"));
        label->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(cadastroMateria);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(100, 330, 131, 41));
        pushButton->setStyleSheet(QString::fromUtf8("font-size:16px;\n"
"background-color:#6CB2D1"));
        pushButton_2 = new QPushButton(cadastroMateria);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(260, 330, 131, 41));
        pushButton_2->setStyleSheet(QString::fromUtf8("font-size:16px;\n"
"background-color:#6CB2D1"));
        horizontalLayoutWidget = new QWidget(cadastroMateria);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(20, 80, 441, 231));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(horizontalLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setStyleSheet(QString::fromUtf8("font-size:16px;"));
        label_6->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_6);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        lineEdit_5 = new QLineEdit(horizontalLayoutWidget);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setAutoFillBackground(false);
        lineEdit_5->setStyleSheet(QString::fromUtf8("background-color:white;\n"
""));

        verticalLayout_4->addWidget(lineEdit_5);


        horizontalLayout->addLayout(verticalLayout_4);


        retranslateUi(cadastroMateria);
        QObject::connect(pushButton_2, SIGNAL(clicked()), cadastroMateria, SLOT(reject()));

        pushButton->setDefault(true);


        QMetaObject::connectSlotsByName(cadastroMateria);
    } // setupUi

    void retranslateUi(QDialog *cadastroMateria)
    {
        cadastroMateria->setWindowTitle(QApplication::translate("cadastroMateria", "Dialog", nullptr));
        label->setText(QApplication::translate("cadastroMateria", "Cadastro de Mat\303\251ria", nullptr));
        pushButton->setText(QApplication::translate("cadastroMateria", "Cadastrar", nullptr));
        pushButton_2->setText(QApplication::translate("cadastroMateria", "Cancelar", nullptr));
        label_6->setText(QApplication::translate("cadastroMateria", "Nome da Mat\303\251ria:", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        lineEdit_5->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        lineEdit_5->setInputMask(QString());
        lineEdit_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class cadastroMateria: public Ui_cadastroMateria {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CADASTROMATERIA_H
