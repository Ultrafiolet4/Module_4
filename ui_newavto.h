/********************************************************************************
** Form generated from reading UI file 'newavto.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWAVTO_H
#define UI_NEWAVTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Newavto
{
public:
    QVBoxLayout *verticalLayout;
    QTableView *new_vw;
    QPushButton *checknew_pb;
    QPushButton *zamovl_pb;

    void setupUi(QDialog *Newavto)
    {
        if (Newavto->objectName().isEmpty())
            Newavto->setObjectName(QString::fromUtf8("Newavto"));
        Newavto->resize(636, 515);
        verticalLayout = new QVBoxLayout(Newavto);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        new_vw = new QTableView(Newavto);
        new_vw->setObjectName(QString::fromUtf8("new_vw"));

        verticalLayout->addWidget(new_vw);

        checknew_pb = new QPushButton(Newavto);
        checknew_pb->setObjectName(QString::fromUtf8("checknew_pb"));

        verticalLayout->addWidget(checknew_pb);

        zamovl_pb = new QPushButton(Newavto);
        zamovl_pb->setObjectName(QString::fromUtf8("zamovl_pb"));

        verticalLayout->addWidget(zamovl_pb);


        retranslateUi(Newavto);

        QMetaObject::connectSlotsByName(Newavto);
    } // setupUi

    void retranslateUi(QDialog *Newavto)
    {
        Newavto->setWindowTitle(QApplication::translate("Newavto", "Dialog", nullptr));
        checknew_pb->setText(QApplication::translate("Newavto", "\320\237\320\276\320\264\320\270\320\262\320\270\321\202\320\270\321\201\321\214", nullptr));
        zamovl_pb->setText(QApplication::translate("Newavto", "\320\227\320\260\320\274\320\276\320\262\320\270\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Newavto: public Ui_Newavto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWAVTO_H
