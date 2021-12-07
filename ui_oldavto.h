/********************************************************************************
** Form generated from reading UI file 'oldavto.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OLDAVTO_H
#define UI_OLDAVTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_OldAvto
{
public:
    QVBoxLayout *verticalLayout;
    QTableView *old_vw;
    QPushButton *old_pb;
    QPushButton *zamovl_pb;

    void setupUi(QDialog *OldAvto)
    {
        if (OldAvto->objectName().isEmpty())
            OldAvto->setObjectName(QString::fromUtf8("OldAvto"));
        OldAvto->resize(592, 488);
        verticalLayout = new QVBoxLayout(OldAvto);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        old_vw = new QTableView(OldAvto);
        old_vw->setObjectName(QString::fromUtf8("old_vw"));

        verticalLayout->addWidget(old_vw);

        old_pb = new QPushButton(OldAvto);
        old_pb->setObjectName(QString::fromUtf8("old_pb"));

        verticalLayout->addWidget(old_pb);

        zamovl_pb = new QPushButton(OldAvto);
        zamovl_pb->setObjectName(QString::fromUtf8("zamovl_pb"));

        verticalLayout->addWidget(zamovl_pb);


        retranslateUi(OldAvto);

        QMetaObject::connectSlotsByName(OldAvto);
    } // setupUi

    void retranslateUi(QDialog *OldAvto)
    {
        OldAvto->setWindowTitle(QApplication::translate("OldAvto", "Dialog", nullptr));
        old_pb->setText(QApplication::translate("OldAvto", "\320\237\320\276\320\264\320\270\320\262\320\270\321\202\320\270\321\201\321\214", nullptr));
        zamovl_pb->setText(QApplication::translate("OldAvto", "\320\227\320\260\320\274\320\276\320\262\320\270\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OldAvto: public Ui_OldAvto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OLDAVTO_H
