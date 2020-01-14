#include "practicemain.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PracticeMain w;
    w.show();

    return a.exec();
}
