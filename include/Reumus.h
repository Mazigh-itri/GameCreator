#ifndef REUMUS_H
#define REUMUS_H

#include <Pawn.h>


class Reumus : public Pawn
{
    public:
        Reumus(int x, int y);
        virtual ~Reumus();
        int moveto(int offset_x,int offset_y);

    protected:
        bool moveAuthorisation(int offset_x,int offset_y);
    private:
};

#endif // REUMUS_H
