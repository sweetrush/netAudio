#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QTcpServer>
#include <QDebug>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void Connect();
    void loadserver();
    
private:
    Ui::MainWindow *ui;

public slots:/*
    QTcpSocket *tcpsock;
    QTcpServer *tcpserver;*/
private slots:
    void on_actionRest_All_Subs_triggered();
};

#endif // MAINWINDOW_H
