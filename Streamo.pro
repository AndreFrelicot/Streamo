

#!include( ../examples.pri ) {
#    error( "Couldn't find the examples.pri file!" )
#}


QT += qml quick 3dinput sensors

SOURCES += \
    main.cpp

OTHER_FILES += \
    AnimatedEntity.qml \
    main.qml

RESOURCES += \
    streamo.qrc

QMAKE_XCODE_CODE_SIGN_IDENTITY = "iPhone Developer"
setting.name = DEVELOPMENT_TEAM
setting.value = xxxx
QMAKE_MAC_XCODE_SETTINGS += setting

DISTFILES += \
    HeaderControl.qml \
    FooterControl.qml \
    DataPlayground.qml \
    DataGizmo.qml \
    android/AndroidManifest.xml \
    android/gradle/wrapper/gradle-wrapper.jar \
    android/gradlew \
    android/res/values/libs.xml \
    android/build.gradle \
    android/gradle/wrapper/gradle-wrapper.properties \
    android/gradlew.bat


include(QOSC/QOSC.pri)

ANDROID_PACKAGE_SOURCE_DIR = $$PWD/android


