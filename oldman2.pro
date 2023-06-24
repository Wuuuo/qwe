QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    dialog.cpp \
    login.cpp \
    main.cpp \
    mainwindow.cpp \
    menu1.cpp \
    menu11.cpp \
    menu111.cpp \
    menu2.cpp \
    menu22.cpp \
    menu3.cpp \
    menu33.cpp \
    menu4.cpp \
    menu_1.cpp \
    menu_man.cpp

HEADERS += \
    dialog.h \
    login.h \
    mainwindow.h \
    menu1.h \
    menu11.h \
    menu111.h \
    menu2.h \
    menu22.h \
    menu3.h \
    menu33.h \
    menu4.h \
    menu_1.h \
    menu_man.h

FORMS += \
    dialog.ui \
    login.ui \
    login_copy.ui \
    mainwindow.ui \
    menu1.ui \
    menu11.ui \
    menu111.ui \
    menu2.ui \
    menu22.ui \
    menu3.ui \
    menu33.ui \
    menu4.ui \
    menu_1.ui \
    menu_man.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
