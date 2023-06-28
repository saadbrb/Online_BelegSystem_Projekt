TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        benutzer.cpp \
        dozentin.cpp \
        main.cpp \
        obs.cpp \
        student.cpp \
        vorlesung.cpp

HEADERS += \
    benutzer.h \
    dozentin.h \
    obs.h \
    student.h \
    vorlesung.h
