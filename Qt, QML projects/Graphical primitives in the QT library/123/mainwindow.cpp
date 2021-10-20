#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QTimer>
#include <cmath>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setFixedSize(1500,500);
    auto timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(animate()));
    timer->start(75);
}

void MainWindow::animate(){
    repaint();
}

void MainWindow::paintEvent(QPaintEvent *)
{
    FirstTask();
    UpdateParameters();
    UpdateCoordinates();
    DrawCircle();
    DrawRectangle();
}

void MainWindow::FirstTask(){
    QPainter painter(this);
    QFont font("SansSerifFont");
    font.setPointSize(100);
    painter.save();

    painter.translate(750, 400);
    painter.rotate(270);
    painter.drawText(0,0,QString::fromStdString("Графические примитивы в библиотеке QT"));
    painter.restore();
}

void MainWindow::UpdateParameters()
{
    x += M_PI/2;
    y = functionResult();
}

float MainWindow::functionResult(){
    return a*sin(x+b);
}

bool MainWindow::finish(){
    return rectangleCoordinates[0].x() > 1350 ? true : false;
}

void MainWindow::DropParameters(){
    x = 0;
    y = 0;
}

void MainWindow::DropCoordinates(){
    DropRectangleCoordinates();
    DropCircleCoordinates();
}

void MainWindow::UpdateCoordinates(){
    if(finish()){
        DropParameters();
        DropCoordinates();
    }
    updateRectangleCoordinates();
    updateCircleCoordinates();
}

void MainWindow::updateRectangleCoordinates(){
    QPointF offset = QPointF(step,y);
    for(int i = 0; i < 4; i++)
        rectangleCoordinates[i] += offset;
}

void MainWindow::updateCircleCoordinates() {
    QPointF offset = QPointF(step, y);
    circleCoordinates += offset;
}

void MainWindow::DrawCircle(){
    QPainter painter(this);
    painter.setBrush(QBrush(Qt::blue));
    painter.drawEllipse(circleCoordinates, circleRadius, circleRadius);
    painter.restore();
}

void MainWindow::DrawRectangle(){
    QPainter painter(this);
    painter.setBrush(QBrush(Qt::red));
    painter.drawPolygon(rectangleCoordinates,4);
    painter.restore();
}

void MainWindow::DropRectangleCoordinates() {
    rectangleCoordinates = new QPointF[4] {
            QPointF(50, 155), QPointF(100, 155), QPointF(100, 175), QPointF(50,175)};
}

void MainWindow::DropCircleCoordinates() {
    circleCoordinates = QPointF(75, 125);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete[] rectangleCoordinates;
}
