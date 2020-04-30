TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt
LIBS += -lpthread

SOURCES += \
    Archivage.cpp \
    BD.cpp \
    Chrono.cpp \
    InterfaceDeSaisie.cpp \
    kbhit.cpp \
    main.cpp \
    Alarme.cpp \
    Capteur.cpp \
    Clavier.cpp \
    Voyant.cpp \
    ObjetTempo.cpp \
    Porte.cpp \
    Systeme.cpp


HEADERS += \
    Archivage.h \
    BD.h \
    Chrono.h \
    InterfaceDeSaisie.h \
    kbhit.h \
    ObjetTempo.h \
    Alarme.h \
    Capteur.h \
    Clavier.h \
    Voyant.h \
    Porte.h \
    Systeme.h