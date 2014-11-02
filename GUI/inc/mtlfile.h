#ifndef MTLFILE_H
#define MTLFILE_H

#include <QObject>
#include <QMap>
#include <QString>
#include <QVariant>
#include <QFile>
#include "tablemodel.h"

class MTLFile : public QObject
{
    Q_OBJECT
public:
    explicit MTLFile(QObject *parent = 0);
    bool addTable(TableModel *table);
    bool getTable(const QString &name, TableModel* table);
    bool rmTable(const QString &name);
    bool rmTable(TableModel * const table);

    bool addProperty(const QString &name, QVariant value);
    bool getProperty(const QString &name, QVariant* value);
    bool rmProperty(const QString &name);

public slots:
    bool write(QFile* file);
    bool read(QFile* file);

signals:
    void readFailed(void);

private:
    QMap<QString, TableModel*> mTableList;
    QMap<QString, QVariant> mPropList;

};

#endif // MTLFILE_H