QT       += core gui
QT       += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    add.cpp \
    add_postach.cpp \
    admin.cpp \
    all.cpp \
    auto.cpp \
    customer.cpp \
    dbmanager.cpp \
    main.cpp \
    mainwindow.cpp \
    sqlitedbmanager.cpp

HEADERS += \
    add.h \
    add_postach.h \
    admin.h \
    all.h \
    auto.h \
    customer.h \
    dbmanager.h \
    mainwindow.h \
    sqlitedbmanager.h

FORMS += \
    add.ui \
    add_postach.ui \
    admin.ui \
    all.ui \
    customer.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Files.qrc
