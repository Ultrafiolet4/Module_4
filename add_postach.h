#ifndef ADD_POSTACH_H
#define ADD_POSTACH_H

#include <QDialog>

namespace Ui {
class add_postach;
}

class add_postach : public QDialog
{
    Q_OBJECT

public:
    explicit add_postach(QWidget *parent = nullptr);
    ~add_postach();

private:
    Ui::add_postach *ui;
};

#endif // ADD_POSTACH_H
