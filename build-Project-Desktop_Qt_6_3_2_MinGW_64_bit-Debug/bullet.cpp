#include "bullet.h"

bullet::bullet( int row, int col)
{
    QPixmap c("");
    c=c.scaledToWidth(35);
    c=c.scaledToHeight(35);
    setPixmap(c);
    setPos(35+35*col,35+35*row);

    Bullets = new QTimer(this);
    connect(Bullets,SIGNAL(timeout()),this,SLOT(COINS()));

    Bullets->start(30000);
}

void bullet::BULLETS()
{
    if(B)
    {
        B = false;
        delete this;
    }
}

void bullet::col()
{
    QList<QGraphicsItem*> colliding_items = collidingItems();

   /* for (int i = 0, n = colliding_items.size() ;i<n;++i)
    {
        if((typeid(*(colliding_items[i])) == typeid(Player)))
        {

            qDebug() << "bullet/player collision";
            m->health->decrease();
            delete this;
            return;
        }
}*/
}
