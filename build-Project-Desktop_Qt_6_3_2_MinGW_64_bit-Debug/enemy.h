#ifndef ENEMY_H
#define ENEMY_H

#include <QMainWindow>
#include <QGraphicsPixmapItem>
#include <QKeyEvent>
#include <time.h>
#include <QtCore>
#include <QTimer>
#include "bullet.h"

class enemy:public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT

    int health = 100;
    int data[26][40];
    char wasd[4]={'w','a','s','d'};
    char direction;
    int* lvl = new int;
    bool right=false,left=false,up=false,down=false;
    bool collide = false;
public:
    int deduction = 50;

    bool alive = true;
    enemy(int [26][40], int, int);
    void MyTimer();
    void move();
    int getHealth();
    void setHealt(int h);
    QTimer *timer;
    QTimer *col;
    int row;
    int column;

public slots:
    void MySlot();
    void collision();
};

#endif // ENEMY_H
