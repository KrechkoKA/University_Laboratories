QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    deleteticket.cpp \
    editticket.cpp \
    lookingtickets.cpp \
    main.cpp \
    mainwindow.cpp \
    menuwindow.cpp

HEADERS += \
    deleteticket.h \
    editticket.h \
    lookingtickets.h \
    mainwindow.h \
    menuwindow.h

FORMS += \
    deleteticket.ui \
    editticket.ui \
    lookingtickets.ui \
    mainwindow.ui \
    menuwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
