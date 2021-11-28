#ifndef SLIDERGRADIENT_H
#define SLIDERGRADIENT_H

#include <mainwindow.h>
#include <QSlider>
#include <QImage>
#include <QColor>

class SliderGradient:public QSlider
{
    QImage gradient;

public:
    SliderGradient(QColor from, QColor to);
private slots:
    void changecolor(int);
};

#endif // SLIDERGRADIENT_H
