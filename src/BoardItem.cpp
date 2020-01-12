#include "BoardItem.h"

BoardItem::BoardItem(Board *b): item{b}
{
    //ctor
}

BoardItem::~BoardItem()
{
    //dtor
}

BoardItem::BoardItem(const BoardItem& other)
{
    //copy ctor
}
bool BoardItem::isTail() const
{
   return (this->next!=NULL);
}
bool BoardItem::isHead() const
{
   return (this->prev!=NULL);
}
void BoardItem::setNext(BoardItem *b)
{
   this->next=b;
}
void BoardItem::setPrev(BoardItem *b)
{
   this->prev=b;
}
