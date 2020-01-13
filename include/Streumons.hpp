#ifndef STREUMONS_H
#define STREUMONS_H
#include "Pawn.h"

class Streumons : public Pawn
{
    public:
        Streumons();
        Streumons(int, int);
        virtual ~Streumons();
        Streumons(const Streumons& other);
        int moveto(int offset_x,int offset_y);

    protected:
         bool moveAuthorisation(int offset_x,int offset_y);
    private:
};

#endif // STREUMONS_H
