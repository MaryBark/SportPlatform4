#include "TutnirTable.h"

TutnirTable::TutnirTable(QObject *parent)
    : QAbstractItemModel(parent)
{
}

QVariant TutnirTable::headerData(int section, Qt::Orientation orientation, int role) const
{
    // FIXME: Implement me!
}

QModelIndex TutnirTable::index(int row, int column, const QModelIndex &parent) const
{
    // FIXME: Implement me!
}

QModelIndex TutnirTable::parent(const QModelIndex &index) const
{
    // FIXME: Implement me!
}

int TutnirTable::rowCount(const QModelIndex &parent) const
{
    if (!parent.isValid())
        return 0;

    // FIXME: Implement me!
}

int TutnirTable::columnCount(const QModelIndex &parent) const
{
    if (!parent.isValid())
        return 0;

    // FIXME: Implement me!
}

QVariant TutnirTable::data(const QModelIndex &index, int role) const
{
    if (!index.isValid())
        return QVariant();

    // FIXME: Implement me!
    return QVariant();
}
