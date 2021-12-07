#ifndef DRY_H
#define DRY_H

#include <QDate>
#include <QDialog>
#include <QLabel>
#include <QLayout>
#include <QPushButton>
#include "idialog.h"

class Dry : public IDialog
{
public:
    Dry();
    void createDialog(QSqlTableModel *model, int row);
};

#endif // DRY_H
