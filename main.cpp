#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QString mstr = "Hello world";

    qDebug() << mstr;

    return a.exec();
}
