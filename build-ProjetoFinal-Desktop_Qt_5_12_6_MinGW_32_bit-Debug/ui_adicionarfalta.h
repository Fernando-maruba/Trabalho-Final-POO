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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adicionarFalta
{
public:
    QLabel *label;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *lineEdit_5;

    void setupUi(QDialog *adicionarFalta)
    {
        if (adicionarFalta->objectName().isEmpty())
            adicionarFalta->setObjectName(QString::fromUtf8("adicionarFalta"));
        adicionarFalta->setEnabled(true);
        adicionarFalta->resize(491, 445);
        adicionarFalta->setStyleSheet(QString::fromUtf8("background-color:#FFDFD3"));
        label = new QLabel(adicionarFalta);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 20, 341, 20));
        QFont font;
        font.setBold(true);
        font.setUnderline(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("font-size:20px;"));
        label->setAlignment(Qt::AlignCenter);
        pushButton_3 = new QPushButton(adicionarFalta);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setEnabled(true);
        pushButton_3->setGeometry(QRect(100, 330, 131, 41));
        pushButton_3->setStyleSheet(QString::fromUtf8("font-size:16px;\n"
"background-color:#6CB2D1"));
        pushButton_3->setInputMethodHints(Qt::ImhNone);
        pushButton = new QPushButton(adicionarFalta);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(100, 330, 131, 41));
        pushButton->setStyleSheet(QString::fromUtf8("font-size:16px;\n"
"background-color:#6CB2D1"));
        pushButton->setFlat(false);
        pushButton_2 = new QPushButton(adicionarFalta);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(260, 330, 131, 41));
        pushButton_2->setStyleSheet(QString::fromUtf8("font-size:16px;\n"
"background-color:#6CB2D1"));
        horizontalLayoutWidget = new QWidget(adicionarFalta);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(20, 70, 451, 211));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_6 = new QLabel(horizontalLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setStyleSheet(QString::fromUtf8("font-size:16px;\n"
""));
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_6);


        horizontalLayout->addLayout(verticalLayout_3);

        horizontalSpacer = new QSpacerItem(0, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        lineEdit_5 = new QLineEdit(horizontalLayoutWidget);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setAutoFillBackground(false);
        lineEdit_5->setStyleSheet(QString::fromUtf8("background-color:white;"));

        verticalLayout_4->addWidget(lineEdit_5);


        horizontalLayout->addLayout(verticalLayout_4);


        retranslateUi(adicionarFalta);
        QObject::connect(pushButton_2, SIGNAL(clicked()), adicionarFalta, SLOT(close()));
        QObject::connect(pushButton, SIGNAL(clicked()), pushButton, SLOT(close()));

        pushButton->setDefault(true);


        QMetaObject::connectSlotsByName(adicionarFalta);
    } // setupUi

    void retranslateUi(QDialog *adicionarFalta)
    {
        adicionarFalta->setWindowTitle(QApplication::translate("adicionarFalta", "Dialog", nullptr));
        label->setText(QApplication::translate("adicionarFalta", "Chamada", nullptr));
        pushButton_3->setText(QApplication::translate("adicionarFalta", "Finalizar", nullptr));
        pushButton->setText(QApplication::translate("adicionarFalta", "Fazer Chamada", nullptr));
        pushButton_2->setText(QApplication::translate("adicionarFalta", "Cancelar", nullptr));
        label_6->setText(QApplication::translate("adicionarFalta", "Nome da Mat\303\251ria:", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        lineEdit_5->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        lineEdit_5->setInputMask(QString());
        lineEdit_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class adicionarFalta: public Ui_adicionarFalta {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADICIONARFALTA_H
