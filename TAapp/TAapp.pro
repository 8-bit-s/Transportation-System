QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Graph.cpp \
    TimeClass.cpp \
    TripTable.cpp \
    User.cpp \
    accountinfowindow.cpp \
    accountmanagewindow.cpp \
    addtripwindow.cpp \
    api.cpp \
    childwindow.cpp \
    citymanagewindow.cpp \
    homewindow.cpp \
    into_json.cpp \
    loginwindow.cpp \
    main.cpp \
    mainwindow.cpp \
    mapwindow.cpp \
    tag.cpp \
    tripmanagewindow.cpp \
    tripunit.cpp \
    tripwindow.cpp

HEADERS += \
    Graph.h \
    TimeClass.h \
    TripTable.h \
    User.h \
    accountinfowindow.h \
    accountmanagewindow.h \
    addtripwindow.h \
    api.h \
    childwindow.h \
    citymanagewindow.h \
    exceptions.h \
    homewindow.h \
    httplib.h \
    into_json.h \
    json.hpp \
    loginwindow.h \
    mainwindow.h \
    mapwindow.h \
    tag.h \
    tripmanagewindow.h \
    tripunit.h \
    tripwindow.h

FORMS += \
    accountinfowindow.ui \
    accountmanagewindow.ui \
    addtripwindow.ui \
    childwindow.ui \
    citymanagewindow.ui \
    homewindow.ui \
    loginwindow.ui \
    mainwindow.ui \
    mapwindow.ui \
    tag.ui \
    tripmanagewindow.ui \
    tripunit.ui \
    tripwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resource/res.qrc
