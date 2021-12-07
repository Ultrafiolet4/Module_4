/********************************************************************************
** Form generated from reading UI file 'all.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALL_H
#define UI_ALL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_All
{
public:
    QVBoxLayout *verticalLayout;
    QTableView *all_vw;
    QPushButton *check_pb;
    QPushButton *zamovl_pb;

    void setupUi(QDialog *All)
    {
        if (All->objectName().isEmpty())
            All->setObjectName(QString::fromUtf8("All"));
        All->resize(645, 516);
        verticalLayout = new QVBoxLayout(All);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        all_vw = new QTableView(All);
        all_vw->setObjectName(QString::fromUtf8("all_vw"));

        verticalLayout->addWidget(all_vw);

        check_pb = new QPushButton(All);
        check_pb->setObjectName(QString::fromUtf8("check_pb"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(check_pb->sizePolicy().hasHeightForWidth());
        check_pb->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(check_pb);

        zamovl_pb = new QPushButton(All);
        zamovl_pb->setObjectName(QString::fromUtf8("zamovl_pb"));

        verticalLayout->addWidget(zamovl_pb);


        retranslateUi(All);

        QMetaObject::connectSlotsByName(All);
    } // setupUi

    void retranslateUi(QDialog *All)
    {
        All->setWindowTitle(QApplication::translate("All", "Dialog", nullptr));
        check_pb->setText(QApplication::translate("All", "\320\237\320\276\320\264\320\270\320\262\320\270\321\202\320\270\321\201\321\214", nullptr));
        zamovl_pb->setText(QApplication::translate("All", "\320\227\320\260\320\274\320\276\320\262\320\270\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class All: public Ui_All {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALL_H
