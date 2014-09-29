#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    char *title = "Who Knows Where This Will Go";
    QApplication a(argc, argv);
    MainWindow w;

    w.setWindowTitle(title);
    w.show();

    return a.exec();
}
