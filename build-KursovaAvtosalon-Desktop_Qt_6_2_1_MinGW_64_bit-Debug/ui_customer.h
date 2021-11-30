/********************************************************************************
** Form generated from reading UI file 'customer.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMER_H
#define UI_CUSTOMER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Customer
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *year_lay;
    QLabel *first_lbl;
    QLineEdit *fromyear_led;
    QLabel *last_lbl;
    QLineEdit *toyear_led;
    QLabel *first2_lbl;
    QSlider *first_sld;
    QLabel *last2_lbl;
    QSlider *last_sld;
    QHBoxLayout *price_lay;
    QLabel *firstprice_lbl;
    QLineEdit *fromprice_led;
    QLabel *lastprice_lbl;
    QLineEdit *toprice_led;
    QLabel *first2price_lbl;
    QSlider *firstprice_sld;
    QLabel *last2price_lbl;
    QSlider *lastprice_sld;
    QVBoxLayout *choise_lay;
    QComboBox *name_cb;
    QComboBox *model_cb;
    QHBoxLayout *buttons_lay;
    QPushButton *all_pb;
    QPushButton *old_pb;
    QPushButton *new_pb;
    QPushButton *greatsearch_pb;
    QPushButton *alternative_pb;
    QPushButton *search_pb;
    QLabel *price_lbl;
    QLabel *year_lbl;

    void setupUi(QWidget *Customer)
    {
        if (Customer->objectName().isEmpty())
            Customer->setObjectName(QString::fromUtf8("Customer"));
        Customer->resize(605, 543);
        gridLayout = new QGridLayout(Customer);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        year_lay = new QHBoxLayout();
        year_lay->setSpacing(5);
        year_lay->setObjectName(QString::fromUtf8("year_lay"));
        year_lay->setSizeConstraint(QLayout::SetFixedSize);
        year_lay->setContentsMargins(-1, 30, -1, 40);
        first_lbl = new QLabel(Customer);
        first_lbl->setObjectName(QString::fromUtf8("first_lbl"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(first_lbl->sizePolicy().hasHeightForWidth());
        first_lbl->setSizePolicy(sizePolicy);

        year_lay->addWidget(first_lbl);

        fromyear_led = new QLineEdit(Customer);
        fromyear_led->setObjectName(QString::fromUtf8("fromyear_led"));

        year_lay->addWidget(fromyear_led);

        last_lbl = new QLabel(Customer);
        last_lbl->setObjectName(QString::fromUtf8("last_lbl"));
        sizePolicy.setHeightForWidth(last_lbl->sizePolicy().hasHeightForWidth());
        last_lbl->setSizePolicy(sizePolicy);

        year_lay->addWidget(last_lbl);

        toyear_led = new QLineEdit(Customer);
        toyear_led->setObjectName(QString::fromUtf8("toyear_led"));

        year_lay->addWidget(toyear_led);

        first2_lbl = new QLabel(Customer);
        first2_lbl->setObjectName(QString::fromUtf8("first2_lbl"));
        sizePolicy.setHeightForWidth(first2_lbl->sizePolicy().hasHeightForWidth());
        first2_lbl->setSizePolicy(sizePolicy);

        year_lay->addWidget(first2_lbl);

        first_sld = new QSlider(Customer);
        first_sld->setObjectName(QString::fromUtf8("first_sld"));
        first_sld->setCursor(QCursor(Qt::PointingHandCursor));
        first_sld->setOrientation(Qt::Horizontal);

        year_lay->addWidget(first_sld);

        last2_lbl = new QLabel(Customer);
        last2_lbl->setObjectName(QString::fromUtf8("last2_lbl"));
        sizePolicy.setHeightForWidth(last2_lbl->sizePolicy().hasHeightForWidth());
        last2_lbl->setSizePolicy(sizePolicy);

        year_lay->addWidget(last2_lbl);

        last_sld = new QSlider(Customer);
        last_sld->setObjectName(QString::fromUtf8("last_sld"));
        last_sld->setCursor(QCursor(Qt::PointingHandCursor));
        last_sld->setOrientation(Qt::Horizontal);

        year_lay->addWidget(last_sld);


        gridLayout->addLayout(year_lay, 3, 0, 1, 1);

        price_lay = new QHBoxLayout();
        price_lay->setSpacing(5);
        price_lay->setObjectName(QString::fromUtf8("price_lay"));
        price_lay->setSizeConstraint(QLayout::SetFixedSize);
        price_lay->setContentsMargins(-1, 30, -1, 40);
        firstprice_lbl = new QLabel(Customer);
        firstprice_lbl->setObjectName(QString::fromUtf8("firstprice_lbl"));
        sizePolicy.setHeightForWidth(firstprice_lbl->sizePolicy().hasHeightForWidth());
        firstprice_lbl->setSizePolicy(sizePolicy);

        price_lay->addWidget(firstprice_lbl);

        fromprice_led = new QLineEdit(Customer);
        fromprice_led->setObjectName(QString::fromUtf8("fromprice_led"));

        price_lay->addWidget(fromprice_led);

        lastprice_lbl = new QLabel(Customer);
        lastprice_lbl->setObjectName(QString::fromUtf8("lastprice_lbl"));
        sizePolicy.setHeightForWidth(lastprice_lbl->sizePolicy().hasHeightForWidth());
        lastprice_lbl->setSizePolicy(sizePolicy);

        price_lay->addWidget(lastprice_lbl);

        toprice_led = new QLineEdit(Customer);
        toprice_led->setObjectName(QString::fromUtf8("toprice_led"));

        price_lay->addWidget(toprice_led);

        first2price_lbl = new QLabel(Customer);
        first2price_lbl->setObjectName(QString::fromUtf8("first2price_lbl"));
        sizePolicy.setHeightForWidth(first2price_lbl->sizePolicy().hasHeightForWidth());
        first2price_lbl->setSizePolicy(sizePolicy);

        price_lay->addWidget(first2price_lbl);

        firstprice_sld = new QSlider(Customer);
        firstprice_sld->setObjectName(QString::fromUtf8("firstprice_sld"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(firstprice_sld->sizePolicy().hasHeightForWidth());
        firstprice_sld->setSizePolicy(sizePolicy1);
        firstprice_sld->setCursor(QCursor(Qt::PointingHandCursor));
        firstprice_sld->setOrientation(Qt::Horizontal);

        price_lay->addWidget(firstprice_sld);

        last2price_lbl = new QLabel(Customer);
        last2price_lbl->setObjectName(QString::fromUtf8("last2price_lbl"));
        sizePolicy.setHeightForWidth(last2price_lbl->sizePolicy().hasHeightForWidth());
        last2price_lbl->setSizePolicy(sizePolicy);

        price_lay->addWidget(last2price_lbl);

        lastprice_sld = new QSlider(Customer);
        lastprice_sld->setObjectName(QString::fromUtf8("lastprice_sld"));
        lastprice_sld->setCursor(QCursor(Qt::PointingHandCursor));
        lastprice_sld->setOrientation(Qt::Horizontal);

        price_lay->addWidget(lastprice_sld);


        gridLayout->addLayout(price_lay, 5, 0, 1, 1);

        choise_lay = new QVBoxLayout();
        choise_lay->setObjectName(QString::fromUtf8("choise_lay"));
        choise_lay->setContentsMargins(-1, 30, -1, 40);
        name_cb = new QComboBox(Customer);
        name_cb->addItem(QString());
        name_cb->setObjectName(QString::fromUtf8("name_cb"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(name_cb->sizePolicy().hasHeightForWidth());
        name_cb->setSizePolicy(sizePolicy2);
        name_cb->setCursor(QCursor(Qt::PointingHandCursor));

        choise_lay->addWidget(name_cb);

        model_cb = new QComboBox(Customer);
        model_cb->addItem(QString());
        model_cb->setObjectName(QString::fromUtf8("model_cb"));
        sizePolicy2.setHeightForWidth(model_cb->sizePolicy().hasHeightForWidth());
        model_cb->setSizePolicy(sizePolicy2);
        model_cb->setCursor(QCursor(Qt::PointingHandCursor));

        choise_lay->addWidget(model_cb);


        gridLayout->addLayout(choise_lay, 1, 0, 1, 1);

        buttons_lay = new QHBoxLayout();
        buttons_lay->setObjectName(QString::fromUtf8("buttons_lay"));
        buttons_lay->setSizeConstraint(QLayout::SetFixedSize);
        buttons_lay->setContentsMargins(0, 30, 0, 40);
        all_pb = new QPushButton(Customer);
        all_pb->setObjectName(QString::fromUtf8("all_pb"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(all_pb->sizePolicy().hasHeightForWidth());
        all_pb->setSizePolicy(sizePolicy3);
        all_pb->setCursor(QCursor(Qt::PointingHandCursor));

        buttons_lay->addWidget(all_pb);

        old_pb = new QPushButton(Customer);
        old_pb->setObjectName(QString::fromUtf8("old_pb"));
        sizePolicy3.setHeightForWidth(old_pb->sizePolicy().hasHeightForWidth());
        old_pb->setSizePolicy(sizePolicy3);
        old_pb->setCursor(QCursor(Qt::PointingHandCursor));

        buttons_lay->addWidget(old_pb);

        new_pb = new QPushButton(Customer);
        new_pb->setObjectName(QString::fromUtf8("new_pb"));
        sizePolicy3.setHeightForWidth(new_pb->sizePolicy().hasHeightForWidth());
        new_pb->setSizePolicy(sizePolicy3);
        new_pb->setCursor(QCursor(Qt::PointingHandCursor));

        buttons_lay->addWidget(new_pb);

        greatsearch_pb = new QPushButton(Customer);
        greatsearch_pb->setObjectName(QString::fromUtf8("greatsearch_pb"));
        sizePolicy3.setHeightForWidth(greatsearch_pb->sizePolicy().hasHeightForWidth());
        greatsearch_pb->setSizePolicy(sizePolicy3);
        greatsearch_pb->setCursor(QCursor(Qt::PointingHandCursor));

        buttons_lay->addWidget(greatsearch_pb);

        alternative_pb = new QPushButton(Customer);
        alternative_pb->setObjectName(QString::fromUtf8("alternative_pb"));
        sizePolicy3.setHeightForWidth(alternative_pb->sizePolicy().hasHeightForWidth());
        alternative_pb->setSizePolicy(sizePolicy3);
        alternative_pb->setCursor(QCursor(Qt::PointingHandCursor));

        buttons_lay->addWidget(alternative_pb);

        search_pb = new QPushButton(Customer);
        search_pb->setObjectName(QString::fromUtf8("search_pb"));
        sizePolicy3.setHeightForWidth(search_pb->sizePolicy().hasHeightForWidth());
        search_pb->setSizePolicy(sizePolicy3);
        search_pb->setCursor(QCursor(Qt::PointingHandCursor));

        buttons_lay->addWidget(search_pb);


        gridLayout->addLayout(buttons_lay, 0, 0, 1, 1);

        price_lbl = new QLabel(Customer);
        price_lbl->setObjectName(QString::fromUtf8("price_lbl"));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        price_lbl->setFont(font);

        gridLayout->addWidget(price_lbl, 4, 0, 1, 1);

        year_lbl = new QLabel(Customer);
        year_lbl->setObjectName(QString::fromUtf8("year_lbl"));
        year_lbl->setFont(font);

        gridLayout->addWidget(year_lbl, 2, 0, 1, 1);


        retranslateUi(Customer);

        QMetaObject::connectSlotsByName(Customer);
    } // setupUi

    void retranslateUi(QWidget *Customer)
    {
        Customer->setWindowTitle(QCoreApplication::translate("Customer", "Form", nullptr));
        first_lbl->setText(QCoreApplication::translate("Customer", "\320\222\321\226\320\264:", nullptr));
        fromyear_led->setText(QString());
        last_lbl->setText(QCoreApplication::translate("Customer", "\320\224\320\276:", nullptr));
        toyear_led->setText(QString());
        first2_lbl->setText(QCoreApplication::translate("Customer", "\320\222\321\226\320\264:", nullptr));
        last2_lbl->setText(QCoreApplication::translate("Customer", "\320\224\320\276:", nullptr));
        firstprice_lbl->setText(QCoreApplication::translate("Customer", "\320\222\321\226\320\264:", nullptr));
        fromprice_led->setText(QString());
        lastprice_lbl->setText(QCoreApplication::translate("Customer", "\320\224\320\276:", nullptr));
        toprice_led->setText(QString());
        first2price_lbl->setText(QCoreApplication::translate("Customer", "\320\222\321\226\320\264:", nullptr));
        last2price_lbl->setText(QCoreApplication::translate("Customer", "\320\224\320\276:", nullptr));
        name_cb->setItemText(0, QCoreApplication::translate("Customer", "\320\234\320\260\321\200\320\272\320\260 \320\260\320\262\321\202\320\276", nullptr));

        model_cb->setItemText(0, QCoreApplication::translate("Customer", "\320\234\320\276\320\264\320\265\320\273\321\214 \320\260\320\262\321\202\320\276", nullptr));

        all_pb->setText(QCoreApplication::translate("Customer", "\320\222\321\201\321\226 \320\260\320\262\321\202\320\276", nullptr));
        old_pb->setText(QCoreApplication::translate("Customer", "\320\221/\321\203 \320\260\320\262\321\202\320\276", nullptr));
        new_pb->setText(QCoreApplication::translate("Customer", "\320\235\320\276\320\262\321\226 \320\260\320\262\321\202\320\276", nullptr));
        greatsearch_pb->setText(QCoreApplication::translate("Customer", "\320\240\320\276\320\267\321\210\320\270\321\200\320\265\320\275\320\270\320\271 \320\277\320\276\321\210\321\203\320\272", nullptr));
        alternative_pb->setText(QCoreApplication::translate("Customer", "\320\220\320\273\321\214\321\202\320\265\321\200\320\275\320\260\321\202\320\270\320\262\320\275\320\265 \320\274\320\265\320\275\321\216", nullptr));
        search_pb->setText(QCoreApplication::translate("Customer", "\320\237\320\276\321\210\321\203\320\272", nullptr));
        price_lbl->setText(QCoreApplication::translate("Customer", "\320\246\321\226\320\275\320\260", nullptr));
        year_lbl->setText(QCoreApplication::translate("Customer", "\320\240\321\226\320\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Customer: public Ui_Customer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMER_H
