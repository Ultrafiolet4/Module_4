/********************************************************************************
** Form generated from reading UI file 'customer.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMER_H
#define UI_CUSTOMER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Customer
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *buttons_lay;
    QPushButton *exit_pb;
    QPushButton *all_pb;
    QPushButton *old_pb;
    QPushButton *new_pb;
    QPushButton *greatsearch_pb;
    QPushButton *search_pb;
    QVBoxLayout *choise_lay;
    QComboBox *name_cb;
    QComboBox *model_cb;

    void setupUi(QWidget *Customer)
    {
        if (Customer->objectName().isEmpty())
            Customer->setObjectName(QString::fromUtf8("Customer"));
        Customer->resize(605, 260);
        verticalLayout = new QVBoxLayout(Customer);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        buttons_lay = new QHBoxLayout();
        buttons_lay->setObjectName(QString::fromUtf8("buttons_lay"));
        buttons_lay->setSizeConstraint(QLayout::SetFixedSize);
        buttons_lay->setContentsMargins(0, 30, 0, 40);
        exit_pb = new QPushButton(Customer);
        exit_pb->setObjectName(QString::fromUtf8("exit_pb"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(exit_pb->sizePolicy().hasHeightForWidth());
        exit_pb->setSizePolicy(sizePolicy);
        exit_pb->setCursor(QCursor(Qt::PointingHandCursor));

        buttons_lay->addWidget(exit_pb);

        all_pb = new QPushButton(Customer);
        all_pb->setObjectName(QString::fromUtf8("all_pb"));
        sizePolicy.setHeightForWidth(all_pb->sizePolicy().hasHeightForWidth());
        all_pb->setSizePolicy(sizePolicy);
        all_pb->setCursor(QCursor(Qt::PointingHandCursor));

        buttons_lay->addWidget(all_pb);

        old_pb = new QPushButton(Customer);
        old_pb->setObjectName(QString::fromUtf8("old_pb"));
        sizePolicy.setHeightForWidth(old_pb->sizePolicy().hasHeightForWidth());
        old_pb->setSizePolicy(sizePolicy);
        old_pb->setCursor(QCursor(Qt::PointingHandCursor));

        buttons_lay->addWidget(old_pb);

        new_pb = new QPushButton(Customer);
        new_pb->setObjectName(QString::fromUtf8("new_pb"));
        sizePolicy.setHeightForWidth(new_pb->sizePolicy().hasHeightForWidth());
        new_pb->setSizePolicy(sizePolicy);
        new_pb->setCursor(QCursor(Qt::PointingHandCursor));

        buttons_lay->addWidget(new_pb);

        greatsearch_pb = new QPushButton(Customer);
        greatsearch_pb->setObjectName(QString::fromUtf8("greatsearch_pb"));
        sizePolicy.setHeightForWidth(greatsearch_pb->sizePolicy().hasHeightForWidth());
        greatsearch_pb->setSizePolicy(sizePolicy);
        greatsearch_pb->setCursor(QCursor(Qt::PointingHandCursor));

        buttons_lay->addWidget(greatsearch_pb);

        search_pb = new QPushButton(Customer);
        search_pb->setObjectName(QString::fromUtf8("search_pb"));
        sizePolicy.setHeightForWidth(search_pb->sizePolicy().hasHeightForWidth());
        search_pb->setSizePolicy(sizePolicy);
        search_pb->setCursor(QCursor(Qt::PointingHandCursor));

        buttons_lay->addWidget(search_pb);


        verticalLayout->addLayout(buttons_lay);

        choise_lay = new QVBoxLayout();
        choise_lay->setObjectName(QString::fromUtf8("choise_lay"));
        choise_lay->setContentsMargins(-1, 30, -1, 40);
        name_cb = new QComboBox(Customer);
        name_cb->addItem(QString());
        name_cb->setObjectName(QString::fromUtf8("name_cb"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(name_cb->sizePolicy().hasHeightForWidth());
        name_cb->setSizePolicy(sizePolicy1);
        name_cb->setCursor(QCursor(Qt::PointingHandCursor));

        choise_lay->addWidget(name_cb);

        model_cb = new QComboBox(Customer);
        model_cb->addItem(QString());
        model_cb->setObjectName(QString::fromUtf8("model_cb"));
        sizePolicy1.setHeightForWidth(model_cb->sizePolicy().hasHeightForWidth());
        model_cb->setSizePolicy(sizePolicy1);
        model_cb->setCursor(QCursor(Qt::PointingHandCursor));

        choise_lay->addWidget(model_cb);


        verticalLayout->addLayout(choise_lay);


        retranslateUi(Customer);

        QMetaObject::connectSlotsByName(Customer);
    } // setupUi

    void retranslateUi(QWidget *Customer)
    {
        Customer->setWindowTitle(QApplication::translate("Customer", "Form", nullptr));
        exit_pb->setText(QApplication::translate("Customer", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        all_pb->setText(QApplication::translate("Customer", "\320\222\321\201\321\226 \320\260\320\262\321\202\320\276", nullptr));
        old_pb->setText(QApplication::translate("Customer", "\320\221-\320\262 \320\260\320\262\321\202\320\276", nullptr));
        new_pb->setText(QApplication::translate("Customer", "\320\235\320\276\320\262\321\226 \320\260\320\262\321\202\320\276", nullptr));
        greatsearch_pb->setText(QApplication::translate("Customer", "\320\240\320\276\320\267\321\210\320\270\321\200\320\265\320\275\320\270\320\271 \320\277\320\276\321\210\321\203\320\272", nullptr));
        search_pb->setText(QApplication::translate("Customer", "\320\237\320\276\321\210\321\203\320\272", nullptr));
        name_cb->setItemText(0, QApplication::translate("Customer", "\320\234\320\260\321\200\320\272\320\260 \320\260\320\262\321\202\320\276", nullptr));

        model_cb->setItemText(0, QApplication::translate("Customer", "\320\234\320\276\320\264\320\265\320\273\321\214 \320\260\320\262\321\202\320\276", nullptr));

    } // retranslateUi

};

namespace Ui {
    class Customer: public Ui_Customer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMER_H
