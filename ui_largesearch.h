/********************************************************************************
** Form generated from reading UI file 'largesearch.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LARGESEARCH_H
#define UI_LARGESEARCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LargeSearch
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *quality_lay;
    QLabel *quality_lbl;
    QComboBox *quality_cb;
    QHBoxLayout *type_lay;
    QLabel *type_lbl;
    QComboBox *type_cb;
    QHBoxLayout *country_lay;
    QLabel *country_lbl;
    QComboBox *country_cb;
    QHBoxLayout *dtp_lay;
    QLabel *dtp_lbl;
    QComboBox *dtp_cb;
    QHBoxLayout *stan_lay;
    QLabel *stan_lbl;
    QComboBox *stan_cb;
    QHBoxLayout *fuel_lay;
    QLabel *fuel_lbl;
    QComboBox *fuel_cb;
    QHBoxLayout *kpp_lay;
    QLabel *kpp_lbl;
    QComboBox *kpp_cb;
    QHBoxLayout *drive_lay;
    QLabel *drive_lbl;
    QComboBox *drive_cb;
    QHBoxLayout *price_lay;
    QRadioButton *price_rb;
    QLabel *price_lbl;
    QLabel *fromprice_lbl;
    QLineEdit *fromprice_led;
    QLabel *toprice_lbl;
    QLineEdit *toprice_led;
    QHBoxLayout *year_lay;
    QRadioButton *year_rb;
    QLabel *year_lbl;
    QLabel *fromyear_lbl;
    QLineEdit *fromyear_led;
    QLabel *toyear_lbl;
    QLineEdit *toyear_led;
    QHBoxLayout *fuelcost_lay;
    QRadioButton *fuelcost_rb;
    QLabel *fuelcost_lbl;
    QLabel *fromfuelcost_lbl;
    QLineEdit *fromfuelcost_led;
    QLabel *tofuelcost_lbl;
    QLineEdit *tofuelcost_led;
    QHBoxLayout *capacity_lay;
    QRadioButton *capacity_rb;
    QLabel *capacity_lbl;
    QLabel *fromcapacity_lbl;
    QLineEdit *fromcapacity_led;
    QLabel *tocapacity_lbl;
    QLineEdit *tocapacity_led;
    QHBoxLayout *power_lay;
    QRadioButton *power_rb;
    QLabel *power_lbl;
    QLabel *frompower_lbl;
    QLineEdit *frompower_led;
    QLabel *topower_lbl;
    QLineEdit *topower_led;
    QHBoxLayout *run_lay;
    QRadioButton *run_rb;
    QLabel *run_lbl;
    QLabel *fromrun_lbl;
    QLineEdit *fromrun_led;
    QLabel *torun_lbl;
    QLineEdit *torun_led;
    QHBoxLayout *doors_lay;
    QLabel *doors_lbl;
    QComboBox *doors_cb;
    QHBoxLayout *places_lay;
    QLabel *places_lbl;
    QComboBox *places_cb;
    QHBoxLayout *color_lay;
    QLabel *color_lbl;
    QComboBox *color_cb;
    QPushButton *search_pb;

    void setupUi(QDialog *LargeSearch)
    {
        if (LargeSearch->objectName().isEmpty())
            LargeSearch->setObjectName(QString::fromUtf8("LargeSearch"));
        LargeSearch->resize(662, 609);
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        LargeSearch->setFont(font);
        verticalLayout = new QVBoxLayout(LargeSearch);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        quality_lay = new QHBoxLayout();
        quality_lay->setObjectName(QString::fromUtf8("quality_lay"));
        quality_lbl = new QLabel(LargeSearch);
        quality_lbl->setObjectName(QString::fromUtf8("quality_lbl"));
        quality_lbl->setFont(font);

        quality_lay->addWidget(quality_lbl);

        quality_cb = new QComboBox(LargeSearch);
        quality_cb->setObjectName(QString::fromUtf8("quality_cb"));
        quality_cb->setFont(font);

        quality_lay->addWidget(quality_cb);


        verticalLayout->addLayout(quality_lay);

        type_lay = new QHBoxLayout();
        type_lay->setObjectName(QString::fromUtf8("type_lay"));
        type_lbl = new QLabel(LargeSearch);
        type_lbl->setObjectName(QString::fromUtf8("type_lbl"));
        type_lbl->setFont(font);

        type_lay->addWidget(type_lbl);

        type_cb = new QComboBox(LargeSearch);
        type_cb->setObjectName(QString::fromUtf8("type_cb"));
        type_cb->setFont(font);

        type_lay->addWidget(type_cb);


        verticalLayout->addLayout(type_lay);

        country_lay = new QHBoxLayout();
        country_lay->setObjectName(QString::fromUtf8("country_lay"));
        country_lbl = new QLabel(LargeSearch);
        country_lbl->setObjectName(QString::fromUtf8("country_lbl"));
        country_lbl->setFont(font);

        country_lay->addWidget(country_lbl);

        country_cb = new QComboBox(LargeSearch);
        country_cb->setObjectName(QString::fromUtf8("country_cb"));
        country_cb->setFont(font);

        country_lay->addWidget(country_cb);


        verticalLayout->addLayout(country_lay);

        dtp_lay = new QHBoxLayout();
        dtp_lay->setObjectName(QString::fromUtf8("dtp_lay"));
        dtp_lbl = new QLabel(LargeSearch);
        dtp_lbl->setObjectName(QString::fromUtf8("dtp_lbl"));
        dtp_lbl->setFont(font);

        dtp_lay->addWidget(dtp_lbl);

        dtp_cb = new QComboBox(LargeSearch);
        dtp_cb->setObjectName(QString::fromUtf8("dtp_cb"));
        dtp_cb->setFont(font);

        dtp_lay->addWidget(dtp_cb);


        verticalLayout->addLayout(dtp_lay);

        stan_lay = new QHBoxLayout();
        stan_lay->setObjectName(QString::fromUtf8("stan_lay"));
        stan_lbl = new QLabel(LargeSearch);
        stan_lbl->setObjectName(QString::fromUtf8("stan_lbl"));
        stan_lbl->setFont(font);

        stan_lay->addWidget(stan_lbl);

        stan_cb = new QComboBox(LargeSearch);
        stan_cb->setObjectName(QString::fromUtf8("stan_cb"));
        stan_cb->setFont(font);

        stan_lay->addWidget(stan_cb);


        verticalLayout->addLayout(stan_lay);

        fuel_lay = new QHBoxLayout();
        fuel_lay->setObjectName(QString::fromUtf8("fuel_lay"));
        fuel_lbl = new QLabel(LargeSearch);
        fuel_lbl->setObjectName(QString::fromUtf8("fuel_lbl"));
        fuel_lbl->setFont(font);

        fuel_lay->addWidget(fuel_lbl);

        fuel_cb = new QComboBox(LargeSearch);
        fuel_cb->setObjectName(QString::fromUtf8("fuel_cb"));
        fuel_cb->setFont(font);

        fuel_lay->addWidget(fuel_cb);


        verticalLayout->addLayout(fuel_lay);

        kpp_lay = new QHBoxLayout();
        kpp_lay->setObjectName(QString::fromUtf8("kpp_lay"));
        kpp_lbl = new QLabel(LargeSearch);
        kpp_lbl->setObjectName(QString::fromUtf8("kpp_lbl"));
        kpp_lbl->setFont(font);

        kpp_lay->addWidget(kpp_lbl);

        kpp_cb = new QComboBox(LargeSearch);
        kpp_cb->setObjectName(QString::fromUtf8("kpp_cb"));
        kpp_cb->setFont(font);

        kpp_lay->addWidget(kpp_cb);


        verticalLayout->addLayout(kpp_lay);

        drive_lay = new QHBoxLayout();
        drive_lay->setObjectName(QString::fromUtf8("drive_lay"));
        drive_lbl = new QLabel(LargeSearch);
        drive_lbl->setObjectName(QString::fromUtf8("drive_lbl"));
        drive_lbl->setFont(font);

        drive_lay->addWidget(drive_lbl);

        drive_cb = new QComboBox(LargeSearch);
        drive_cb->setObjectName(QString::fromUtf8("drive_cb"));
        drive_cb->setFont(font);

        drive_lay->addWidget(drive_cb);


        verticalLayout->addLayout(drive_lay);

        price_lay = new QHBoxLayout();
        price_lay->setObjectName(QString::fromUtf8("price_lay"));
        price_rb = new QRadioButton(LargeSearch);
        price_rb->setObjectName(QString::fromUtf8("price_rb"));
        price_rb->setFont(font);

        price_lay->addWidget(price_rb);

        price_lbl = new QLabel(LargeSearch);
        price_lbl->setObjectName(QString::fromUtf8("price_lbl"));
        price_lbl->setFont(font);

        price_lay->addWidget(price_lbl);

        fromprice_lbl = new QLabel(LargeSearch);
        fromprice_lbl->setObjectName(QString::fromUtf8("fromprice_lbl"));
        fromprice_lbl->setFont(font);

        price_lay->addWidget(fromprice_lbl);

        fromprice_led = new QLineEdit(LargeSearch);
        fromprice_led->setObjectName(QString::fromUtf8("fromprice_led"));
        fromprice_led->setFont(font);

        price_lay->addWidget(fromprice_led);

        toprice_lbl = new QLabel(LargeSearch);
        toprice_lbl->setObjectName(QString::fromUtf8("toprice_lbl"));
        toprice_lbl->setFont(font);

        price_lay->addWidget(toprice_lbl);

        toprice_led = new QLineEdit(LargeSearch);
        toprice_led->setObjectName(QString::fromUtf8("toprice_led"));
        toprice_led->setFont(font);

        price_lay->addWidget(toprice_led);

        price_lay->setStretch(1, 1);

        verticalLayout->addLayout(price_lay);

        year_lay = new QHBoxLayout();
        year_lay->setObjectName(QString::fromUtf8("year_lay"));
        year_rb = new QRadioButton(LargeSearch);
        year_rb->setObjectName(QString::fromUtf8("year_rb"));
        year_rb->setFont(font);

        year_lay->addWidget(year_rb);

        year_lbl = new QLabel(LargeSearch);
        year_lbl->setObjectName(QString::fromUtf8("year_lbl"));
        year_lbl->setFont(font);

        year_lay->addWidget(year_lbl);

        fromyear_lbl = new QLabel(LargeSearch);
        fromyear_lbl->setObjectName(QString::fromUtf8("fromyear_lbl"));
        fromyear_lbl->setFont(font);

        year_lay->addWidget(fromyear_lbl);

        fromyear_led = new QLineEdit(LargeSearch);
        fromyear_led->setObjectName(QString::fromUtf8("fromyear_led"));
        fromyear_led->setFont(font);

        year_lay->addWidget(fromyear_led);

        toyear_lbl = new QLabel(LargeSearch);
        toyear_lbl->setObjectName(QString::fromUtf8("toyear_lbl"));
        toyear_lbl->setFont(font);

        year_lay->addWidget(toyear_lbl);

        toyear_led = new QLineEdit(LargeSearch);
        toyear_led->setObjectName(QString::fromUtf8("toyear_led"));
        toyear_led->setFont(font);

        year_lay->addWidget(toyear_led);

        year_lay->setStretch(1, 1);

        verticalLayout->addLayout(year_lay);

        fuelcost_lay = new QHBoxLayout();
        fuelcost_lay->setObjectName(QString::fromUtf8("fuelcost_lay"));
        fuelcost_rb = new QRadioButton(LargeSearch);
        fuelcost_rb->setObjectName(QString::fromUtf8("fuelcost_rb"));
        fuelcost_rb->setFont(font);

        fuelcost_lay->addWidget(fuelcost_rb);

        fuelcost_lbl = new QLabel(LargeSearch);
        fuelcost_lbl->setObjectName(QString::fromUtf8("fuelcost_lbl"));
        fuelcost_lbl->setFont(font);

        fuelcost_lay->addWidget(fuelcost_lbl);

        fromfuelcost_lbl = new QLabel(LargeSearch);
        fromfuelcost_lbl->setObjectName(QString::fromUtf8("fromfuelcost_lbl"));
        fromfuelcost_lbl->setFont(font);

        fuelcost_lay->addWidget(fromfuelcost_lbl);

        fromfuelcost_led = new QLineEdit(LargeSearch);
        fromfuelcost_led->setObjectName(QString::fromUtf8("fromfuelcost_led"));
        fromfuelcost_led->setFont(font);

        fuelcost_lay->addWidget(fromfuelcost_led);

        tofuelcost_lbl = new QLabel(LargeSearch);
        tofuelcost_lbl->setObjectName(QString::fromUtf8("tofuelcost_lbl"));
        tofuelcost_lbl->setFont(font);

        fuelcost_lay->addWidget(tofuelcost_lbl);

        tofuelcost_led = new QLineEdit(LargeSearch);
        tofuelcost_led->setObjectName(QString::fromUtf8("tofuelcost_led"));
        tofuelcost_led->setFont(font);

        fuelcost_lay->addWidget(tofuelcost_led);

        fuelcost_lay->setStretch(1, 2);

        verticalLayout->addLayout(fuelcost_lay);

        capacity_lay = new QHBoxLayout();
        capacity_lay->setObjectName(QString::fromUtf8("capacity_lay"));
        capacity_rb = new QRadioButton(LargeSearch);
        capacity_rb->setObjectName(QString::fromUtf8("capacity_rb"));
        capacity_rb->setFont(font);

        capacity_lay->addWidget(capacity_rb);

        capacity_lbl = new QLabel(LargeSearch);
        capacity_lbl->setObjectName(QString::fromUtf8("capacity_lbl"));
        capacity_lbl->setFont(font);

        capacity_lay->addWidget(capacity_lbl);

        fromcapacity_lbl = new QLabel(LargeSearch);
        fromcapacity_lbl->setObjectName(QString::fromUtf8("fromcapacity_lbl"));
        fromcapacity_lbl->setFont(font);

        capacity_lay->addWidget(fromcapacity_lbl);

        fromcapacity_led = new QLineEdit(LargeSearch);
        fromcapacity_led->setObjectName(QString::fromUtf8("fromcapacity_led"));
        fromcapacity_led->setFont(font);

        capacity_lay->addWidget(fromcapacity_led);

        tocapacity_lbl = new QLabel(LargeSearch);
        tocapacity_lbl->setObjectName(QString::fromUtf8("tocapacity_lbl"));
        tocapacity_lbl->setFont(font);

        capacity_lay->addWidget(tocapacity_lbl);

        tocapacity_led = new QLineEdit(LargeSearch);
        tocapacity_led->setObjectName(QString::fromUtf8("tocapacity_led"));
        tocapacity_led->setFont(font);

        capacity_lay->addWidget(tocapacity_led);

        capacity_lay->setStretch(1, 2);

        verticalLayout->addLayout(capacity_lay);

        power_lay = new QHBoxLayout();
        power_lay->setObjectName(QString::fromUtf8("power_lay"));
        power_rb = new QRadioButton(LargeSearch);
        power_rb->setObjectName(QString::fromUtf8("power_rb"));
        power_rb->setFont(font);

        power_lay->addWidget(power_rb);

        power_lbl = new QLabel(LargeSearch);
        power_lbl->setObjectName(QString::fromUtf8("power_lbl"));
        power_lbl->setFont(font);

        power_lay->addWidget(power_lbl);

        frompower_lbl = new QLabel(LargeSearch);
        frompower_lbl->setObjectName(QString::fromUtf8("frompower_lbl"));
        frompower_lbl->setFont(font);

        power_lay->addWidget(frompower_lbl);

        frompower_led = new QLineEdit(LargeSearch);
        frompower_led->setObjectName(QString::fromUtf8("frompower_led"));
        frompower_led->setFont(font);

        power_lay->addWidget(frompower_led);

        topower_lbl = new QLabel(LargeSearch);
        topower_lbl->setObjectName(QString::fromUtf8("topower_lbl"));
        topower_lbl->setFont(font);

        power_lay->addWidget(topower_lbl);

        topower_led = new QLineEdit(LargeSearch);
        topower_led->setObjectName(QString::fromUtf8("topower_led"));
        topower_led->setFont(font);

        power_lay->addWidget(topower_led);

        power_lay->setStretch(1, 2);

        verticalLayout->addLayout(power_lay);

        run_lay = new QHBoxLayout();
        run_lay->setObjectName(QString::fromUtf8("run_lay"));
        run_rb = new QRadioButton(LargeSearch);
        run_rb->setObjectName(QString::fromUtf8("run_rb"));
        run_rb->setFont(font);

        run_lay->addWidget(run_rb);

        run_lbl = new QLabel(LargeSearch);
        run_lbl->setObjectName(QString::fromUtf8("run_lbl"));
        run_lbl->setFont(font);

        run_lay->addWidget(run_lbl);

        fromrun_lbl = new QLabel(LargeSearch);
        fromrun_lbl->setObjectName(QString::fromUtf8("fromrun_lbl"));
        fromrun_lbl->setFont(font);

        run_lay->addWidget(fromrun_lbl);

        fromrun_led = new QLineEdit(LargeSearch);
        fromrun_led->setObjectName(QString::fromUtf8("fromrun_led"));
        fromrun_led->setFont(font);

        run_lay->addWidget(fromrun_led);

        torun_lbl = new QLabel(LargeSearch);
        torun_lbl->setObjectName(QString::fromUtf8("torun_lbl"));
        torun_lbl->setFont(font);

        run_lay->addWidget(torun_lbl);

        torun_led = new QLineEdit(LargeSearch);
        torun_led->setObjectName(QString::fromUtf8("torun_led"));
        torun_led->setFont(font);

        run_lay->addWidget(torun_led);

        run_lay->setStretch(1, 2);

        verticalLayout->addLayout(run_lay);

        doors_lay = new QHBoxLayout();
        doors_lay->setObjectName(QString::fromUtf8("doors_lay"));
        doors_lbl = new QLabel(LargeSearch);
        doors_lbl->setObjectName(QString::fromUtf8("doors_lbl"));
        doors_lbl->setFont(font);

        doors_lay->addWidget(doors_lbl);

        doors_cb = new QComboBox(LargeSearch);
        doors_cb->setObjectName(QString::fromUtf8("doors_cb"));
        doors_cb->setFont(font);

        doors_lay->addWidget(doors_cb);


        verticalLayout->addLayout(doors_lay);

        places_lay = new QHBoxLayout();
        places_lay->setObjectName(QString::fromUtf8("places_lay"));
        places_lbl = new QLabel(LargeSearch);
        places_lbl->setObjectName(QString::fromUtf8("places_lbl"));
        places_lbl->setFont(font);

        places_lay->addWidget(places_lbl);

        places_cb = new QComboBox(LargeSearch);
        places_cb->setObjectName(QString::fromUtf8("places_cb"));
        places_cb->setFont(font);

        places_lay->addWidget(places_cb);


        verticalLayout->addLayout(places_lay);

        color_lay = new QHBoxLayout();
        color_lay->setObjectName(QString::fromUtf8("color_lay"));
        color_lbl = new QLabel(LargeSearch);
        color_lbl->setObjectName(QString::fromUtf8("color_lbl"));
        color_lbl->setFont(font);

        color_lay->addWidget(color_lbl);

        color_cb = new QComboBox(LargeSearch);
        color_cb->setObjectName(QString::fromUtf8("color_cb"));
        color_cb->setFont(font);

        color_lay->addWidget(color_cb);


        verticalLayout->addLayout(color_lay);

        search_pb = new QPushButton(LargeSearch);
        search_pb->setObjectName(QString::fromUtf8("search_pb"));
        search_pb->setFont(font);

        verticalLayout->addWidget(search_pb);


        retranslateUi(LargeSearch);

        QMetaObject::connectSlotsByName(LargeSearch);
    } // setupUi

    void retranslateUi(QDialog *LargeSearch)
    {
        LargeSearch->setWindowTitle(QApplication::translate("LargeSearch", "Dialog", nullptr));
        quality_lbl->setText(QApplication::translate("LargeSearch", "\320\257\320\272\321\226\321\201\321\202\321\214", nullptr));
        type_lbl->setText(QApplication::translate("LargeSearch", "\320\242\320\270\320\277 \320\272\321\203\320\267\320\276\320\262\320\260", nullptr));
        country_lbl->setText(QApplication::translate("LargeSearch", "\320\232\321\200\320\260\321\227\320\275\320\260 \320\262\320\270\321\200\320\276\320\261\320\275\320\270\320\272", nullptr));
        dtp_lbl->setText(QApplication::translate("LargeSearch", "\320\243\321\207\320\260\321\201\321\202\321\214 \320\262 \320\224\320\242\320\237", nullptr));
        stan_lbl->setText(QApplication::translate("LargeSearch", "\320\241\321\202\320\260\320\275 ", nullptr));
        fuel_lbl->setText(QApplication::translate("LargeSearch", "\320\242\320\270\320\277 \320\277\320\260\320\273\320\270\320\262\320\260", nullptr));
        kpp_lbl->setText(QApplication::translate("LargeSearch", "\320\242\320\270\320\277 \320\272\320\276\321\200\320\276\320\261\320\272\320\270 \320\277\320\265\321\200\320\265\320\264\320\260\321\207", nullptr));
        drive_lbl->setText(QApplication::translate("LargeSearch", "\320\242\320\270\320\277 \320\277\321\200\320\270\320\262\320\276\320\264\321\203", nullptr));
        price_rb->setText(QString());
        price_lbl->setText(QApplication::translate("LargeSearch", "\320\246\321\226\320\275\320\260", nullptr));
        fromprice_lbl->setText(QApplication::translate("LargeSearch", "\320\222\321\226\320\264:", nullptr));
        toprice_lbl->setText(QApplication::translate("LargeSearch", "\320\224\320\276:", nullptr));
        year_rb->setText(QString());
        year_lbl->setText(QApplication::translate("LargeSearch", "\320\240\321\226\320\272", nullptr));
        fromyear_lbl->setText(QApplication::translate("LargeSearch", "\320\222\321\226\320\264:", nullptr));
        toyear_lbl->setText(QApplication::translate("LargeSearch", "\320\224\320\276:", nullptr));
        fuelcost_rb->setText(QString());
        fuelcost_lbl->setText(QApplication::translate("LargeSearch", "\320\222\320\270\321\202\321\200\320\260\321\202\320\260 \320\277\320\260\320\273\320\270\320\262\320\260 \320\275\320\260 100\320\272\320\274", nullptr));
        fromfuelcost_lbl->setText(QApplication::translate("LargeSearch", "\320\222\321\226\320\264:", nullptr));
        tofuelcost_lbl->setText(QApplication::translate("LargeSearch", "\320\224\320\276:", nullptr));
        capacity_rb->setText(QString());
        capacity_lbl->setText(QApplication::translate("LargeSearch", "\320\236\320\261'\321\224\320\274 \320\264\320\262\320\270\320\263\321\203\320\275\320\260", nullptr));
        fromcapacity_lbl->setText(QApplication::translate("LargeSearch", "\320\222\321\226\320\264:", nullptr));
        tocapacity_lbl->setText(QApplication::translate("LargeSearch", "\320\224\320\276:", nullptr));
        power_rb->setText(QString());
        power_lbl->setText(QApplication::translate("LargeSearch", "\320\237\320\276\321\202\321\203\320\266\320\275\321\226\321\201\321\202\321\214 \320\264\320\262\320\270\320\263\321\203\320\275\320\260", nullptr));
        frompower_lbl->setText(QApplication::translate("LargeSearch", "\320\222\321\226\320\264:", nullptr));
        topower_lbl->setText(QApplication::translate("LargeSearch", "\320\224\320\276:", nullptr));
        run_rb->setText(QString());
        run_lbl->setText(QApplication::translate("LargeSearch", "\320\237\321\200\320\276\320\261\321\226\320\263", nullptr));
        fromrun_lbl->setText(QApplication::translate("LargeSearch", "\320\222\321\226\320\264:", nullptr));
        torun_lbl->setText(QApplication::translate("LargeSearch", "\320\224\320\276:", nullptr));
        doors_lbl->setText(QApplication::translate("LargeSearch", "\320\232\321\226\320\273\321\214\320\272\321\226\321\201\321\202\321\214 \320\264\320\262\320\265\321\200\320\265\320\271", nullptr));
        places_lbl->setText(QApplication::translate("LargeSearch", "\320\232\321\226\320\273\321\214\320\272\321\226\321\201\321\202\321\214 \320\274\321\226\321\201\321\206\321\214", nullptr));
        color_lbl->setText(QApplication::translate("LargeSearch", "\320\232\320\276\320\273\321\226\321\200", nullptr));
        search_pb->setText(QApplication::translate("LargeSearch", "\320\237\320\276\321\210\321\203\320\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LargeSearch: public Ui_LargeSearch {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LARGESEARCH_H
