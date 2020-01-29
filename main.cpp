#include <QCoreApplication>
#include <QTranslator>
#include <QDebug>
#include <QObject>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QTranslator translator;
    translator.load(":/i18n/ltest_de.qm");
    a.installTranslator(&translator);
    qDebug()<<QObject::tr("translation");
    return a.exec();
}
