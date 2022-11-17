#ifndef PLAYER_H
#define PLAYER_H

#include <QGraphicsPixmapItem>
#include <QGraphicsScene>
#include <QKeyEvent>
#include <QList>
#include <QTimer>
#include "Pellet.h"
//#include "enemy.h"
//#include "bullet.h"

class Player : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
private:
    int lives, rows, columns;
    int data[15][15];
    bool invincible;

public:
    Player(int board[15][15]);

public slots:
    void KeyPressEvent(QKeyEvent* event);
};

#endif
