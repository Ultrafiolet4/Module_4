/********************************************************************************
** Form generated from reading UI file 'admin.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_H
#define UI_ADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Admin
{
public:
    QFormLayout *formLayout_4;
    QTabWidget *tabWidget;
    QWidget *avto_tb;
    QFormLayout *formLayout;
    QPushButton *delete_pb;
    QPushButton *select_pb;
    QPushButton *update_pb;
    QPushButton *add_pb;
    QTableView *avto_vw;
    QWidget *suplier_tb;
    QFormLayout *formLayout_2;
    QTableView *suplier_vw;
    QPushButton *add_pb_2;
    QPushButton *update_pb_2;
    QPushButton *delete_pb_2;
    QPushButton *select_pb_2;
    QWidget *order_tb;
    QFormLayout *formLayout_3;
    QTableView *order_vw;
    QPushButton *update_pb_3;
    QPushButton *delete_pb_3;
    QPushButton *select_pb_3;

    void setupUi(QWidget *Admin)
    {
        if (Admin->objectName().isEmpty())
            Admin->setObjectName(QString::fromUtf8("Admin"));
        Admin->resize(617, 583);
        formLayout_4 = new QFormLayout(Admin);
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        tabWidget = new QTabWidget(Admin);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        avto_tb = new QWidget();
        avto_tb->setObjectName(QString::fromUtf8("avto_tb"));
        formLayout = new QFormLayout(avto_tb);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        delete_pb = new QPushButton(avto_tb);
        delete_pb->setObjectName(QString::fromUtf8("delete_pb"));
        sizePolicy.setHeightForWidth(delete_pb->sizePolicy().hasHeightForWidth());
        delete_pb->setSizePolicy(sizePolicy);

        formLayout->setWidget(3, QFormLayout::FieldRole, delete_pb);

        select_pb = new QPushButton(avto_tb);
        select_pb->setObjectName(QString::fromUtf8("select_pb"));
        sizePolicy.setHeightForWidth(select_pb->sizePolicy().hasHeightForWidth());
        select_pb->setSizePolicy(sizePolicy);

        formLayout->setWidget(4, QFormLayout::FieldRole, select_pb);

        update_pb = new QPushButton(avto_tb);
        update_pb->setObjectName(QString::fromUtf8("update_pb"));
        sizePolicy.setHeightForWidth(update_pb->sizePolicy().hasHeightForWidth());
        update_pb->setSizePolicy(sizePolicy);

        formLayout->setWidget(2, QFormLayout::FieldRole, update_pb);

        add_pb = new QPushButton(avto_tb);
        add_pb->setObjectName(QString::fromUtf8("add_pb"));
        sizePolicy.setHeightForWidth(add_pb->sizePolicy().hasHeightForWidth());
        add_pb->setSizePolicy(sizePolicy);

        formLayout->setWidget(1, QFormLayout::FieldRole, add_pb);

        avto_vw = new QTableView(avto_tb);
        avto_vw->setObjectName(QString::fromUtf8("avto_vw"));

        formLayout->setWidget(0, QFormLayout::FieldRole, avto_vw);

        tabWidget->addTab(avto_tb, QString());
        suplier_tb = new QWidget();
        suplier_tb->setObjectName(QString::fromUtf8("suplier_tb"));
        formLayout_2 = new QFormLayout(suplier_tb);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        suplier_vw = new QTableView(suplier_tb);
        suplier_vw->setObjectName(QString::fromUtf8("suplier_vw"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, suplier_vw);

        add_pb_2 = new QPushButton(suplier_tb);
        add_pb_2->setObjectName(QString::fromUtf8("add_pb_2"));
        sizePolicy.setHeightForWidth(add_pb_2->sizePolicy().hasHeightForWidth());
        add_pb_2->setSizePolicy(sizePolicy);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, add_pb_2);

        update_pb_2 = new QPushButton(suplier_tb);
        update_pb_2->setObjectName(QString::fromUtf8("update_pb_2"));
        sizePolicy.setHeightForWidth(update_pb_2->sizePolicy().hasHeightForWidth());
        update_pb_2->setSizePolicy(sizePolicy);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, update_pb_2);

        delete_pb_2 = new QPushButton(suplier_tb);
        delete_pb_2->setObjectName(QString::fromUtf8("delete_pb_2"));
        sizePolicy.setHeightForWidth(delete_pb_2->sizePolicy().hasHeightForWidth());
        delete_pb_2->setSizePolicy(sizePolicy);

        formLayout_2->setWidget(3, QFormLayout::FieldRole, delete_pb_2);

        select_pb_2 = new QPushButton(suplier_tb);
        select_pb_2->setObjectName(QString::fromUtf8("select_pb_2"));
        sizePolicy.setHeightForWidth(select_pb_2->sizePolicy().hasHeightForWidth());
        select_pb_2->setSizePolicy(sizePolicy);

        formLayout_2->setWidget(4, QFormLayout::FieldRole, select_pb_2);

        tabWidget->addTab(suplier_tb, QString());
        order_tb = new QWidget();
        order_tb->setObjectName(QString::fromUtf8("order_tb"));
        formLayout_3 = new QFormLayout(order_tb);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        order_vw = new QTableView(order_tb);
        order_vw->setObjectName(QString::fromUtf8("order_vw"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, order_vw);

        update_pb_3 = new QPushButton(order_tb);
        update_pb_3->setObjectName(QString::fromUtf8("update_pb_3"));
        sizePolicy.setHeightForWidth(update_pb_3->sizePolicy().hasHeightForWidth());
        update_pb_3->setSizePolicy(sizePolicy);

        formLayout_3->setWidget(1, QFormLayout::FieldRole, update_pb_3);

        delete_pb_3 = new QPushButton(order_tb);
        delete_pb_3->setObjectName(QString::fromUtf8("delete_pb_3"));
        sizePolicy.setHeightForWidth(delete_pb_3->sizePolicy().hasHeightForWidth());
        delete_pb_3->setSizePolicy(sizePolicy);

        formLayout_3->setWidget(2, QFormLayout::FieldRole, delete_pb_3);

        select_pb_3 = new QPushButton(order_tb);
        select_pb_3->setObjectName(QString::fromUtf8("select_pb_3"));
        sizePolicy.setHeightForWidth(select_pb_3->sizePolicy().hasHeightForWidth());
        select_pb_3->setSizePolicy(sizePolicy);

        formLayout_3->setWidget(3, QFormLayout::FieldRole, select_pb_3);

        tabWidget->addTab(order_tb, QString());

        formLayout_4->setWidget(0, QFormLayout::SpanningRole, tabWidget);


        retranslateUi(Admin);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Admin);
    } // setupUi

    void retranslateUi(QWidget *Admin)
    {
        Admin->setWindowTitle(QCoreApplication::translate("Admin", "Form", nullptr));
        delete_pb->setText(QCoreApplication::translate("Admin", "\320\222\320\270\320\264\320\260\320\273\320\270\321\202\320\270 \320\260\320\262\321\202\320\276", nullptr));
        select_pb->setText(QCoreApplication::translate("Admin", "\320\222\320\270\320\262\320\265\321\201\321\202\320\270 \320\262\321\201\321\226 \320\260\320\262\321\202\320\276", nullptr));
        update_pb->setText(QCoreApplication::translate("Admin", "\320\240\320\265\320\264\320\260\320\263\321\203\320\262\320\260\321\202\320\270 \321\226\320\275\321\204\320\276\321\200\320\274\320\260\321\206\321\226\321\216 \320\277\321\200\320\276 \320\260\320\262\321\202\320\276", nullptr));
        add_pb->setText(QCoreApplication::translate("Admin", "\320\224\320\276\320\264\320\260\321\202\320\270 \320\260\320\262\321\202\320\276", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(avto_tb), QCoreApplication::translate("Admin", "\320\220\320\262\321\202\320\276", nullptr));
        add_pb_2->setText(QCoreApplication::translate("Admin", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\320\270 \320\277\320\276\321\201\321\202\320\260\321\207\320\260\320\273\321\214\320\275\320\270\320\272\320\260", nullptr));
        update_pb_2->setText(QCoreApplication::translate("Admin", "\320\240\320\265\320\264\320\260\320\263\321\203\320\262\320\260\321\202\320\270 \321\226\320\275\321\204\320\276\321\200\320\274\320\260\321\206\321\226\321\216 \320\277\321\200\320\276 \320\277\320\276\321\201\321\202\320\260\321\207\320\260\320\273\321\214\320\275\320\270\320\272\320\260", nullptr));
        delete_pb_2->setText(QCoreApplication::translate("Admin", "\320\222\320\270\320\264\320\260\320\273\320\270\321\202\320\270 \320\277\320\276\321\201\321\202\320\260\321\207\320\260\320\273\321\214\320\275\320\270\320\272\320\260", nullptr));
        select_pb_2->setText(QCoreApplication::translate("Admin", "\320\222\320\270\320\262\320\265\321\201\321\202\320\270 \320\277\320\276\321\201\321\202\320\260\321\207\320\260\320\273\321\214\320\275\320\270\320\272\320\260", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(suplier_tb), QCoreApplication::translate("Admin", "\320\237\320\276\321\201\321\202\320\260\321\207\320\260\320\273\321\214\320\275\320\270\320\272\320\270", nullptr));
        update_pb_3->setText(QCoreApplication::translate("Admin", "\320\240\320\265\320\264\320\260\320\263\321\203\320\262\320\260\321\202\320\270 \320\267\320\260\320\274\320\276\320\262\320\273\320\265\320\275\320\275\321\217", nullptr));
        delete_pb_3->setText(QCoreApplication::translate("Admin", "\320\222\320\270\320\264\320\260\320\273\320\270\321\202\320\270 \320\267\320\260\320\274\320\276\320\262\320\273\320\265\320\275\320\275\321\217", nullptr));
        select_pb_3->setText(QCoreApplication::translate("Admin", "\320\222\320\270\320\262\320\265\321\201\321\202\320\270 \320\262\321\201\321\226 \320\267\320\260\320\274\320\276\320\262\320\273\320\265\320\275\320\275\321\217", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(order_tb), QCoreApplication::translate("Admin", "\320\227\320\260\320\274\320\276\320\262\320\273\320\265\320\275\320\275\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Admin: public Ui_Admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H
