#ifndef IDIALOG_H
#define IDIALOG_H

#include <QSqlTableModel>

class IDialog
{
public:
    IDialog();
    virtual void createDialog(QSqlTableModel *, int row) = 0;
};

#endif // IDIALOG_H
