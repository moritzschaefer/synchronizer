######################################################################
# Automatically generated by qmake (2.01a) Mo. Dez 3 13:11:43 2012
######################################################################

TEMPLATE = app
TARGET =
DEPENDPATH += .
INCLUDEPATH += . /usr/include/qwt
CONFIG += debug

# Input
HEADERS += synchronizer.h demo.h mp3decoder.h recorder.h
SOURCES += main.cpp demo.cpp synchronizer.cpp mp3decoder.cpp recorder.cpp

LIBS += -lqwt -lportaudio -lfftw3 -lsndfile

