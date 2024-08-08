#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dotwidget.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow) {
    ui->setupUi(this);

    // Initialize the DotWidget and place it on the main window
    DotWidget *dotWidget = new DotWidget(this);
    dotWidget->move(50, 50);  // Set the initial position of the DotWidget
    dotWidget->show();

    // Connect the button click to the moveDot slot
    connect(ui->moveButton, &QPushButton::clicked, dotWidget, &DotWidget::moveDot);
}
void MainWindow::on_moveButton_clicked() {
    qDebug() << "Button clicked!";
    // Any other code for the slot
}


MainWindow::~MainWindow() {
    delete ui;
}
