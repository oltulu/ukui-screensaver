/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp cn.kylinos.ScreenSaver.xml -i interface.h -a interfaceAdaptor
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#ifndef INTERFACEADAPTOR_H
#define INTERFACEADAPTOR_H

#include <QtCore/QObject>
#include <QtDBus/QtDBus>
#include "interface.h"
QT_BEGIN_NAMESPACE
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;
QT_END_NAMESPACE

/*
 * Adaptor class for interface cn.kylinos.ScreenSaver
 */
class ScreenSaverAdaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "cn.kylinos.ScreenSaver")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"cn.kylinos.ScreenSaver\">\n"
"    <method name=\"Lock\"/>\n"
"    <signal name=\"SessionIdle\"/>\n"
"  </interface>\n"
        "")
public:
    ScreenSaverAdaptor(QObject *parent);
    virtual ~ScreenSaverAdaptor();

public: // PROPERTIES
public Q_SLOTS: // METHODS
    void Lock();
Q_SIGNALS: // SIGNALS
    void SessionIdle();
};

#endif
