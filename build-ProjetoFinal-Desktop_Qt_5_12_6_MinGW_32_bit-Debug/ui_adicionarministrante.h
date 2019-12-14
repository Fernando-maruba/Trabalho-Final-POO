/********************************************************************************
** Form generated from reading UI file 'adicionarministrante.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADICIONARMINISTRANTE_H
#define UI_ADICIONARMINISTRANTE_H

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

class Ui_adicionarMinistrante
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

    void setupUi(QDialog *adicionarMinistrante)
    {
        if (adicionarMinistrante->objectName().isEmpty())
            adicionarMinistrante->setObjectName(QString::fromUtf8("adicionarMinistrante"));
        adicionarMinistrante->resize(711, 406);
        layoutWidget_2 = new QWidget(adicionarMinistrante);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(190, 30, 351, 231));
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

        label = new QLabel(adicionarMinistrante);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(190, 20, 341, 20));
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(adicionarMinistrante);
        QObject::connect(pushButton_2, SIGNAL(clicked()), adicionarMinistrante, SLOT(reject()));

        QMetaObject::connectSlotsByName(adicionarMinistrante);
    } // setupUi

    void retranslateUi(QDialog *adicionarMinistrante)
    {
        adicionarMinistrante->setWindowTitle(QApplication::translate("adicionarMinistrante", "Dialog", nullptr));
        label_3->setText(QApplication::translate("adicionarMinistrante", "Nome do professor", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        lineEdit->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        lineEdit->setInputMask(QString());
        lineEdit->setText(QString());
        label_2->setText(QApplication::translate("adicionarMinistrante", "Nome da materia", nullptr));
        pushButton->setText(QApplication::translate("adicionarMinistrante", "Cadastrar", nullptr));
        pushButton_2->setText(QApplication::translate("adicionarMinistrante", "Cancelar", nullptr));
        label->setText(QApplication::translate("adicionarMinistrante", "Adicionar ministrante de uma materia", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adicionarMinistrante: public Ui_adicionarMinistrante {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADICIONARMINISTRANTE_H
