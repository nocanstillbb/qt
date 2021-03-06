/*
 * This file is part of the PathWalker software
 *
 * Copyright (C) 2014 Denis Kvita <dkvita@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, see <http://www.gnu.org/licenses/>.
 */

#ifndef HISTORYDIALOG_H
#define HISTORYDIALOG_H

#include <QDialog>
#include "dirpathhistory.h"

class QStringListModel;
class QListView;

class HistoryDialog : public QDialog
{
    Q_OBJECT
public:
    explicit HistoryDialog(DirPathHistory *history, QWidget *parent = 0);

signals:
    void activated(QString path);

public slots:

protected slots:
    void onItemActivated(const QModelIndex &index);

protected:
    virtual void keyPressEvent(QKeyEvent *event);

private:
    DirPathHistory *aHistory;
    QStringListModel *aModel;
    QListView *aView;
};

#endif // HISTORYDIALOG_H
