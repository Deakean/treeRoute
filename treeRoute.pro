TEMPLATE = lib
TARGET = treeRoute
CONFIG += static
CONFIG -= app_bundle
CONFIG -= qt

QMAKE_CXXFLAGS += -std=c++0x

SOURCES +=\
    src/treeroute.cpp

INCLUDEPATH += \
    include/

OBJECTS_DIR = lib/
DESTDIR = lib/

HEADERS += \
    include/treeroute.h \
    include/bstree.h

