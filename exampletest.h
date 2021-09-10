#ifndef EXAMPLETEST_H
#define EXAMPLETEST_H
#include <QtTest/QtTest>
#include <mainwindow.h>

class ExampleTest : public QObject
{

    Q_OBJECT
   private slots:
     void testowanietablic();
};

#endif // EXAMPLETEST_H
