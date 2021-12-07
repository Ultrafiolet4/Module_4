/********************************************************************************
** Form generated from reading UI file 'smallsearch.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SMALLSEARCH_H
#define UI_SMALLSEARCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SmallSearch
{
public:
    QVBoxLayout *verticalLayout;
    QTableView *small_vw;
    QPushButton *small_pb;
    QPushButton *zamovl_pb;

    void setupUi(QDialog *SmallSearch)
    {
        if (SmallSearch->objectName().isEmpty())
            SmallSearch->setObjectName(QString::fromUtf8("SmallSearch"));
        SmallSearch->resize(623, 536);
        verticalLayout = new QVBoxLayout(SmallSearch);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        small_vw = new QTableView(SmallSearch);
        small_vw->setObjectName(QString::fromUtf8("small_vw"));

        verticalLayout->addWidget(small_vw);

        small_pb = new QPushButton(SmallSearch);
        small_pb->setObjectName(QString::fromUtf8("small_pb"));

        verticalLayout->addWidget(small_pb);

        zamovl_pb = new QPushButton(SmallSearch);
        zamovl_pb->setObjectName(QString::fromUtf8("zamovl_pb"));

        verticalLayout->addWidget(zamovl_pb);


        retranslateUi(SmallSearch);

        QMetaObject::connectSlotsByName(SmallSearch);
    } // setupUi

    void retranslateUi(QDialog *SmallSearch)
    {
        SmallSearch->setWindowTitle(QApplication::translate("SmallSearch", "Dialog", nullptr));
        small_pb->setText(QApplication::translate("SmallSearch", "\320\237\320\276\320\264\320\270\320\262\320\270\321\202\320\270\321\201\321\214", nullptr));
        zamovl_pb->setText(QApplication::translate("SmallSearch", "\320\227\320\260\320\274\320\276\320\262\320\270\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SmallSearch: public Ui_SmallSearch {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SMALLSEARCH_H
