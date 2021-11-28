#include "slidergradient.h"
#include <QLinearGradient>
#include <QPainter>

SliderGradient::SliderGradient( QColor from, QColor to)
{
    gradient( QSize(100,100), QImage::Format_RGB32 )
}
