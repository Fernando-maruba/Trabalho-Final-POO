/********************************************************************************
** Form generated from reading UI file 'adicionarcursante.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADICIONARCURSANTE_H
#define UI_ADICIONARCURSANTE_H

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

class Ui_adicionarCursante
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *lineEdit;
    QSpacerItem *verticalSpacer;
    QLineEdit *lineEdit_2;

    void setupUi(QDialog *adicionarCursante)
    {
        if (adicionarCursante->objectName().isEmpty())
            adicionarCursante->setObjectName(QString::fromUtf8("adicionarCursante"));
        adicionarCursante->resize(491, 445);
        adicionarCursante->setStyleSheet(QString::fromUtf8("background-color:#FFDFD3"));
        label = new QLabel(adicionarCursante);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 20, 341, 20));
        QFont font;
        font.setBold(true);
        font.setItalic(false);
        font.setUnderline(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("font-size:20px;"));
        label->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(adicionarCursante);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(100, 330, 131, 41));
        pushButton->setStyleSheet(QString::fromUtf8("font-size:16px;\n"
"background-color:#6CB2D1"));
        pushButton_2 = new QPushButton(adicionarCursante);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(260, 330, 131, 41));
        pushButton_2->setStyleSheet(QString::fromUtf8("font-size:16px;\n"
"background-color:#6CB2D1"));
        horizontalLayoutWidget = new QWidget(adicionarCursante);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 90, 461, 211));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_3 = new QLabel(horizontalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("font-size:16px;\n"
""));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_3);

        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font-size:16px;\n"
""));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_2);


        horizontalLayout->addLayout(verticalLayout_3);

        horizontalSpacer = new QSpacerItem(0, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        lineEdit = new QLineEdit(horizontalLayoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setAutoFillBackground(false);
        lineEdit->setStyleSheet(QString::fromUtf8("background-color:white;"));

        verticalLayout_4->addWidget(lineEdit);

        verticalSpacer = new QSpacerItem(50, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_4->addItem(verticalSpacer);

        lineEdit_2 = new QLineEdit(horizontalLayoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setStyleSheet(QString::fromUtf8("background-color:white;"));

        verticalLayout_4->addWidget(lineEdit_2);


        horizontalLayout->addLayout(verticalLayout_4);


        retranslateUi(adicionarCursante);
        QObject::connect(pushButton_2, SIGNAL(clicked()), adicionarCursante, SLOT(reject()));

        QMetaObject::connectSlotsByName(adicionarCursante);
    } // setupUi

    void retranslateUi(QDialog *adicionarCursante)
    {
        adicionarCursante->setWindowTitle(QApplication::translate("adicionarCursante", "Dialog", nullptr));
        label->setText(QApplication::translate("adicionarCursante", "Associar Aluno \303\240 Mat\303\251ria", nullptr));
        pushButton->setText(QApplication::translate("adicionarCursante", "Cadastrar", nullptr));
        pushButton_2->setText(QApplication::translate("adicionarCursante", "Cancelar", nullptr));
        label_3->setText(QApplication::translate("adicionarCursante", "Nome do aluno:", nullptr));
        label_2->setText(QApplication::translate("adicionarCursante", "Nome da mat\303\251ria:", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        lineEdit->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        lineEdit->setInputMask(QString());
        lineEdit->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class adicionarCursante: public Ui_adicionarCursante {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADICIONARCURSANTE_H
