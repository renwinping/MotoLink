#ifndef HRC_H
#define HRC_H

#include <QObject>
#include <QDebug>
#include <QFile>
#include <QString>
#include <QStringList>
#include "datastructures.h"

class Hrc : public QObject
{
    Q_OBJECT
public:
    explicit Hrc(QObject *parent = 0);
    int getDefaultRpmAt(int index);
    int getDefaultTpsAt(int index);

signals:

public slots:
    bool openFile(const QString &filename);
    bool saveFile(const QString &filename);

private slots:
    bool hexToArray(QString *hex, QByteArray *array);
    bool arrayToHex(QByteArray *array, QString *hex);
    bool checkMapType(void);

private:
    QString msError;
    bool mHasMap;
    cbr600rr07_map_t mCbr600rr07_map;
    QString mFileContent;
    QByteArray mMapArray;
    QVector<int> mDefaultRpm;
    QVector<int> mDefaultTps;

};

#endif // HRC_H
