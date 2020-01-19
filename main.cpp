#include <QCoreApplication>
#include <iostream>
// second commit
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int a = 5;
	a++;
    return a.exec();
}
