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

QT_BEGIN_NAMESPACE

class Ui_ImpAluno
{
public:

    void setupUi(QDialog *ImpAluno)
    {
        if (ImpAluno->objectName().isEmpty())
            ImpAluno->setObjectName(QString::fromUtf8("ImpAluno"));
        ImpAluno->resize(689, 497);

        retranslateUi(ImpAluno);

        QMetaObject::connectSlotsByName(ImpAluno);
    } // setupUi

    void retranslateUi(QDialog *ImpAluno)
    {
        ImpAluno->setWindowTitle(QApplication::translate("ImpAluno", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ImpAluno: public Ui_ImpAluno {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMPALUNO_H
