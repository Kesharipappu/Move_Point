#ifndef DOTWIDGET_H
#define DOTWIDGET_H

#include <QWidget>

class DotWidget : public QWidget {
    Q_OBJECT

public:
    explicit DotWidget(QWidget *parent = nullptr);

protected:
    void paintEvent(QPaintEvent *event) override;

private:
    int dotX;
    int dotY;

public slots:
    void moveDot();
};

#endif // DOTWIDGET_H
