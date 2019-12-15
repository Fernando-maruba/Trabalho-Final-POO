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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_imprimirMateria
{
public:
    QLabel *label;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;

    void setupUi(QDialog *imprimirMateria)
    {
        if (imprimirMateria->objectName().isEmpty())
            imprimirMateria->setObjectName(QString::fromUtf8("imprimirMateria"));
        imprimirMateria->resize(491, 445);
        imprimirMateria->setStyleSheet(QString::fromUtf8("background-color:#FFDFD3"));
        label = new QLabel(imprimirMateria);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 20, 341, 20));
        QFont font;
        font.setBold(true);
        font.setUnderline(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("font-size:20px;\n"
""));
        label->setAlignment(Qt::AlignCenter);
        pushButton_2 = new QPushButton(imprimirMateria);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(260, 330, 131, 41));
        pushButton_2->setStyleSheet(QString::fromUtf8("font-size:16px;\n"
"background-color:#6CB2D1"));
        pushButton = new QPushButton(imprimirMateria);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(100, 330, 131, 41));
        pushButton->setStyleSheet(QString::fromUtf8("font-size:16px;\n"
"background-color:#6CB2D1"));
        horizontalLayoutWidget = new QWidget(imprimirMateria);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(30, 80, 431, 211));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font-size:16px;"));
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_2);

        lineEdit = new QLineEdit(horizontalLayoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setAutoFillBackground(false);
        lineEdit->setStyleSheet(QString::fromUtf8("background-color:white;"));

        horizontalLayout->addWidget(lineEdit);


        retranslateUi(imprimirMateria);
        QObject::connect(pushButton_2, SIGNAL(clicked()), imprimirMateria, SLOT(reject()));

        QMetaObject::connectSlotsByName(imprimirMateria);
    } // setupUi

    void retranslateUi(QDialog *imprimirMateria)
    {
        imprimirMateria->setWindowTitle(QApplication::translate("imprimirMateria", "Dialog", nullptr));
        label->setText(QApplication::translate("imprimirMateria", "Dados de Mat\303\251ria", nullptr));
        pushButton_2->setText(QApplication::translate("imprimirMateria", "Sair", nullptr));
        pushButton->setText(QApplication::translate("imprimirMateria", "Procurar", nullptr));
        label_2->setText(QApplication::translate("imprimirMateria", "Nome da mat\303\251ria:", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        lineEdit->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        lineEdit->setInputMask(QString());
        lineEdit->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class imprimirMateria: public Ui_imprimirMateria {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMPRIMIRMATERIA_H
