/********************************************************************************
** Form generated from reading UI file 'dialogescultor.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGESCULTOR_H
#define UI_DIALOGESCULTOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogEscultor
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *spinBoxLinhas;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpinBox *spinBoxColunas;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QSpinBox *spinBoxPlanos;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialogEscultor)
    {
        if (DialogEscultor->objectName().isEmpty())
            DialogEscultor->setObjectName(QString::fromUtf8("DialogEscultor"));
        DialogEscultor->resize(474, 336);
        verticalLayout = new QVBoxLayout(DialogEscultor);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(DialogEscultor);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(13);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        spinBoxLinhas = new QSpinBox(DialogEscultor);
        spinBoxLinhas->setObjectName(QString::fromUtf8("spinBoxLinhas"));
        spinBoxLinhas->setMaximum(500);

        horizontalLayout->addWidget(spinBoxLinhas);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(DialogEscultor);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        horizontalLayout_2->addWidget(label_2);

        spinBoxColunas = new QSpinBox(DialogEscultor);
        spinBoxColunas->setObjectName(QString::fromUtf8("spinBoxColunas"));
        spinBoxColunas->setMaximum(500);

        horizontalLayout_2->addWidget(spinBoxColunas);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(DialogEscultor);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        horizontalLayout_3->addWidget(label_3);

        spinBoxPlanos = new QSpinBox(DialogEscultor);
        spinBoxPlanos->setObjectName(QString::fromUtf8("spinBoxPlanos"));
        spinBoxPlanos->setMaximum(500);

        horizontalLayout_3->addWidget(spinBoxPlanos);


        verticalLayout->addLayout(horizontalLayout_3);

        buttonBox = new QDialogButtonBox(DialogEscultor);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(DialogEscultor);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogEscultor, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogEscultor, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogEscultor);
    } // setupUi

    void retranslateUi(QDialog *DialogEscultor)
    {
        DialogEscultor->setWindowTitle(QCoreApplication::translate("DialogEscultor", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("DialogEscultor", "              Linhas", nullptr));
        label_2->setText(QCoreApplication::translate("DialogEscultor", "              Colunas", nullptr));
        label_3->setText(QCoreApplication::translate("DialogEscultor", "              Planos", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogEscultor: public Ui_DialogEscultor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGESCULTOR_H
