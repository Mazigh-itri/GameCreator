#ifndef BOARDSLIST_H
#define BOARDSLIST_H
#include "BoardItem.h"
#define LEVELS 100


template < typename T > class BoardsList
{
    public:
        BoardsList();
        virtual ~BoardsList();
        BoardsList(const BoardsList& other);
        int add(const Board &b);


    protected:

    private:
    BoardItem *boardsItems;
};

#endif // BOARDSLIST_H
