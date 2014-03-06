#ifndef DAVINCI_H
#define DAVINCI_H

#include <QObject>
#include <QLabel>
#include "parameters.h"
#include <QPainter>
#include <QPicture>
#include <QStringList>
#include <QFile>
#include <qmath.h>

class DaVinci : public QObject
{
    Q_OBJECT
public:
    DaVinci(QObject *parent = 0);
    DaVinci(QLabel*&, QObject *parent = 0);
    DaVinci(const DaVinci&);
    bool draw(Parameters);
    bool exportImage(Parameters);
    bool getAlreadyGenerated() const;

private:
    QLabel *mCanvas;
    bool mAlreadyGenerated;
    QPixmap* mPixmap;
signals:

public slots:

};

#endif // DAVINCI_H
