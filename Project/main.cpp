#include "gps_system.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    GPS_System w;
    w.show();
    return a.exec();
}
