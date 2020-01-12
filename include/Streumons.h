#ifndef STREUMONS_H
#define STREUMONS_H

#include <Pawn.h>


class Streumons : public Pawn
{
    public:
        Streumons(int x, int y);
        virtual ~Streumons();
        Streumons(const Streumons& other);
        int moveto(int offset_x,int offset_y);

    protected:
        bool moveAuthorisation(int offset_x,int offset_y);
};

#endif // STREUMONS_H
