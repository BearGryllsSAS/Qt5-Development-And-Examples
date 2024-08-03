#include <QCoreApplication>
#include<QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QList<int> list;
    for (int i = 0; i < 10; i++)
    {
        list.insert(list.end(), i);
    }

    QList<int>::iterator i;
    for (i = list.begin(); i != list.end(); i++)
    {
        qDebug() << (*i);
        *i = (*i) * 10;
    }

    QList<int>::const_iterator ci;
    for (ci = list.begin(); ci != list.end(); ci++)
    {
        qDebug() << (*ci);
    }

    return a.exec();
}
