#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a0(argc, argv);

    double a = -19.3, b = 9.7;

    double c = qAbs(a);
    qDebug() << "c = " << c;

    double d = qMax(a, b);
    qDebug() << "d = " << d;

    double e = qRound(a);
    double f = qRound(b);
    qDebug() << "e = " << e;
    qDebug() << "f = " << f;

    qSwap(a, b);
    qDebug() << "a = " << a;
    qDebug() << "b = " << b;

    return a0.exec();
}
