include($$PWD/../../Input.pri)

DESTDIR = $$PLUGINS_PREFIX/Input
TARGET = $${TARGET}

HEADERS += decoderv2mfactory.h \
           decoder_v2m.h \
           v2mhelper.h
    
SOURCES += decoderv2mfactory.cpp \
           decoder_v2m.cpp \
           v2mhelper.cpp

INCLUDEPATH += $$EXTRA_PREFIX/libttk/include

unix{
    QMAKE_CLEAN = $$DESTDIR/lib$${TARGET}.so
    LIBS += -L$$EXTRA_PREFIX/libttk/lib -lv2m$$STATIC_LIBRARY_SUFFIX
}

win32{
    LIBS += -L$$EXTRA_PREFIX/libttk/lib -lv2m
}
