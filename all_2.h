#ifndef ALL_2_H
#define ALL_2_H

#include <QDialog>
#include <QPainter>

namespace Ui {
class all_2;
}

class all_2 : public QDialog
{
    Q_OBJECT

public:
    explicit all_2(QWidget *parent = nullptr);
    ~all_2();

private:
    Ui::all_2 *ui;
};

#endif // ALL_2_H
