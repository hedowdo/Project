#ifndef BULLET_H
#define BULLET_H

#include <QMainWindow>
#include <QGraphicsPixmapItem>
#include <QKeyEvent>
#include <time.h>
#include <QtCore>
#include <QTimer>


class bullet:public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
    bool B = true;
public:
    bullet(int, int);
    QTimer *Bullets;
public slots:
    void BULLETS();
    void col();

};

#endif // HEART_H
