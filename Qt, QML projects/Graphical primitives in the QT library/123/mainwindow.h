#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPainter>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void animate();

private:
    Ui::MainWindow *ui;

    QPointF circleCoordinates = QPointF(75,125);
    const int circleRadius = 30;
    QPointF *rectangleCoordinates = new QPointF[4] {
             QPointF(50, 155), QPointF(100, 155), QPointF(100, 175), QPointF(50,175)};

    const float a = 100;
    const float b = 1.0;
    float x = 0;
    float y = 0;
    int step = 50;

    bool finish();

    void FirstTask();
    float functionResult();

    void DrawCircle();
    void DrawRectangle();

    void UpdateParameters();
    void UpdateCoordinates();

    void DropParameters();
    void DropCoordinates();

    void DropRectangleCoordinates();
    void DropCircleCoordinates();

    void updateRectangleCoordinates();
    void updateCircleCoordinates();

protected:
    void paintEvent(QPaintEvent*) override;
};

#endif // MAINWINDOW_H
