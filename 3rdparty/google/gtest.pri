
INCLUDEPATH += "$$PWD/googletest/include" \
               "$$PWD/googletest/" \
               "$$PWD/googlemock/include" \
               "$$PWD/googlemock/" \
               "$$PWD/"

SOURCES += $$PWD/googletest/src/gtest-all.cc \
           $$PWD/googlemock/src/gmock-all.cc

DEFINES += \
    GTEST_LANG_CXX11

#HEADERS += $$PWD/gtest_main.h

HEADERS += \
    $$PWD/qtgprinters.h
