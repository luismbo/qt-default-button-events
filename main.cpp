#include <QApplication>
#include <QDialog>
#include <QPushButton>
#include "filterobject.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    FilterObject fo;

    a.installEventFilter(&fo);

    QDialog w;
    QPushButton b("PUSH ME", &w);
    //b.setAutoDefault(false);
    w.show();

    return a.exec();
}
