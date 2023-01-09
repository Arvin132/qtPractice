#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    this->setCentralWidget(ui->textEdit);
    this->setCentralWidget(ui->textEdit_2);
}

MainWindow::~MainWindow() {
    delete ui;
}


