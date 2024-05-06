#ifndef GPS_SYSTEM_H
#define GPS_SYSTEM_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class GPS_System;
}
QT_END_NAMESPACE

class GPS_System : public QMainWindow
{
    Q_OBJECT

public:
    explicit GPS_System(QWidget *parent = nullptr);
    ~GPS_System();

private slots:
    void on_AddGraphB_clicked();
    void on_DisplayGraphB_clicked();
    void on_AdsCityB_clicked();
    void on_DeleteCityB_clicked();
    void on_SaveB_clicked();
    void on_picksource_clicked(); // Add this slot declaration
    void on_adddestination_clicked(); // Add this slot declaration

    void on_Shortestdistance_linkActivated(const QString &link);

private:
    Ui::GPS_System *ui;
};

#endif // GPS_SYSTEM_H
