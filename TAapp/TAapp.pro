QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    accountinfowindow.cpp \
    accountmanagewindow.cpp \
    citymanagewindow.cpp \
    homewindow.cpp \
    loginwindow.cpp \
    main.cpp \
    mainwindow.cpp \
    mapwindow.cpp \
    accountinfowindow.cpp \
    accountmanagewindow.cpp \
    citymanagewindow.cpp \
    homewindow.cpp \
    loginwindow.cpp \
    main.cpp \
    mainwindow.cpp \
    mapwindow.cpp \
    tripmanagewindow.cpp \
    tripunit.cpp \
    tripmanagewindow.cpp \
    tripunit.cpp

HEADERS += \
    accountinfowindow.h \
    accountmanagewindow.h \
    citymanagewindow.h \
    accountinfowindow.h \
    accountmanagewindow.h \
    citymanagewindow.h \
    homewindow.h \
    loginwindow.h \
    mainwindow.h \
    mapwindow.h \
    tripmanagewindow.h \
    tripunit.h \
    homewindow.h \
    loginwindow.h \
    mainwindow.h \
    mapwindow.h \
    tripmanagewindow.h \
    tripunit.h

FORMS += \
    accountinfowindow.ui \
    accountmanagewindow.ui \
    citymanagewindow.ui \
    homewindow.ui \
    loginwindow.ui \
    mainwindow.ui \
    mapwindow.ui \
    tripmanagewindow.ui \
    tripunit.ui \
    accountinfowindow.ui \
    accountmanagewindow.ui \
    citymanagewindow.ui \
    homewindow.ui \
    loginwindow.ui \
    mainwindow.ui \
    mapwindow.ui \
    tripmanagewindow.ui \
    tripunit.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resource/res.qrc
