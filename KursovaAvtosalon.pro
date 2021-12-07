QT       += core gui
QT       += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    add.cpp \
    addnew.cpp \
    admin.cpp \
    all.cpp \
    auto.cpp \
    customer.cpp \
    dbmanager.cpp \
    dry.cpp \
    idialog.cpp \
    largesearch.cpp \
    largesearchmodel.cpp \
    log.cpp \
    main.cpp \
    mainwindow.cpp \
    newavto.cpp \
    oldavto.cpp \
    smallsearch.cpp \
    sqlitedbmanager.cpp

HEADERS += \
    add.h \
    addnew.h \
    admin.h \
    all.h \
    auto.h \
    customer.h \
    dbmanager.h \
    dry.h \
    idialog.h \
    largesearch.h \
    largesearchmodel.h \
    log.h \
    mainwindow.h \
    newavto.h \
    oldavto.h \
    smallsearch.h \
    sqlitedbmanager.h

FORMS += \
    add.ui \
    addnew.ui \
    admin.ui \
    all.ui \
    customer.ui \
    largesearch.ui \
    largesearchmodel.ui \
    mainwindow.ui \
    newavto.ui \
    oldavto.ui \
    smallsearch.ui

win32:RC_FILE = icon.rc
# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Files.qrc

CONFIG(release, debug | release)
{
  win32:QMAKE_POST_LINK = $$(QTDIR)/bin/windeployqt $$OUT_PWD/release
}
