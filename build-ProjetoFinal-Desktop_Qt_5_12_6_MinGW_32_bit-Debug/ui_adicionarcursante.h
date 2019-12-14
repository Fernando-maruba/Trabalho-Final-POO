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
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;

    void setupUi(QDialog *adicionarCursante)
    {
        if (adicionarCursante->objectName().isEmpty())
            adicionarCursante->setObjectName(QString::fromUtf8("adicionarCursante"));
        adicionarCursante->resize(758, 425);
        layoutWidget_2 = new QWidget(adicionarCursante);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(240, 40, 351, 231));
        verticalLayout = new QVBoxLayout(layoutWidget_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        label_3 = new QLabel(layoutWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_3);

        lineEdit = new QLineEdit(layoutWidget_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setAutoFillBackground(false);

        verticalLayout->addWidget(lineEdit);

        label_2 = new QLabel(layoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        lineEdit_2 = new QLineEdit(layoutWidget_2);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        verticalLayout->addWidget(lineEdit_2);

        pushButton = new QPushButton(layoutWidget_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        label = new QLabel(adicionarCursante);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(240, 30, 341, 20));
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(adicionarCursante);
        QObject::connect(pushButton_2, SIGNAL(clicked()), adicionarCursante, SLOT(reject()));

        QMetaObject::connectSlotsByName(adicionarCursante);
    } // setupUi

    void retranslateUi(QDialog *adicionarCursante)
    {
        adicionarCursante->setWindowTitle(QApplication::translate("adicionarCursante", "Dialog", nullptr));
        label_3->setText(QApplication::translate("adicionarCursante", "Nome do aluno", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        lineEdit->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        lineEdit->setInputMask(QString());
        lineEdit->setText(QString());
        label_2->setText(QApplication::translate("adicionarCursante", "Nome do materia", nullptr));
        pushButton->setText(QApplication::translate("adicionarCursante", "Cadastrar", nullptr));
        pushButton_2->setText(QApplication::translate("adicionarCursante", "Cancelar", nullptr));
        label->setText(QApplication::translate("adicionarCursante", "Adicionar cursante de uma materia", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adicionarCursante: public Ui_adicionarCursante {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADICIONARCURSANTE_H
