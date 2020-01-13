#ifndef DIAMS_H
#define DIAMS_H

#include <Pawn.h>


class Diams : public Pawn
{
    public:
        Diams();
        Diams(int x, int y);
        Diams (const Diams& other);
        virtual ~Diams();

    protected:

    private:
};

#endif // DIAMS_H
