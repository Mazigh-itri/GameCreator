#ifndef OUEURJ_H
#define OUEURJ_H

#include "Oueurj.h"
#include "Pawn.h"

class Oueurj: public Pawn
{
    public:
        Oueurj();
        Oueurj(int x, int y);
        virtual ~Oueurj();
        Oueurj(const Oueurj& other);
        int moveto(int offset_x,int offset_y);

    protected:
        bool moveAuthorisation(int offset_x,int offset_y);
    private:

};

#endif // OUEURJ_H
