#include "dotwidget.h"
#include <QPainter>
#include <QDebug>

DotWidget::DotWidget(QWidget *parent) : QWidget(parent), dotX(50), dotY(50) {
    setFixedSize(200, 200);  // Ensure the widget has a size
}

void DotWidget::paintEvent(QPaintEvent *event) {
    QPainter painter(this);
    painter.setBrush(Qt::black);
    painter.drawEllipse(dotX, dotY, 10, 10);  // Draw the dot at the specified position
}

void DotWidget::moveDot() {
    dotX += 100;  // Move the dot 100 pixels to the right
    qDebug() << "Dot position:" << dotX;
    if (dotX + 10 > width()) {
        dotX = 0;  // Wrap around if it goes out of bounds
    }
    update();  // Trigger a repaint
}
