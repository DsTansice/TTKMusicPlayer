include($$PWD/../../Input.pri)

DESTDIR = $$PLUGINS_PREFIX/Input

HEADERS += decodersunvoxfactory.h \
           decoder_sunvox.h \
           sunvoxmetadatamodel.h \
           sunvoxhelper.h

SOURCES += decodersunvoxfactory.cpp \
           decoder_sunvox.cpp \
           sunvoxmetadatamodel.cpp \
           sunvoxhelper.cpp

unix{
    QMAKE_CLEAN = $$DESTDIR/lib$${TARGET}.so
}