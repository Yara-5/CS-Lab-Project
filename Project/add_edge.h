#ifndef ADD_EDGE_H
#define ADD_EDGE_H

#include <QWidget>

namespace Ui {
class Add_Edge;
}

class Add_Edge : public QWidget
{
    Q_OBJECT

public:
    explicit Add_Edge(QString city, QWidget *parent = nullptr);
    ~Add_Edge();
    QString City;

private slots:
    void on_AddEdge_clicked();

    void on_OneMore_clicked();

private:
    Ui::Add_Edge *ui;
};

#endif // ADD_EDGE_H
