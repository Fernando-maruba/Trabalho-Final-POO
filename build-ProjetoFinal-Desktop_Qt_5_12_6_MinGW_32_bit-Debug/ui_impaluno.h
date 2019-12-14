/********************************************************************************
** Form generated from reading UI file 'impaluno.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMPALUNO_H
#define UI_IMPALUNO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_ImpAluno
{
public:
    QLabel *label;

    void setupUi(QDialog *ImpAluno)
    {
        if (ImpAluno->objectName().isEmpty())
            ImpAluno->setObjectName(QString::fromUtf8("ImpAluno"));
        ImpAluno->resize(689, 497);
        label = new QLabel(ImpAluno);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(230, 30, 121, 321));

        retranslateUi(ImpAluno);

        QMetaObject::connectSlotsByName(ImpAluno);
    } // setupUi

    void retranslateUi(QDialog *ImpAluno)
    {
        ImpAluno->setWindowTitle(QApplication::translate("ImpAluno", "Dialog", nullptr));
        label->setText(QApplication::translate("ImpAluno", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ImpAluno: public Ui_ImpAluno {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMPALUNO_H
