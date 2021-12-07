/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLabel *login_lbl;
    QLineEdit *login_led;
    QLabel *password_lbl;
    QLineEdit *password_led;
    QPushButton *admin_pb;
    QPushButton *newadm_pb;
    QPushButton *customer_pb;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(442, 339);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        login_lbl = new QLabel(centralwidget);
        login_lbl->setObjectName(QString::fromUtf8("login_lbl"));

        verticalLayout->addWidget(login_lbl);

        login_led = new QLineEdit(centralwidget);
        login_led->setObjectName(QString::fromUtf8("login_led"));

        verticalLayout->addWidget(login_led);

        password_lbl = new QLabel(centralwidget);
        password_lbl->setObjectName(QString::fromUtf8("password_lbl"));

        verticalLayout->addWidget(password_lbl);

        password_led = new QLineEdit(centralwidget);
        password_led->setObjectName(QString::fromUtf8("password_led"));
        password_led->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(password_led);

        admin_pb = new QPushButton(centralwidget);
        admin_pb->setObjectName(QString::fromUtf8("admin_pb"));

        verticalLayout->addWidget(admin_pb);

        newadm_pb = new QPushButton(centralwidget);
        newadm_pb->setObjectName(QString::fromUtf8("newadm_pb"));

        verticalLayout->addWidget(newadm_pb);

        customer_pb = new QPushButton(centralwidget);
        customer_pb->setObjectName(QString::fromUtf8("customer_pb"));

        verticalLayout->addWidget(customer_pb);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 442, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        login_lbl->setText(QApplication::translate("MainWindow", "\320\233\320\276\320\263\321\226\320\275", nullptr));
        password_lbl->setText(QApplication::translate("MainWindow", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        admin_pb->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\271\321\202\320\270", nullptr));
        newadm_pb->setText(QApplication::translate("MainWindow", "\320\227\320\260\321\200\320\265\321\224\321\201\321\202\321\200\321\203\320\262\320\260\321\202\320\270 \320\275\320\276\320\262\320\276\320\263\320\276 \320\260\320\264\320\274\321\226\320\275\321\226\321\201\321\202\321\200\320\260\321\202\320\276\321\200\320\260", nullptr));
        customer_pb->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\271\321\202\320\270 \321\217\320\272 \320\272\320\276\321\200\320\270\321\201\321\202\321\203\320\262\320\260\321\207", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
