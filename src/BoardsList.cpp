#include "BoardsList.h"
#include "BoardItem.h"

template <typename T>
BoardsList<T>::BoardsList()
{
}

template <typename T>
BoardsList<T>::~BoardsList()
{
    //dtor
}

template <typename T>
BoardsList<T>::BoardsList(const BoardsList& other)
{
    //copy ctor
}

template <typename T>
int BoardsList<T>::add(const Board &b){
    if(!(this->boardsItems)){
        this->boardsItems=BoardItem(&b);}
    else{
        BoardItem *currentItem=this->boardsItems;
        while(!currentItem->isTail()&& (*(currentItem->item)<b))
            currentItem=currentItem->getNext();
        BoardItem item(&b);
        if(currentItem->isHead()){
                currentItem->setPrev(&item);
                item.setNext(currentItem);
                this->boardsItems=&item;
        }
        else{
            if(currentItem->isTail()){
                currentItem->setPrev(&item);
                item.setNext(currentItem);
                this->boardsItems=&item;
            }
            else{
                item.setPrev(currentItem->prev);
                item.setNext(currentItem);
                currentItem->getPrev()->setNext(&item);
                currentItem->setPrev(&item);
            }
        }
    }
 return 0;
    }


