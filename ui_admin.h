/********************************************************************************
** Form generated from reading UI file 'admin.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Admin
{
public:
    QVBoxLayout *verticalLayout;
    QPushButton *exit_pb;
    QTabWidget *tabWidget;
    QWidget *avto_tb;
    QFormLayout *formLayout;
    QTableView *avto_vw;
    QPushButton *add_pb;
    QPushButton *delete_pb;
    QPushButton *select_pb;
    QWidget *order_tb;
    QFormLayout *formLayout_3;
    QTableView *order_vw;
    QPushButton *delete_pb_3;
    QPushButton *select_pb_3;
    QTableView *admin_vw;
    QPushButton *deleteadm_pb;
    QPushButton *selectadm_pb;

    void setupUi(QWidget *Admin)
    {
        if (Admin->objectName().isEmpty())
            Admin->setObjectName(QString::fromUtf8("Admin"));
        Admin->resize(617, 583);
        verticalLayout = new QVBoxLayout(Admin);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        exit_pb = new QPushButton(Admin);
        exit_pb->setObjectName(QString::fromUtf8("exit_pb"));

        verticalLayout->addWidget(exit_pb);

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
        avto_vw = new QTableView(avto_tb);
        avto_vw->setObjectName(QString::fromUtf8("avto_vw"));

        formLayout->setWidget(0, QFormLayout::FieldRole, avto_vw);

        add_pb = new QPushButton(avto_tb);
        add_pb->setObjectName(QString::fromUtf8("add_pb"));
        sizePolicy.setHeightForWidth(add_pb->sizePolicy().hasHeightForWidth());
        add_pb->setSizePolicy(sizePolicy);

        formLayout->setWidget(1, QFormLayout::FieldRole, add_pb);

        delete_pb = new QPushButton(avto_tb);
        delete_pb->setObjectName(QString::fromUtf8("delete_pb"));
        sizePolicy.setHeightForWidth(delete_pb->sizePolicy().hasHeightForWidth());
        delete_pb->setSizePolicy(sizePolicy);

        formLayout->setWidget(2, QFormLayout::FieldRole, delete_pb);

        select_pb = new QPushButton(avto_tb);
        select_pb->setObjectName(QString::fromUtf8("select_pb"));
        sizePolicy.setHeightForWidth(select_pb->sizePolicy().hasHeightForWidth());
        select_pb->setSizePolicy(sizePolicy);

        formLayout->setWidget(3, QFormLayout::FieldRole, select_pb);

        tabWidget->addTab(avto_tb, QString());
        order_tb = new QWidget();
        order_tb->setObjectName(QString::fromUtf8("order_tb"));
        formLayout_3 = new QFormLayout(order_tb);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        order_vw = new QTableView(order_tb);
        order_vw->setObjectName(QString::fromUtf8("order_vw"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, order_vw);

        delete_pb_3 = new QPushButton(order_tb);
        delete_pb_3->setObjectName(QString::fromUtf8("delete_pb_3"));
        sizePolicy.setHeightForWidth(delete_pb_3->sizePolicy().hasHeightForWidth());
        delete_pb_3->setSizePolicy(sizePolicy);

        formLayout_3->setWidget(1, QFormLayout::FieldRole, delete_pb_3);

        select_pb_3 = new QPushButton(order_tb);
        select_pb_3->setObjectName(QString::fromUtf8("select_pb_3"));
        sizePolicy.setHeightForWidth(select_pb_3->sizePolicy().hasHeightForWidth());
        select_pb_3->setSizePolicy(sizePolicy);

        formLayout_3->setWidget(2, QFormLayout::FieldRole, select_pb_3);

        tabWidget->addTab(order_tb, QString());

        verticalLayout->addWidget(tabWidget);

        admin_vw = new QTableView(Admin);
        admin_vw->setObjectName(QString::fromUtf8("admin_vw"));

        verticalLayout->addWidget(admin_vw);

        deleteadm_pb = new QPushButton(Admin);
        deleteadm_pb->setObjectName(QString::fromUtf8("deleteadm_pb"));

        verticalLayout->addWidget(deleteadm_pb);

        selectadm_pb = new QPushButton(Admin);
        selectadm_pb->setObjectName(QString::fromUtf8("selectadm_pb"));

        verticalLayout->addWidget(selectadm_pb);


        retranslateUi(Admin);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Admin);
    } // setupUi

    void retranslateUi(QWidget *Admin)
    {
        Admin->setWindowTitle(QApplication::translate("Admin", "Form", nullptr));
        exit_pb->setText(QApplication::translate("Admin", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        add_pb->setText(QApplication::translate("Admin", "\320\224\320\276\320\264\320\260\321\202\320\270 \320\260\320\262\321\202\320\276", nullptr));
        delete_pb->setText(QApplication::translate("Admin", "\320\222\320\270\320\264\320\260\320\273\320\270\321\202\320\270 \320\260\320\262\321\202\320\276", nullptr));
        select_pb->setText(QApplication::translate("Admin", "\320\222\320\270\320\262\320\265\321\201\321\202\320\270 \320\262\321\201\321\226 \320\260\320\262\321\202\320\276", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(avto_tb), QApplication::translate("Admin", "\320\220\320\262\321\202\320\276", nullptr));
        delete_pb_3->setText(QApplication::translate("Admin", "\320\222\320\270\320\264\320\260\320\273\320\270\321\202\320\270 \320\267\320\260\320\274\320\276\320\262\320\273\320\265\320\275\320\275\321\217", nullptr));
        select_pb_3->setText(QApplication::translate("Admin", "\320\222\320\270\320\262\320\265\321\201\321\202\320\270 \320\262\321\201\321\226 \320\267\320\260\320\274\320\276\320\262\320\273\320\265\320\275\320\275\321\217", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(order_tb), QApplication::translate("Admin", "\320\227\320\260\320\274\320\276\320\262\320\273\320\265\320\275\320\275\321\217", nullptr));
        deleteadm_pb->setText(QApplication::translate("Admin", "\320\222\320\270\320\264\320\260\320\273\320\270\321\202\320\270 \320\260\320\264\320\274\321\226\320\275\320\260", nullptr));
        selectadm_pb->setText(QApplication::translate("Admin", "\320\222\320\270\320\262\320\265\321\201\321\202\320\270 \320\262\321\201\321\226\321\205 \320\260\320\264\320\274\321\226\320\275\321\226\320\262", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Admin: public Ui_Admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H
