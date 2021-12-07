/********************************************************************************
** Form generated from reading UI file 'add.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_H
#define UI_ADD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Add
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *quality_lay;
    QLabel *quality_lbl;
    QLineEdit *quality_led;
    QHBoxLayout *type_lay;
    QLabel *type_lbl;
    QLineEdit *type_led;
    QHBoxLayout *country_lay;
    QLabel *country_lbl;
    QLineEdit *country_led;
    QHBoxLayout *marka_lay;
    QLabel *marka_lbl;
    QLineEdit *marka_led;
    QHBoxLayout *model_lay;
    QLabel *model_lbl;
    QLineEdit *model_led;
    QHBoxLayout *year_lay;
    QLabel *year_lbl;
    QLineEdit *year_led;
    QHBoxLayout *price_lay;
    QLabel *price_lbl;
    QLineEdit *price_led;
    QHBoxLayout *dtp_lay;
    QLabel *dtp_lbl;
    QLineEdit *dtp_led;
    QHBoxLayout *stan_lay;
    QLabel *stan_lbl;
    QLineEdit *stan_led;
    QHBoxLayout *fuel_lay;
    QLabel *fuel_lbl;
    QLineEdit *fuel_led;
    QHBoxLayout *kpp_lay;
    QLabel *kpp_lbl;
    QLineEdit *kpp_led;
    QHBoxLayout *drive_lay;
    QLabel *drive_lbl;
    QLineEdit *drive_led;
    QHBoxLayout *fuelcost_lay;
    QLabel *fuelcost_lbl;
    QLineEdit *fuelcost_led;
    QHBoxLayout *capacity_lay;
    QLabel *capacity_lbl;
    QLineEdit *capacity_led;
    QHBoxLayout *power_lay;
    QLabel *power_lbl;
    QLineEdit *power_led;
    QHBoxLayout *run_lay;
    QLabel *run_lbl;
    QLineEdit *run_led;
    QHBoxLayout *doors_lay;
    QLabel *doors_lbl;
    QLineEdit *doors_led;
    QHBoxLayout *places_lay;
    QLabel *places_lbl;
    QLineEdit *places_led;
    QHBoxLayout *horizontalLayout;
    QLabel *vincode_lbl;
    QLineEdit *vincode_led;
    QHBoxLayout *color_lay;
    QLabel *color_lbl;
    QLineEdit *color_led;
    QHBoxLayout *pathpicture_lay;
    QLabel *pathpicture_lbl;
    QLineEdit *pathpicture_led;
    QPushButton *pathpicture_pb;
    QHBoxLayout *pb_lay;
    QPushButton *cancel_pb;
    QPushButton *ok_pb;

    void setupUi(QDialog *Add)
    {
        if (Add->objectName().isEmpty())
            Add->setObjectName(QString::fromUtf8("Add"));
        Add->resize(635, 716);
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        Add->setFont(font);
        verticalLayout = new QVBoxLayout(Add);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        quality_lay = new QHBoxLayout();
        quality_lay->setObjectName(QString::fromUtf8("quality_lay"));
        quality_lbl = new QLabel(Add);
        quality_lbl->setObjectName(QString::fromUtf8("quality_lbl"));

        quality_lay->addWidget(quality_lbl);

        quality_led = new QLineEdit(Add);
        quality_led->setObjectName(QString::fromUtf8("quality_led"));

        quality_lay->addWidget(quality_led);


        verticalLayout->addLayout(quality_lay);

        type_lay = new QHBoxLayout();
        type_lay->setObjectName(QString::fromUtf8("type_lay"));
        type_lbl = new QLabel(Add);
        type_lbl->setObjectName(QString::fromUtf8("type_lbl"));

        type_lay->addWidget(type_lbl);

        type_led = new QLineEdit(Add);
        type_led->setObjectName(QString::fromUtf8("type_led"));

        type_lay->addWidget(type_led);


        verticalLayout->addLayout(type_lay);

        country_lay = new QHBoxLayout();
        country_lay->setObjectName(QString::fromUtf8("country_lay"));
        country_lbl = new QLabel(Add);
        country_lbl->setObjectName(QString::fromUtf8("country_lbl"));

        country_lay->addWidget(country_lbl);

        country_led = new QLineEdit(Add);
        country_led->setObjectName(QString::fromUtf8("country_led"));

        country_lay->addWidget(country_led);


        verticalLayout->addLayout(country_lay);

        marka_lay = new QHBoxLayout();
        marka_lay->setObjectName(QString::fromUtf8("marka_lay"));
        marka_lbl = new QLabel(Add);
        marka_lbl->setObjectName(QString::fromUtf8("marka_lbl"));

        marka_lay->addWidget(marka_lbl);

        marka_led = new QLineEdit(Add);
        marka_led->setObjectName(QString::fromUtf8("marka_led"));

        marka_lay->addWidget(marka_led);


        verticalLayout->addLayout(marka_lay);

        model_lay = new QHBoxLayout();
        model_lay->setObjectName(QString::fromUtf8("model_lay"));
        model_lbl = new QLabel(Add);
        model_lbl->setObjectName(QString::fromUtf8("model_lbl"));

        model_lay->addWidget(model_lbl);

        model_led = new QLineEdit(Add);
        model_led->setObjectName(QString::fromUtf8("model_led"));

        model_lay->addWidget(model_led);


        verticalLayout->addLayout(model_lay);

        year_lay = new QHBoxLayout();
        year_lay->setObjectName(QString::fromUtf8("year_lay"));
        year_lbl = new QLabel(Add);
        year_lbl->setObjectName(QString::fromUtf8("year_lbl"));

        year_lay->addWidget(year_lbl);

        year_led = new QLineEdit(Add);
        year_led->setObjectName(QString::fromUtf8("year_led"));

        year_lay->addWidget(year_led);


        verticalLayout->addLayout(year_lay);

        price_lay = new QHBoxLayout();
        price_lay->setObjectName(QString::fromUtf8("price_lay"));
        price_lbl = new QLabel(Add);
        price_lbl->setObjectName(QString::fromUtf8("price_lbl"));

        price_lay->addWidget(price_lbl);

        price_led = new QLineEdit(Add);
        price_led->setObjectName(QString::fromUtf8("price_led"));

        price_lay->addWidget(price_led);


        verticalLayout->addLayout(price_lay);

        dtp_lay = new QHBoxLayout();
        dtp_lay->setObjectName(QString::fromUtf8("dtp_lay"));
        dtp_lbl = new QLabel(Add);
        dtp_lbl->setObjectName(QString::fromUtf8("dtp_lbl"));

        dtp_lay->addWidget(dtp_lbl);

        dtp_led = new QLineEdit(Add);
        dtp_led->setObjectName(QString::fromUtf8("dtp_led"));

        dtp_lay->addWidget(dtp_led);


        verticalLayout->addLayout(dtp_lay);

        stan_lay = new QHBoxLayout();
        stan_lay->setObjectName(QString::fromUtf8("stan_lay"));
        stan_lbl = new QLabel(Add);
        stan_lbl->setObjectName(QString::fromUtf8("stan_lbl"));

        stan_lay->addWidget(stan_lbl);

        stan_led = new QLineEdit(Add);
        stan_led->setObjectName(QString::fromUtf8("stan_led"));

        stan_lay->addWidget(stan_led);


        verticalLayout->addLayout(stan_lay);

        fuel_lay = new QHBoxLayout();
        fuel_lay->setObjectName(QString::fromUtf8("fuel_lay"));
        fuel_lbl = new QLabel(Add);
        fuel_lbl->setObjectName(QString::fromUtf8("fuel_lbl"));

        fuel_lay->addWidget(fuel_lbl);

        fuel_led = new QLineEdit(Add);
        fuel_led->setObjectName(QString::fromUtf8("fuel_led"));

        fuel_lay->addWidget(fuel_led);


        verticalLayout->addLayout(fuel_lay);

        kpp_lay = new QHBoxLayout();
        kpp_lay->setObjectName(QString::fromUtf8("kpp_lay"));
        kpp_lbl = new QLabel(Add);
        kpp_lbl->setObjectName(QString::fromUtf8("kpp_lbl"));

        kpp_lay->addWidget(kpp_lbl);

        kpp_led = new QLineEdit(Add);
        kpp_led->setObjectName(QString::fromUtf8("kpp_led"));

        kpp_lay->addWidget(kpp_led);


        verticalLayout->addLayout(kpp_lay);

        drive_lay = new QHBoxLayout();
        drive_lay->setObjectName(QString::fromUtf8("drive_lay"));
        drive_lbl = new QLabel(Add);
        drive_lbl->setObjectName(QString::fromUtf8("drive_lbl"));

        drive_lay->addWidget(drive_lbl);

        drive_led = new QLineEdit(Add);
        drive_led->setObjectName(QString::fromUtf8("drive_led"));

        drive_lay->addWidget(drive_led);


        verticalLayout->addLayout(drive_lay);

        fuelcost_lay = new QHBoxLayout();
        fuelcost_lay->setObjectName(QString::fromUtf8("fuelcost_lay"));
        fuelcost_lbl = new QLabel(Add);
        fuelcost_lbl->setObjectName(QString::fromUtf8("fuelcost_lbl"));

        fuelcost_lay->addWidget(fuelcost_lbl);

        fuelcost_led = new QLineEdit(Add);
        fuelcost_led->setObjectName(QString::fromUtf8("fuelcost_led"));

        fuelcost_lay->addWidget(fuelcost_led);


        verticalLayout->addLayout(fuelcost_lay);

        capacity_lay = new QHBoxLayout();
        capacity_lay->setObjectName(QString::fromUtf8("capacity_lay"));
        capacity_lbl = new QLabel(Add);
        capacity_lbl->setObjectName(QString::fromUtf8("capacity_lbl"));

        capacity_lay->addWidget(capacity_lbl);

        capacity_led = new QLineEdit(Add);
        capacity_led->setObjectName(QString::fromUtf8("capacity_led"));

        capacity_lay->addWidget(capacity_led);


        verticalLayout->addLayout(capacity_lay);

        power_lay = new QHBoxLayout();
        power_lay->setObjectName(QString::fromUtf8("power_lay"));
        power_lbl = new QLabel(Add);
        power_lbl->setObjectName(QString::fromUtf8("power_lbl"));

        power_lay->addWidget(power_lbl);

        power_led = new QLineEdit(Add);
        power_led->setObjectName(QString::fromUtf8("power_led"));

        power_lay->addWidget(power_led);


        verticalLayout->addLayout(power_lay);

        run_lay = new QHBoxLayout();
        run_lay->setObjectName(QString::fromUtf8("run_lay"));
        run_lbl = new QLabel(Add);
        run_lbl->setObjectName(QString::fromUtf8("run_lbl"));

        run_lay->addWidget(run_lbl);

        run_led = new QLineEdit(Add);
        run_led->setObjectName(QString::fromUtf8("run_led"));

        run_lay->addWidget(run_led);


        verticalLayout->addLayout(run_lay);

        doors_lay = new QHBoxLayout();
        doors_lay->setObjectName(QString::fromUtf8("doors_lay"));
        doors_lbl = new QLabel(Add);
        doors_lbl->setObjectName(QString::fromUtf8("doors_lbl"));

        doors_lay->addWidget(doors_lbl);

        doors_led = new QLineEdit(Add);
        doors_led->setObjectName(QString::fromUtf8("doors_led"));

        doors_lay->addWidget(doors_led);


        verticalLayout->addLayout(doors_lay);

        places_lay = new QHBoxLayout();
        places_lay->setObjectName(QString::fromUtf8("places_lay"));
        places_lbl = new QLabel(Add);
        places_lbl->setObjectName(QString::fromUtf8("places_lbl"));

        places_lay->addWidget(places_lbl);

        places_led = new QLineEdit(Add);
        places_led->setObjectName(QString::fromUtf8("places_led"));

        places_lay->addWidget(places_led);


        verticalLayout->addLayout(places_lay);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        vincode_lbl = new QLabel(Add);
        vincode_lbl->setObjectName(QString::fromUtf8("vincode_lbl"));

        horizontalLayout->addWidget(vincode_lbl);

        vincode_led = new QLineEdit(Add);
        vincode_led->setObjectName(QString::fromUtf8("vincode_led"));

        horizontalLayout->addWidget(vincode_led);


        verticalLayout->addLayout(horizontalLayout);

        color_lay = new QHBoxLayout();
        color_lay->setObjectName(QString::fromUtf8("color_lay"));
        color_lbl = new QLabel(Add);
        color_lbl->setObjectName(QString::fromUtf8("color_lbl"));

        color_lay->addWidget(color_lbl);

        color_led = new QLineEdit(Add);
        color_led->setObjectName(QString::fromUtf8("color_led"));

        color_lay->addWidget(color_led);


        verticalLayout->addLayout(color_lay);

        pathpicture_lay = new QHBoxLayout();
        pathpicture_lay->setObjectName(QString::fromUtf8("pathpicture_lay"));
        pathpicture_lbl = new QLabel(Add);
        pathpicture_lbl->setObjectName(QString::fromUtf8("pathpicture_lbl"));

        pathpicture_lay->addWidget(pathpicture_lbl);

        pathpicture_led = new QLineEdit(Add);
        pathpicture_led->setObjectName(QString::fromUtf8("pathpicture_led"));

        pathpicture_lay->addWidget(pathpicture_led);

        pathpicture_pb = new QPushButton(Add);
        pathpicture_pb->setObjectName(QString::fromUtf8("pathpicture_pb"));

        pathpicture_lay->addWidget(pathpicture_pb);


        verticalLayout->addLayout(pathpicture_lay);

        pb_lay = new QHBoxLayout();
        pb_lay->setObjectName(QString::fromUtf8("pb_lay"));
        cancel_pb = new QPushButton(Add);
        cancel_pb->setObjectName(QString::fromUtf8("cancel_pb"));

        pb_lay->addWidget(cancel_pb);

        ok_pb = new QPushButton(Add);
        ok_pb->setObjectName(QString::fromUtf8("ok_pb"));

        pb_lay->addWidget(ok_pb);


        verticalLayout->addLayout(pb_lay);


        retranslateUi(Add);

        QMetaObject::connectSlotsByName(Add);
    } // setupUi

    void retranslateUi(QDialog *Add)
    {
        Add->setWindowTitle(QApplication::translate("Add", "\320\224\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\275\321\217", nullptr));
        quality_lbl->setText(QApplication::translate("Add", "\320\222\320\262\320\265\320\264\321\226\321\202\321\214 \321\217\320\272\321\226\321\201\321\202\321\214:", nullptr));
        type_lbl->setText(QApplication::translate("Add", "\320\222\320\262\320\265\320\264\321\226\321\202\321\214 \321\202\320\270\320\277 \320\272\321\203\320\267\320\276\320\262\320\260:", nullptr));
        country_lbl->setText(QApplication::translate("Add", "\320\222\320\262\320\265\320\264\321\226\321\202\321\214 \320\272\321\200\320\260\321\227\320\275\321\203:", nullptr));
        marka_lbl->setText(QApplication::translate("Add", "\320\222\320\262\320\265\320\264\321\226\321\202\321\214 \320\274\320\260\321\200\320\272\321\203:", nullptr));
        model_lbl->setText(QApplication::translate("Add", "\320\222\320\262\320\265\320\264\321\226\321\202\321\214 \320\274\320\276\320\264\320\265\320\273\321\214:", nullptr));
        year_lbl->setText(QApplication::translate("Add", "\320\222\320\262\320\265\320\264\321\226\321\202\321\214 \321\200\321\226\320\272:", nullptr));
        price_lbl->setText(QApplication::translate("Add", "\320\222\320\262\320\265\320\264\321\226\321\202\321\214 \321\206\321\226\320\275\321\203:", nullptr));
        dtp_lbl->setText(QApplication::translate("Add", "\320\222\320\262\320\265\320\264\321\226\321\202\321\214 \321\203\321\207\320\260\321\201\321\202\321\214 \320\262 \320\264\321\202\320\277:", nullptr));
        stan_lbl->setText(QApplication::translate("Add", "\320\222\320\262\320\265\320\264\321\226\321\202\321\214 \321\201\321\202\320\260\320\275:", nullptr));
        fuel_lbl->setText(QApplication::translate("Add", "\320\222\320\262\320\265\320\264\321\226\321\202\321\214 \321\202\320\270\320\277 \320\277\320\260\320\273\320\270\320\262\320\260:", nullptr));
        kpp_lbl->setText(QApplication::translate("Add", "\320\222\320\262\320\265\320\264\321\226\321\202\321\214 \321\202\320\270\320\277 \320\272\320\276\321\200\320\276\320\261\320\272\320\270 \320\277\320\265\321\200\320\265\320\264\320\260\321\207:", nullptr));
        drive_lbl->setText(QApplication::translate("Add", "\320\222\320\262\320\265\320\264\321\226\321\202\321\214 \321\202\320\270\320\277 \320\277\321\200\320\270\320\262\320\276\320\264\321\203:", nullptr));
        fuelcost_lbl->setText(QApplication::translate("Add", "\320\222\320\262\320\265\320\264\321\226\321\202\321\214 \320\262\320\270\321\202\321\200\320\260\321\202\321\203 \320\277\320\260\320\273\320\270\320\262\320\260 \320\275\320\260 100\320\272\320\274:", nullptr));
        capacity_lbl->setText(QApplication::translate("Add", "\320\222\320\262\320\265\320\264\321\226\321\202\321\214 \320\276\320\261'\321\224\320\274:", nullptr));
        power_lbl->setText(QApplication::translate("Add", "\320\222\320\262\320\265\320\264\321\226\321\202\321\214 \320\277\320\276\321\202\321\203\320\266\320\275\321\226\321\201\321\202\321\214 \320\264\320\262\320\270\320\263\321\203\320\275\320\260:", nullptr));
        run_lbl->setText(QApplication::translate("Add", "\320\222\320\262\320\265\320\264\321\226\321\202\321\214 \320\277\321\200\320\276\320\261\321\226\320\263:", nullptr));
        doors_lbl->setText(QApplication::translate("Add", "\320\222\320\262\320\265\320\264\321\226\321\202\321\214 \320\272\321\226\320\273\321\214\320\272\321\226\321\201\321\202\321\214 \320\264\320\262\320\265\321\200\320\265\320\271:", nullptr));
        places_lbl->setText(QApplication::translate("Add", "\320\222\320\262\320\265\320\264\321\226\321\202\321\214 \320\272\321\226\320\273\321\214\320\272\321\226\321\201\321\202\321\214 \320\274\321\226\321\201\321\206\321\214:", nullptr));
        vincode_lbl->setText(QApplication::translate("Add", "\320\222\320\262\320\265\320\264\321\226\321\202\321\214 \320\262\321\226\320\275\320\272\320\276\320\264:", nullptr));
        color_lbl->setText(QApplication::translate("Add", "\320\222\320\262\320\265\320\264\321\226\321\202\321\214 \320\272\320\276\320\273\321\226\321\200:", nullptr));
        pathpicture_lbl->setText(QApplication::translate("Add", "\320\222\320\270\320\261\320\265\321\200\321\226\321\202\321\214 \321\204\320\276\321\202\320\276:", nullptr));
        pathpicture_pb->setText(QApplication::translate("Add", "\320\250\320\273\321\217\321\205", nullptr));
        cancel_pb->setText(QApplication::translate("Add", "\320\222\321\226\320\264\320\274\321\226\320\275\320\270\321\202\320\270", nullptr));
        ok_pb->setText(QApplication::translate("Add", "\320\237\321\226\320\264\321\202\320\262\320\265\321\200\320\264\320\270\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Add: public Ui_Add {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_H
