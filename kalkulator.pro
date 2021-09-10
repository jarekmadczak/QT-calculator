QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
#    example_test.cpp \
#    exampletest.cpp \
    buttonoperations.cpp \
    liczba.cpp \
    main.cpp \
    mainwindow.cpp \
    numpad.cpp \
    okno.cpp \
    operacja.cpp \
    operacje_na_liczbach.cpp \
    operationsonnumbers.cpp \
    wpisywaniedotab.cpp \
    znak.cpp

HEADERS += \
#    exampletest.h \
    buttonoperations.h \
    liczba.h \
    mainwindow.h \
    operacja.h \
    operationsonnumbers.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
