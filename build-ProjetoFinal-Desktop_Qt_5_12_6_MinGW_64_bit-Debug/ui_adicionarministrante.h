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
#include <QtWidgets/QHBoxLayout>
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

    void setupUi(QDialog *adicionarMinistrante)
    {
        if (adicionarMinistrante->objectName().isEmpty())
            adicionarMinistrante->setObjectName(QString::fromUtf8("adicionarMinistrante"));
        adicionarMinistrante->resize(491, 445);
        adicionarMinistrante->setStyleSheet(QString::fromUtf8("background-color:#FFDFD3"));
        label = new QLabel(adicionarMinistrante);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(35, 20, 421, 20));
        QFont font;
        font.setBold(true);
        font.setUnderline(true);
        font.setWeight(75);
        font.setStrikeOut(false);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("font-size:20px;\n"
""));
        label->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(adicionarMinistrante);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(100, 330, 131, 41));
        pushButton->setStyleSheet(QString::fromUtf8("font-size:16px;\n"
"background-color:#6CB2D1"));
        pushButton_2 = new QPushButton(adicionarMinistrante);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(260, 330, 131, 41));
        pushButton_2->setStyleSheet(QString::fromUtf8("font-size:16px;\n"
"background-color:#6CB2D1"));
        horizontalLayoutWidget = new QWidget(adicionarMinistrante);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 90, 461, 211));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetNoConstraint);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_3 = new QLabel(horizontalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("font-size:16px;"));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_3);

        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font-size:16px;"));
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


        retranslateUi(adicionarMinistrante);
        QObject::connect(pushButton_2, SIGNAL(clicked()), adicionarMinistrante, SLOT(reject()));

        QMetaObject::connectSlotsByName(adicionarMinistrante);
    } // setupUi

    void retranslateUi(QDialog *adicionarMinistrante)
    {
        adicionarMinistrante->setWindowTitle(QApplication::translate("adicionarMinistrante", "Dialog", nullptr));
        label->setText(QApplication::translate("adicionarMinistrante", "Associar Professor \303\240 Mat\303\251ria", nullptr));
        pushButton->setText(QApplication::translate("adicionarMinistrante", "Cadastrar", nullptr));
        pushButton_2->setText(QApplication::translate("adicionarMinistrante", "Cancelar", nullptr));
        label_3->setText(QApplication::translate("adicionarMinistrante", "Nome do professor:", nullptr));
        label_2->setText(QApplication::translate("adicionarMinistrante", "Nome da mat\303\251ria:", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        lineEdit->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        lineEdit->setInputMask(QString());
        lineEdit->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class adicionarMinistrante: public Ui_adicionarMinistrante {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADICIONARMINISTRANTE_H
