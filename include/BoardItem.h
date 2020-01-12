#ifndef BOARDITEM_H
#define BOARDITEM_H

#include "Board.h"
class BoardItem
{
    public:
        BoardItem(Board *b);
        virtual ~BoardItem();
        BoardItem(const BoardItem& other);
        bool isTail() const;
        bool isHead() const;


    protected:
        BoardItem *getNext();
        BoardItem *getPrev();
        Board *getItem();
        void setNext(BoardItem *b);
        void setPrev(BoardItem *b);
    private:
    Board *item;
    BoardItem *next=NULL;
    BoardItem *prev=NULL;

};

#endif // BOARDITEM_H
