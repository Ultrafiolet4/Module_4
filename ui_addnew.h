/********************************************************************************
** Form generated from reading UI file 'addnew.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDNEW_H
#define UI_ADDNEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddNew
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *login_lbl;
    QLineEdit *login_led;
    QLabel *password_lbl;
    QLineEdit *password_led;
    QLabel *secondpassword_lbl;
    QLineEdit *secondpassword_led;
    QHBoxLayout *horizontalLayout;
    QPushButton *cancel_pb;
    QPushButton *ok_pb;

    void setupUi(QDialog *AddNew)
    {
        if (AddNew->objectName().isEmpty())
            AddNew->setObjectName(QString::fromUtf8("AddNew"));
        AddNew->resize(430, 407);
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        AddNew->setFont(font);
        verticalLayout = new QVBoxLayout(AddNew);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        login_lbl = new QLabel(AddNew);
        login_lbl->setObjectName(QString::fromUtf8("login_lbl"));

        verticalLayout->addWidget(login_lbl);

        login_led = new QLineEdit(AddNew);
        login_led->setObjectName(QString::fromUtf8("login_led"));

        verticalLayout->addWidget(login_led);

        password_lbl = new QLabel(AddNew);
        password_lbl->setObjectName(QString::fromUtf8("password_lbl"));

        verticalLayout->addWidget(password_lbl);

        password_led = new QLineEdit(AddNew);
        password_led->setObjectName(QString::fromUtf8("password_led"));

        verticalLayout->addWidget(password_led);

        secondpassword_lbl = new QLabel(AddNew);
        secondpassword_lbl->setObjectName(QString::fromUtf8("secondpassword_lbl"));

        verticalLayout->addWidget(secondpassword_lbl);

        secondpassword_led = new QLineEdit(AddNew);
        secondpassword_led->setObjectName(QString::fromUtf8("secondpassword_led"));

        verticalLayout->addWidget(secondpassword_led);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        cancel_pb = new QPushButton(AddNew);
        cancel_pb->setObjectName(QString::fromUtf8("cancel_pb"));

        horizontalLayout->addWidget(cancel_pb);

        ok_pb = new QPushButton(AddNew);
        ok_pb->setObjectName(QString::fromUtf8("ok_pb"));

        horizontalLayout->addWidget(ok_pb);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(AddNew);

        QMetaObject::connectSlotsByName(AddNew);
    } // setupUi

    void retranslateUi(QDialog *AddNew)
    {
        AddNew->setWindowTitle(QApplication::translate("AddNew", "Dialog", nullptr));
        login_lbl->setText(QApplication::translate("AddNew", "\320\222\320\262\320\265\320\264\321\226\321\202\321\214 \320\273\320\276\320\263\321\226\320\275:", nullptr));
        password_lbl->setText(QApplication::translate("AddNew", "\320\222\320\262\320\265\320\264\321\226\321\202\321\214 \320\277\320\260\321\200\320\276\320\273\321\214:", nullptr));
        secondpassword_lbl->setText(QApplication::translate("AddNew", "\320\237\321\226\320\264\321\202\320\262\320\265\321\200\320\264\321\226\321\202\321\214 \320\277\320\260\321\200\320\276\320\273\321\214:", nullptr));
        cancel_pb->setText(QApplication::translate("AddNew", "Cancel", nullptr));
        ok_pb->setText(QApplication::translate("AddNew", "Ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddNew: public Ui_AddNew {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDNEW_H
