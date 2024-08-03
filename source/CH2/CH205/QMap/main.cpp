#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QMap<QString, QString> map;
    map.insert("beijing", "1");
    map.insert("shanghai", "2");
    map.insert("wuhan", "3");

    QMap<QString, QString>::iterator i;
    for (i = map.begin(); i != map.end(); i++)
    {
        qDebug() << " " << i.key() << " " << i.value();
    }

    QMap<QString, QString>::iterator mi;
    mi = map.find("beijing");
    if (mi != map.end()) mi.value() = "0";

    QMap<QString, QString>::const_iterator cmi;
    for (cmi = map.begin(); cmi != map.end(); cmi++)
    {
        qDebug() << " " << cmi.key() << " " << cmi.value();
    }

    return a.exec();
}
