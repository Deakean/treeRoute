TEMPLATE = app
CONFIG += console
CONFIG -= qt

QMAKE_CXXFLAGS += -std=c++0x

SOURCES += main.cpp

OBJECTS_DIR = bin/
DESTDIR = bin/

INCLUDEPATH = \
        ../include/

LIBS += -L../lib/ -ltreeRoute

PRE_TARGETDEPS = ../lib/libtreeRoute.a
