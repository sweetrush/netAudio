#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

//MainWindow::Connect(){
//    tcpsock = new QTcpSocket(this);
//    tcpsock->connectToHost("127.0.0.1",5545);
//    if(tcpsock->waitForConnected(5000)){
//        QDebug << "ffd";
//    }
//    //Connected
//    //Sent
//    //got
//    //Closed
//}

//MainWindow::tcpserver(){
//    tcpserver = new QTcpServer(this);
//    tcpserver->listen("127.0.0.1");
//    tcpserver->serverPort();
//}

void MainWindow::on_actionRest_All_Subs_triggered()
{
    ui->verticalSlider_3->setValue(0);
    ui->verticalSlider_4->setValue(0);
    ui->verticalSlider_5->setValue(0);
    ui->verticalSlider_6->setValue(0);
    ui->verticalSlider_7->setValue(0);
    ui->verticalSlider_8->setValue(0);
}
