/********************************************************************************
** Form generated from reading UI file 'largesearchmodel.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LARGESEARCHMODEL_H
#define UI_LARGESEARCHMODEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LargeSearchModel
{
public:
    QVBoxLayout *verticalLayout;
    QTableView *large_vw;
    QPushButton *check_pb;
    QPushButton *zamovl_pb;

    void setupUi(QDialog *LargeSearchModel)
    {
        if (LargeSearchModel->objectName().isEmpty())
            LargeSearchModel->setObjectName(QString::fromUtf8("LargeSearchModel"));
        LargeSearchModel->resize(634, 439);
        verticalLayout = new QVBoxLayout(LargeSearchModel);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        large_vw = new QTableView(LargeSearchModel);
        large_vw->setObjectName(QString::fromUtf8("large_vw"));

        verticalLayout->addWidget(large_vw);

        check_pb = new QPushButton(LargeSearchModel);
        check_pb->setObjectName(QString::fromUtf8("check_pb"));

        verticalLayout->addWidget(check_pb);

        zamovl_pb = new QPushButton(LargeSearchModel);
        zamovl_pb->setObjectName(QString::fromUtf8("zamovl_pb"));

        verticalLayout->addWidget(zamovl_pb);


        retranslateUi(LargeSearchModel);

        QMetaObject::connectSlotsByName(LargeSearchModel);
    } // setupUi

    void retranslateUi(QDialog *LargeSearchModel)
    {
        LargeSearchModel->setWindowTitle(QApplication::translate("LargeSearchModel", "Dialog", nullptr));
        check_pb->setText(QApplication::translate("LargeSearchModel", "\320\237\320\276\320\264\320\270\320\262\320\270\321\202\320\270\321\201\321\214", nullptr));
        zamovl_pb->setText(QApplication::translate("LargeSearchModel", "\320\227\320\260\320\274\320\276\320\262\320\270\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LargeSearchModel: public Ui_LargeSearchModel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LARGESEARCHMODEL_H
