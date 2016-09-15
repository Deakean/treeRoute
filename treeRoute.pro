TEMPLATE = app
TARGET = treeRoute
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES +=\
    src/main.cpp

INCLUDEPATH += \
    include/

OBJECTS_DIR = bin/
DESTDIR = bin/

HEADERS += \
    include/treelib.h \
    include/treelib.ipp

