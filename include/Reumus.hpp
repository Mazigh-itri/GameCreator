#ifndef REUMUS_H
#define REUMUS_H
#include "Pawn.h"


class Reumus: public Pawn
{
    public:
        Reumus();
        Reumus(int,int);
        virtual ~Reumus();
        Reumus(const Reumus& other);

    protected:

    private:
};

#endif // REUMUS_H
